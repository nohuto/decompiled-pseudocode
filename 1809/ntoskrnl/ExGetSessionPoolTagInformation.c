/*
 * XREFs of ExGetSessionPoolTagInformation @ 0x14069F774
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExGetAttachedSessionPoolTagInfo @ 0x14069F94C (ExGetAttachedSessionPoolTagInfo.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionPoolTagInformation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int AttachedSessionPoolTagInfo; // ebx
  _QWORD *v5; // r14
  _DWORD *v7; // rdi
  unsigned int v8; // esi
  __int64 result; // rax
  unsigned int SessionId; // eax
  int v11; // r15d
  _KPROCESS *NextSession; // rdi
  _QWORD *v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // r12d
  unsigned int v16; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-90h] BYREF
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-80h]
  _BYTE v20[48]; // [rsp+50h] [rbp-78h] BYREF

  AttachedSessionPoolTagInfo = 0;
  v19 = a3;
  *a3 = 0;
  v5 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( (_DWORD)a2 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = ExLockUserBuffer(a1, a2, a3, 1LL, &v17, &P);
    AttachedSessionPoolTagInfo = result;
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v17 = 0LL;
    P = 0LL;
  }
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( *a4 != -1 && *a4 == SessionId )
  {
    v5 = v17;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v17, v8, v7, SessionId);
    if ( AttachedSessionPoolTagInfo >= 0 )
      goto LABEL_15;
    goto LABEL_18;
  }
  v11 = 0;
  NextSession = (_KPROCESS *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_14;
  v13 = v17;
  while ( 1 )
  {
    v14 = MmGetSessionIdEx((__int64)NextSession);
    v15 = v14;
    if ( *a4 != -1 && *a4 != v14 )
      goto LABEL_13;
    AttachedSessionPoolTagInfo = MmAttachSession(NextSession, (__int64)v20);
    if ( AttachedSessionPoolTagInfo < 0 )
      goto LABEL_14;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v13, v8, &v16, v15);
    MmDetachSession((__int64)NextSession, (__int64)v20);
    if ( AttachedSessionPoolTagInfo < 0 )
    {
      if ( AttachedSessionPoolTagInfo != -1073741820 )
        goto LABEL_31;
      v8 = 0;
      goto LABEL_12;
    }
    if ( v16 > v8 || v16 < 0x38 )
      break;
    v5 = v13;
    v13 = (_QWORD *)((char *)v13 + v16);
    v8 -= v16;
LABEL_12:
    v11 += v16;
    if ( *a4 != -1 )
      goto LABEL_31;
LABEL_13:
    NextSession = (_KPROCESS *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_14;
  }
  AttachedSessionPoolTagInfo = -1073741675;
LABEL_31:
  ObfDereferenceObject(NextSession);
LABEL_14:
  *v19 = v11;
LABEL_15:
  if ( AttachedSessionPoolTagInfo >= 0 && v5 )
    *v5 = 0LL;
LABEL_18:
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return (unsigned int)AttachedSessionPoolTagInfo;
}

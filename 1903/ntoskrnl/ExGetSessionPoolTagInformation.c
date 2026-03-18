/*
 * XREFs of ExGetSessionPoolTagInformation @ 0x1406BF68C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExGetAttachedSessionPoolTagInfo @ 0x1406BF874 (ExGetAttachedSessionPoolTagInfo.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionPoolTagInformation(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // r8
  int AttachedSessionPoolTagInfo; // ebx
  _QWORD *v10; // r14
  __int64 result; // rax
  unsigned int SessionId; // eax
  int v13; // r12d
  void *NextSession; // rdi
  _QWORD *v15; // r15
  unsigned int v16; // r13d
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-29h]
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v21; // [rsp+50h] [rbp-19h]
  _BYTE v22[48]; // [rsp+58h] [rbp-11h] BYREF

  v21 = a3;
  v19 = a4;
  memset(v22, 0, sizeof(v22));
  AttachedSessionPoolTagInfo = 0;
  v10 = 0LL;
  *a3 = 0;
  if ( a2 )
  {
    LOBYTE(v8) = KeGetCurrentThread()->PreviousMode;
    result = ExLockUserBuffer(a1, a2, v8, 1LL, &v18, &P);
    AttachedSessionPoolTagInfo = result;
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v18 = 0LL;
    P = 0LL;
  }
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( *a4 != -1 && *a4 == SessionId )
  {
    v10 = v18;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v18, a2, a3, SessionId);
    if ( AttachedSessionPoolTagInfo >= 0 )
      goto LABEL_15;
    goto LABEL_18;
  }
  v13 = 0;
  NextSession = (void *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_14;
  v15 = v18;
  while ( 1 )
  {
    v16 = MmGetSessionIdEx((__int64)NextSession);
    if ( *v19 != -1 && *v19 != v16 )
      goto LABEL_13;
    AttachedSessionPoolTagInfo = MmAttachSession((ULONG_PTR)NextSession);
    if ( AttachedSessionPoolTagInfo < 0 )
      goto LABEL_14;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v15, a2, &v17, v16);
    MmDetachSession((__int64)NextSession, (__int64)v22);
    if ( AttachedSessionPoolTagInfo < 0 )
    {
      if ( AttachedSessionPoolTagInfo != -1073741820 )
        goto LABEL_31;
      a2 = 0;
      goto LABEL_12;
    }
    if ( v17 > a2 || v17 < 0x38 )
      break;
    v10 = v15;
    v15 = (_QWORD *)((char *)v15 + v17);
    a2 -= v17;
LABEL_12:
    v13 += v17;
    if ( *v19 != -1 )
      goto LABEL_31;
LABEL_13:
    NextSession = (void *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_14;
  }
  AttachedSessionPoolTagInfo = -1073741675;
LABEL_31:
  ObfDereferenceObject(NextSession);
LABEL_14:
  *v21 = v13;
LABEL_15:
  if ( AttachedSessionPoolTagInfo >= 0 && v10 )
    *v10 = 0LL;
LABEL_18:
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return (unsigned int)AttachedSessionPoolTagInfo;
}

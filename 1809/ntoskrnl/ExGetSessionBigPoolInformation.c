/*
 * XREFs of ExGetSessionBigPoolInformation @ 0x1408CC5FC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x14031A744 (ExGetBigPoolInfo.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionBigPoolInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r13
  int v6; // edi
  _QWORD *v7; // r12
  _DWORD *v8; // r15
  __int64 result; // rax
  __int64 v10; // rbp
  _KPROCESS *NextSession; // rbx
  __int64 v12; // r14
  int SessionId; // eax
  int v14; // r15d
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  int BigPoolInfo; // eax
  int v18; // [rsp+30h] [rbp-A8h]
  PVOID P; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-88h] BYREF
  _DWORD *v23; // [rsp+58h] [rbp-80h]
  _BYTE v24[48]; // [rsp+60h] [rbp-78h] BYREF

  *a3 = 0;
  v4 = 0LL;
  v5 = a2;
  v6 = 0;
  v7 = 0LL;
  v23 = a4;
  v8 = a3;
  v18 = 1;
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v21, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v10 = v21;
  }
  else
  {
    v10 = 0LL;
    P = 0LL;
  }
  NextSession = (_KPROCESS *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_30;
  while ( 1 )
  {
    v12 = v4 + v10;
    SessionId = MmGetSessionId((__int64)NextSession);
    LODWORD(v21) = SessionId;
    if ( *v23 == -1 || SessionId == *v23 )
      break;
LABEL_21:
    NextSession = (_KPROCESS *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_25;
  }
  if ( (int)MmAttachSession(NextSession, (__int64)v24) < 0 )
  {
LABEL_20:
    if ( *v23 != -1 )
      goto LABEL_24;
    goto LABEL_21;
  }
  if ( (unsigned int)v4 >= 0xFFFFFFD8 )
  {
    v6 = -1073741675;
    MmDetachSession((__int64)NextSession, (__int64)v24);
    ObfDereferenceObject(NextSession);
    goto LABEL_29;
  }
  if ( v4 + 40 <= v5 && (v14 = v18) != 0 )
  {
    v15 = (_DWORD *)(v4 + v10);
    v16 = v5 - v4;
  }
  else
  {
    v14 = 0;
    v15 = 0LL;
    v18 = 0;
    v16 = 0;
    v6 = -1073741820;
  }
  BigPoolInfo = ExGetBigPoolInfo(v15, v16, 0, &v22);
  if ( BigPoolInfo >= 0 || (v6 = BigPoolInfo, BigPoolInfo == -1073741820) )
  {
    if ( v14 == 1 && BigPoolInfo >= 0 )
    {
      v7 = (_QWORD *)(v4 + v10);
      *(_DWORD *)(v12 + 8) = v21;
      *(_QWORD *)v12 = (unsigned int)(24 * *(_DWORD *)(v12 + 12) + 16);
    }
    v4 = v22 + (unsigned int)v4;
    MmDetachSession((__int64)NextSession, (__int64)v24);
    goto LABEL_20;
  }
  MmDetachSession((__int64)NextSession, (__int64)v24);
LABEL_24:
  ObfDereferenceObject(NextSession);
LABEL_25:
  if ( v6 < 0 )
  {
LABEL_29:
    v8 = a3;
    goto LABEL_30;
  }
  v8 = a3;
  if ( v7 )
    *v7 = 0LL;
LABEL_30:
  if ( v10 )
    ExUnlockUserBuffer((struct _MDL *)P);
  *v8 = v4;
  return (unsigned int)v6;
}

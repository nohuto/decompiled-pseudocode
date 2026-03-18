/*
 * XREFs of ExGetSessionBigPoolInformation @ 0x140908CDC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExGetBigPoolInfo @ 0x140339300 (ExGetBigPoolInfo.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     MmQuitNextSession @ 0x1406EE950 (MmQuitNextSession.c)
 */

__int64 __fastcall ExGetSessionBigPoolInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // r14
  __int64 v7; // rsi
  int v8; // edi
  _QWORD *v9; // r12
  __int64 result; // rax
  struct _MDL *v11; // r13
  __int64 v12; // rbp
  void *NextSession; // rbx
  __int64 v14; // r14
  int SessionId; // eax
  int v16; // r15d
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  int BigPoolInfo; // eax
  int v20; // [rsp+30h] [rbp-A8h]
  PVOID P; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-88h] BYREF
  _DWORD *v25; // [rsp+58h] [rbp-80h]
  __int64 v26; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v27[48]; // [rsp+68h] [rbp-70h] BYREF

  v5 = a3;
  v25 = a4;
  memset(v27, 0, sizeof(v27));
  *v5 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v20 = 1;
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v26, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v11 = (struct _MDL *)P;
    v12 = v26;
  }
  else
  {
    v12 = 0LL;
    v11 = 0LL;
  }
  NextSession = (void *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_30;
  while ( 1 )
  {
    v14 = v7 + v12;
    SessionId = MmGetSessionId((__int64)NextSession);
    LODWORD(P) = SessionId;
    if ( *v25 == -1 || SessionId == *v25 )
      break;
LABEL_21:
    NextSession = (void *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_25;
  }
  if ( (int)MmAttachSession((ULONG_PTR)NextSession) < 0 )
  {
LABEL_20:
    if ( *v25 != -1 )
      goto LABEL_24;
    goto LABEL_21;
  }
  if ( (unsigned int)v7 >= 0xFFFFFFD8 )
  {
    v8 = -1073741675;
    MmDetachSession((__int64)NextSession, (__int64)v27);
    MmQuitNextSession(NextSession);
    goto LABEL_29;
  }
  if ( v7 + 40 <= (unsigned __int64)a2 && (v16 = v20) != 0 )
  {
    v17 = (_DWORD *)(v7 + v12);
    v18 = a2 - v7;
  }
  else
  {
    v16 = 0;
    v17 = 0LL;
    v20 = 0;
    v18 = 0;
    v8 = -1073741820;
  }
  BigPoolInfo = ExGetBigPoolInfo(v17, v18, 0, &v24);
  if ( BigPoolInfo >= 0 || (v8 = BigPoolInfo, BigPoolInfo == -1073741820) )
  {
    if ( v16 == 1 && BigPoolInfo >= 0 )
    {
      v9 = (_QWORD *)(v7 + v12);
      *(_DWORD *)(v14 + 8) = (_DWORD)P;
      *(_QWORD *)v14 = (unsigned int)(24 * *(_DWORD *)(v14 + 12) + 16);
    }
    v7 = v24 + (unsigned int)v7;
    MmDetachSession((__int64)NextSession, (__int64)v27);
    goto LABEL_20;
  }
  MmDetachSession((__int64)NextSession, (__int64)v27);
LABEL_24:
  MmQuitNextSession(NextSession);
LABEL_25:
  if ( v8 < 0 )
  {
LABEL_29:
    v5 = a3;
    goto LABEL_30;
  }
  v5 = a3;
  if ( v9 )
    *v9 = 0LL;
LABEL_30:
  if ( v12 )
    ExUnlockUserBuffer(v11);
  *v5 = v7;
  return (unsigned int)v8;
}

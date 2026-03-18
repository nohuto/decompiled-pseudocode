/*
 * XREFs of MmGetSessionMappedViewInformation @ 0x1408879CC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     MiGetSystemPteStatistics @ 0x140898A08 (MiGetSystemPteStatistics.c)
 */

__int64 __fastcall MmGetSessionMappedViewInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // r12
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // r14
  void *i; // rcx
  __int64 NextSession; // rax
  void *v14; // rdi
  int SessionId; // r12d
  unsigned int v16; // eax
  unsigned __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-41h]
  PVOID P; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v22; // [rsp+48h] [rbp-31h]
  __int64 v23; // [rsp+50h] [rbp-29h] BYREF
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v25[48]; // [rsp+60h] [rbp-19h] BYREF

  v22 = a3;
  v20 = a4;
  v5 = a3;
  memset(v25, 0, sizeof(v25));
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v19, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v8 = v19;
  }
  else
  {
    v8 = 0LL;
    P = 0LL;
    v19 = 0LL;
  }
LABEL_5:
  *v5 = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = 0LL;
  for ( i = 0LL; ; i = v14 )
  {
    NextSession = MmGetNextSession(i);
    v14 = (void *)NextSession;
    if ( !NextSession )
      break;
    v11 = v8 + (unsigned int)v9;
    SessionId = MmGetSessionId(NextSession);
    if ( *v20 == -1 || SessionId == *v20 )
    {
      if ( (int)MmAttachSession((ULONG_PTR)v14) >= 0 )
      {
        v16 = v9 + 32;
        if ( (int)v9 + 32 < (unsigned int)v9 )
        {
          MmDetachSession((__int64)v14, (__int64)v25);
          ObfDereferenceObject(v14);
          v5 = v22;
          goto LABEL_5;
        }
        v9 = v16;
        if ( v16 <= a2 )
        {
          v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
          MiGetSystemPteStatistics(v17 + 1160, &v23, &v24);
          *(_QWORD *)(v11 + 16) = v23 << 12;
          *(_QWORD *)(v11 + 24) = v24 << 12;
          *(_DWORD *)(v11 + 8) = SessionId;
          v18 = *(_DWORD *)(v17 + 220);
          v8 = v19;
          *(_DWORD *)(v11 + 12) = v18;
          *(_QWORD *)v11 = v9;
        }
        else
        {
          v10 = -1073741820;
        }
        MmDetachSession((__int64)v14, (__int64)v25);
      }
      if ( *v20 != -1 )
      {
        ObfDereferenceObject(v14);
        break;
      }
    }
  }
  if ( v10 >= 0 && v11 )
    *(_QWORD *)v11 = 0LL;
  if ( v8 )
    ExUnlockUserBuffer((struct _MDL *)P);
  *v22 = v9;
  return (unsigned int)v10;
}

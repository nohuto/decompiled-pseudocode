/*
 * XREFs of EtwpStopUmLogger @ 0x18004CFF4
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18004FE80 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x180086170 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     EtwpStopLoggerInstance @ 0x18004CF20 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x18004CFA0 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x18004D150 (EtwpGetPrivateLoggerContext.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180050F34 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x1800A0360 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned int PrivateLoggerContext; // esi
  __int64 v7; // rbx
  char v8; // r15
  __int64 v9; // r13
  int v10; // ebp
  void *v11; // r14
  NTSTATUS v12; // eax
  int v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+74h] [rbp+1Ch]

  v17 = HIDWORD(a3);
  v15 = 0LL;
  v4 = 0;
  v14 = 0;
  v16 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &v15);
  if ( !PrivateLoggerContext )
  {
    v7 = v15;
    v8 = 1;
    v9 = *(unsigned int *)(v15 + 20);
    v10 = *(_DWORD *)(v15 + 324) & 0x400;
    v11 = *(void **)(v15 + 32);
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v4 = 1;
      v14 = *(_DWORD *)(v15 + 384);
      v16 = *(_DWORD *)(v15 + 388);
      *(_DWORD *)(v15 + 384) = *(_DWORD *)(a4 + 104);
      *(_DWORD *)(v7 + 388) = *(_DWORD *)(a4 + 112);
      if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
        *(_QWORD *)(v7 + 376) = *(_QWORD *)(a4 + 16);
    }
    PrivateLoggerContext = EtwpStopLoggerInstance(v7);
    if ( !PrivateLoggerContext )
    {
      if ( v10 || (v12 = EtwpSynchronizeWithLogger(v7, 8), v12 >= 0) )
      {
        EtwpGetUmLoggerInfoFromContext(a4, v7, 0LL);
        v8 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
        if ( v10 )
          EtwpFreeLoggerContext(v15);
        v7 = 0LL;
        v15 = 0LL;
        if ( v11 )
        {
          NtWaitForSingleObject(v11, 0, 0LL);
          NtClose(v11);
        }
      }
      else
      {
        PrivateLoggerContext = RtlNtStatusToDosError(v12);
      }
    }
    if ( v4 && v7 )
    {
      *(_DWORD *)(v7 + 384) = v14;
      *(_DWORD *)(v7 + 388) = v16;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
  }
  return PrivateLoggerContext;
}

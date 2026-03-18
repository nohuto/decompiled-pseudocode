/*
 * XREFs of PpmCheckStart @ 0x1400BE700
 * Callers:
 *     PpmCheckPeriodicStart @ 0x1400BD370 (PpmCheckPeriodicStart.c)
 *     PpmCheckCustomRun @ 0x14015B030 (PpmCheckCustomRun.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14015C9A8 (PpmPerfSetAllDomainsToUpdate.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PpmCheckStart(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  REGHANDLE v4; // rdi
  _BOOL8 v5; // rdx
  int v6; // ecx
  __int64 (*v7)(void); // r8
  BOOLEAN result; // al
  REGHANDLE v9; // rbx
  int v10; // r8d
  int v11; // edx
  int v12; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-40h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+80h] [rbp-28h]
  int *v19; // [rsp+88h] [rbp-20h]
  __int64 v20; // [rsp+90h] [rbp-18h]

  v3 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckTime = RtlGetInterruptTimePrecise(v14, a2, a3);
  v13 = PpmCheckLastExecutionTime;
  v12 = v3;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START) )
    {
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v17 = &v13;
      *(_QWORD *)&UserData.Size = 8LL;
      v19 = &v12;
      v18 = 8LL;
      v20 = 4LL;
      EtwWriteEx(v4, &PPM_ETW_PERF_CHECK_START, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v3);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  v5 = (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008];
  if ( __PAIR64__(PpmCheckDeadlineBoostActive, PpmCheckLatencyBoostActive) != __PAIR64__(
                                                                                v5,
                                                                                (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008]) )
  {
    PpmPerfSetAllDomainsToUpdate(PpmPerfDeadlineBoostExpiration, v5);
    PpmCheckLatencyBoostActive = v10;
    PpmCheckDeadlineBoostActive = v11;
  }
  v6 = PpmCheckPipelineIndex;
  v7 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( v7 )
  {
    while ( 1 )
    {
      PpmCheckPipelineIndex = v6 + 1;
      result = v7();
      if ( !result )
        break;
      v6 = PpmCheckPipelineIndex;
      v7 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
      if ( !v7 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    result = PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmEtwRegistered )
    {
      v9 = PpmEtwHandle;
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
      if ( result )
      {
        v15.Ptr = (ULONGLONG)&PpmCheckTime;
        *(_QWORD *)&v15.Size = 8LL;
        return EtwWriteEx(v9, &PPM_ETW_PERF_CHECK_STOP, 0LL, 0, 0LL, 0LL, 1u, &v15);
      }
    }
  }
  return result;
}

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

BOOLEAN __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rbx
  REGHANDLE v2; // rdi
  _BOOL8 v3; // rdx
  int v4; // ecx
  __int64 (*v5)(void); // r8
  BOOLEAN result; // al
  REGHANDLE v7; // rbx
  int v8; // r8d
  int v9; // edx
  int v10; // [rsp+40h] [rbp-68h] BYREF
  __int64 v11; // [rsp+48h] [rbp-60h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+58h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-40h] BYREF
  __int64 *v15; // [rsp+78h] [rbp-30h]
  __int64 v16; // [rsp+80h] [rbp-28h]
  int *v17; // [rsp+88h] [rbp-20h]
  __int64 v18; // [rsp+90h] [rbp-18h]

  v1 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckTime = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  v11 = PpmCheckLastExecutionTime;
  v10 = v1;
  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START) )
    {
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v15 = &v11;
      *(_QWORD *)&UserData.Size = 8LL;
      v17 = &v10;
      v16 = 8LL;
      v18 = 4LL;
      EtwWriteEx(v2, &PPM_ETW_PERF_CHECK_START, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  v3 = (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008];
  if ( __PAIR64__(PpmCheckDeadlineBoostActive, PpmCheckLatencyBoostActive) != __PAIR64__(
                                                                                v3,
                                                                                (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008]) )
  {
    PpmPerfSetAllDomainsToUpdate(PpmPerfDeadlineBoostExpiration, v3);
    PpmCheckLatencyBoostActive = v8;
    PpmCheckDeadlineBoostActive = v9;
  }
  v4 = PpmCheckPipelineIndex;
  v5 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( v5 )
  {
    while ( 1 )
    {
      PpmCheckPipelineIndex = v4 + 1;
      result = v5();
      if ( !result )
        break;
      v4 = PpmCheckPipelineIndex;
      v5 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
      if ( !v5 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    result = PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmEtwRegistered )
    {
      v7 = PpmEtwHandle;
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
      if ( result )
      {
        v13.Ptr = (ULONGLONG)&PpmCheckTime;
        *(_QWORD *)&v13.Size = 8LL;
        return EtwWriteEx(v7, &PPM_ETW_PERF_CHECK_STOP, 0LL, 0, 0LL, 0LL, 1u, &v13);
      }
    }
  }
  return result;
}

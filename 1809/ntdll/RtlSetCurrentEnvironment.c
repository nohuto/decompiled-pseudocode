/*
 * XREFs of RtlSetCurrentEnvironment @ 0x18008F010
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(__int64 a1, unsigned __int64 *a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  unsigned __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
  ++ProcessParameters->EnvironmentVersion;
  Environment = (unsigned __int64)ProcessParameters->Environment;
  ProcessParameters->Environment = (void *)a1;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( a2 )
  {
    *a2 = Environment;
  }
  else if ( Environment )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Environment);
  }
  return 0LL;
}

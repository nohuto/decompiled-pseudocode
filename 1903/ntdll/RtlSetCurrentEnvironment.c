/*
 * XREFs of RtlSetCurrentEnvironment @ 0x18008B5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(__int64 a1, __int64 *a2)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  memset(&unk_180165B80, 0, 0x468uLL);
  ++ProcessParameters->EnvironmentVersion;
  Environment = (__int64)ProcessParameters->Environment;
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

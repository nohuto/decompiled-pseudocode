/*
 * XREFs of TpSetPoolMaxThreads @ 0x180031670
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x180031760 (LdrpEnableParallelLoading.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180110320 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35F0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMax @ 0x180110DD0 (TppETWPoolThreadMax.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MaxThreads;
  if ( !Pool
    || (MaxThreads & 0x80000000) != 0
    || (*(_QWORD *)&MaxThreads = NtCurrentPeb()->Ldr, *(_BYTE *)(*(_QWORD *)&MaxThreads + 72LL)) )
  {
    TppRaiseInvalidParameter(Pool, *(_QWORD *)&MaxThreads, v2);
  }
  else
  {
    NtSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
      TppETWPoolThreadMax(Pool, WorkerFactoryInformation);
  }
}

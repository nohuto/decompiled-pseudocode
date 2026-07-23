/*
 * XREFs of TpSetPoolMaxThreads @ 0x180062E20
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     sub_180062B70 @ 0x180062B70 (sub_180062B70.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010E940 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     sub_18010F490 @ 0x18010F490 (sub_18010F490.c)
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
    sub_18010EFC8(Pool, *(_QWORD *)&MaxThreads, v2);
  }
  else
  {
    ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
      sub_18010F490(Pool, WorkerFactoryInformation);
  }
}

/*
 * XREFs of TpSetPoolMinThreads @ 0x1800818A0
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     sub_18010F510 @ 0x18010F510 (sub_18010F510.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl TpSetPoolMinThreads(PTP_POOL Pool, ULONG MinThreads)
{
  __int64 v2; // r8
  int v4; // edi
  __int64 v5; // rdx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MinThreads;
  if ( !Pool
    || (MinThreads & 0x80000000) != 0
    || (*(_QWORD *)&MinThreads = NtCurrentPeb()->Ldr, *(_BYTE *)(*(_QWORD *)&MinThreads + 72LL)) )
  {
    sub_18010EFC8(Pool, *(_QWORD *)&MinThreads, v2);
    return -1073741811;
  }
  else
  {
    v4 = ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMinimum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v5 = 2147353478LL;
    if ( *(_BYTE *)v5 )
    {
      if ( v4 >= 0 )
        sub_18010F510(Pool, WorkerFactoryInformation);
    }
    return v4;
  }
}

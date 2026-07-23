/*
 * XREFs of TpSetPoolThreadBasePriority @ 0x180088890
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A35F0 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpSetPoolThreadBasePriority(PTP_POOL Pool, ULONG BasePriority)
{
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( !Pool )
    return -1073741811;
  if ( (int)BasePriority < 15 )
  {
    if ( (int)BasePriority <= -15 )
      BasePriority = -16;
    WorkerFactoryInformation = BasePriority;
  }
  else
  {
    WorkerFactoryInformation = 16;
  }
  return NtSetInformationWorkerFactory(
           *((HANDLE *)Pool + 7),
           WorkerFactoryThreadBasePriority,
           &WorkerFactoryInformation,
           4u);
}

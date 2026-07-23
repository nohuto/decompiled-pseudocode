/*
 * XREFs of TpSetPoolThreadBasePriority @ 0x180084880
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
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
  return ZwSetInformationWorkerFactory(
           *((HANDLE *)Pool + 7),
           WorkerFactoryThreadBasePriority,
           &WorkerFactoryInformation,
           4u);
}

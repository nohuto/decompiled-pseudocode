/*
 * XREFs of TpSetPoolStackInformation @ 0x18007E7A0
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007E680 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl TpSetPoolStackInformation(PTP_POOL Pool, PTP_POOL_STACK_INFORMATION PoolStackInformation)
{
  if ( Pool && PoolStackInformation )
    return ZwSetInformationWorkerFactory(
             *((HANDLE *)Pool + 7),
             WorkerFactoryStackInformation,
             PoolStackInformation,
             0x10u);
  else
    return -1073741811;
}

/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C003B438
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0039E74 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0049A50 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C0013C80 (RaidAdapterRestartQueues.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 876));
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v2 )
    RaidAdapterRestartQueues(a1, 0);
  return (unsigned int)v2;
}

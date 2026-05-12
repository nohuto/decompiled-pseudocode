/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C00386A4
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F30 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C001C234 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0036EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C0016154 (RaidAdapterRestartQueues.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C00622B0 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v2 )
    RaidAdapterRestartQueues(a1);
  return (unsigned int)v2;
}

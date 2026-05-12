/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C00142F8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPowerDownDevice @ 0x1C001420C (RaidAdapterPowerDownDevice.c)
 *     StorPortAdapterIdleCondition @ 0x1C0021360 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0039E74 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C003E8B0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C003EE40 (StorPortPause.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0074084 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 876));
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(a1, 6, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}

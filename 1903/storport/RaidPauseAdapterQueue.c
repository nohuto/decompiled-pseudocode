/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C0017310
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F4C (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00171EC (RaidAdapterPowerDownDevice.c)
 *     StorPortAdapterIdleCondition @ 0x1C001E9E0 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0035AF0 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C003AFE0 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C003B570 (StorPortPause.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0073524 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  signed __int32 v1; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 812));
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(a1, 6, retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return (unsigned int)v1;
}

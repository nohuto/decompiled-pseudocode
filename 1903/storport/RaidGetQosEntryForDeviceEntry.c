/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C0038518
 * Callers:
 *     RaidStartIoPacket @ 0x1C00081C0 (RaidStartIoPacket.c)
 *     StorRemoveIoGatewayItem @ 0x1C000A710 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C000B224 (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000B478 (RiEnqueueDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000B508 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterRestartQueues @ 0x1C001655C (RaidAdapterRestartQueues.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C001C968 (RaidRemovePendingDeviceQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}

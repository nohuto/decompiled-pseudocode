/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C0022408
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     StorRemoveIoGatewayItem @ 0x1C000CD00 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C000D414 (RiNormalizeDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000D718 (RiEnqueueDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000D7A8 (StorSubmitIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C0013D44 (StorNextIoGatewayItem.c)
 *     RaidRemovePendingDeviceQueue @ 0x1C001E4C0 (RaidRemovePendingDeviceQueue.c)
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

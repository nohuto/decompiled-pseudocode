/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C001C8B4
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C0044408 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D154 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidZoneWriteGroupListPurge @ 0x1C001C8F8 (RaidZoneWriteGroupListPurge.c)
 *     RaidRemoveIoQueue @ 0x1C001C940 (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C0042FB4 (RaidCancelIrp.c)
 */

__int64 __fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = a1 + 384;
  while ( 1 )
  {
    v3 = RaidRemoveIoQueue(v2);
    if ( !v3 )
      break;
    RaidCancelIrp(a1, 8LL, v3);
  }
  RaidZoneWriteGroupListPurge(a1 + 400);
  return 0LL;
}

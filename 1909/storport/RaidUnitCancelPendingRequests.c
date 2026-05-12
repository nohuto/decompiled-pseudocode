/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C0019DF0
 * Callers:
 *     RaUnitDisableDeviceIrp @ 0x1C00457F8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D74C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidZoneWriteGroupListPurge @ 0x1C0019E34 (RaidZoneWriteGroupListPurge.c)
 *     RaidRemoveIoQueue @ 0x1C0019E7C (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C00443A4 (RaidCancelIrp.c)
 */

__int64 __fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = a1 + 640;
  while ( 1 )
  {
    v3 = RaidRemoveIoQueue(v2);
    if ( !v3 )
      break;
    RaidCancelIrp(a1, 8LL, v3);
  }
  RaidZoneWriteGroupListPurge(a1 + 656);
  return 0LL;
}

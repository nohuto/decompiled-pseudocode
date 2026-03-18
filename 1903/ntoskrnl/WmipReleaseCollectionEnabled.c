/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14073B05C
 * Callers:
 *     WmipSendEnableRequest @ 0x1406D26E0 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x14072A204 (WmipDoDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140732EF4 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407334D8 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}

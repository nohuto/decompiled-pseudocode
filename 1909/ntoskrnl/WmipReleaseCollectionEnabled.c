/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14073CFBC
 * Callers:
 *     WmipSendEnableRequest @ 0x1406D1A40 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x14072C09C (WmipDoDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140735154 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140735738 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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

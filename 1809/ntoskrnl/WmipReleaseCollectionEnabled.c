/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140710370
 * Callers:
 *     WmipSendEnableRequest @ 0x1406CF574 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x140703548 (WmipDoDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140709294 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140709890 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
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

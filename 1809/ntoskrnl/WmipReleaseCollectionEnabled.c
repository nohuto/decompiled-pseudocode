/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x14070F0D0
 * Callers:
 *     WmipSendEnableRequest @ 0x1406CE2D4 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x1407022A8 (WmipDoDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140707FF4 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1407085F0 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
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

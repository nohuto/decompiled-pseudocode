/*
 * XREFs of WmipWaitForCollectionEnabled @ 0x1408F1560
 * Callers:
 *     WmipSendEnableRequest @ 0x1406D1A40 (WmipSendEnableRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 */

NTSTATUS __fastcall WmipWaitForCollectionEnabled(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 16) & 8) == 0 )
  {
    KeInitializeEvent(*(PRKEVENT *)(a1 + 96), NotificationEvent, 0);
    *(_DWORD *)(a1 + 16) |= 8u;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  KeWaitForSingleObject(*(PVOID *)(a1 + 96), Executive, 0, 0, 0LL);
  return KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
}

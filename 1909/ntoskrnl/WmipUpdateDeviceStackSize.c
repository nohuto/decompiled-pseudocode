/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x140738BCC
 * Callers:
 *     WmipForwardWmiIrp @ 0x140696C4C (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x140738A64 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}

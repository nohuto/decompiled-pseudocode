/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14070C634
 * Callers:
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x14070C4CC (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}

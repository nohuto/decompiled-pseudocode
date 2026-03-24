/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1406C6900
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14015A3B0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14015ADD8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14016A208 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetCustomTargetEvent @ 0x14058FCD4 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1406EAF8C (PnpSetPlugPlayEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14070F270 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetDeviceClassChange @ 0x140710188 (PnpSetDeviceClassChange.c)
 *     PnpShutdownDevices @ 0x140823000 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408332C0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140833330 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14083343C (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408334D8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14083358C (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PnpCreateDeviceEventEntry(size_t Size)
{
  unsigned int v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  v1 = Size;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B706E50u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v1);
    v3[16] = 1;
  }
  return v3;
}

/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1406C6920
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14015A390 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14015ADB8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14016A1E8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetCustomTargetEvent @ 0x14058FCD4 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1406EAFAC (PnpSetPlugPlayEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14070F290 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetDeviceClassChange @ 0x1407101A8 (PnpSetDeviceClassChange.c)
 *     PnpShutdownDevices @ 0x140823020 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1408332E0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140833350 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14083345C (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408334F8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408335AC (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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

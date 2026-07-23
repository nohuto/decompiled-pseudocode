/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1406C7BA0
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14015A4B0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14015AED8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14016A308 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetCustomTargetEvent @ 0x140590CD4 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1406EC22C (PnpSetPlugPlayEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140710510 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetDeviceClassChange @ 0x140711428 (PnpSetDeviceClassChange.c)
 *     PnpShutdownDevices @ 0x140824200 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140834520 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140834590 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14083469C (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140834738 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408347EC (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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

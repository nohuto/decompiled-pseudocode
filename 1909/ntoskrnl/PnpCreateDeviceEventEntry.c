/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140696E70
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1401459E8 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140171E88 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140172F84 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140697020 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140701070 (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x140734580 (PnpSetDeviceClassChange.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14073CFDC (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x14085CB4C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x14086D308 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14086D378 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14086D484 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14086D520 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14086D5D4 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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

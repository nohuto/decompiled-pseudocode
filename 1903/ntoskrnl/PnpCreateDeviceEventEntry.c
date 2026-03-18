/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140669A50
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140145348 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140171798 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140172854 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140669C00 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1406FF290 (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x140732320 (PnpSetDeviceClassChange.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14073B07C (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x14085D44C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x14086DC08 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14086DC78 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14086DD84 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14086DE20 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14086DED4 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
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

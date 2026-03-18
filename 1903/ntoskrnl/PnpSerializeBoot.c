/*
 * XREFs of PnpSerializeBoot @ 0x14019D0C8
 * Callers:
 *     NtSerializeBoot @ 0x140788EC0 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140A0F540 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}

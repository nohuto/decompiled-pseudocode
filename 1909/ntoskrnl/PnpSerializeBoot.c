/*
 * XREFs of PnpSerializeBoot @ 0x14019D848
 * Callers:
 *     NtSerializeBoot @ 0x14078B320 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140A0FCD8 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}

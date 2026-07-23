/*
 * XREFs of PnpSerializeBoot @ 0x140192EF8
 * Callers:
 *     NtSerializeBoot @ 0x140763160 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x1409D3354 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( BYTE2(PnpShutdownEvent.Limit) )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}

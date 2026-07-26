/*
 * XREFs of ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x1C0121D9C
 * Callers:
 *     NdisPDStartup @ 0x1C00C0510 (NdisPDStartup.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C0028410 (ndisReferenceProtocol.c)
 *     ndisReferenceFilterDriver @ 0x1C0029BE4 (ndisReferenceFilterDriver.c)
 */

bool __fastcall ndisPDReferenceClientDriver(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( *a1 == 3 )
    return ndisReferenceProtocol((__int64)a1, 0xEu);
  if ( *a1 == 4 )
    return ndisReferenceFilterDriver((__int64)a1, 4u);
  return result;
}

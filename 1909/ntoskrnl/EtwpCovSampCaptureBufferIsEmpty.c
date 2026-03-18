/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x140334854
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409006C8 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}

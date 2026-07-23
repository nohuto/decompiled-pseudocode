/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x1403165D0
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408C4E08 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}

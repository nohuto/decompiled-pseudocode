/*
 * XREFs of RtlNumberOfClearBits @ 0x1800E9FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800780E0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}

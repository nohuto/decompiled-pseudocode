/*
 * XREFs of RtlNumberOfClearBits @ 0x1800EA0D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180078560 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}

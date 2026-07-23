/*
 * XREFs of RtlNumberOfClearBits @ 0x18008C3E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180081A40 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}

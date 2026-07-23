/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x14030D4D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x14030D6A0 (RtlNumberOfSetBitsInRange.c)
 */

ULONG __cdecl RtlNumberOfClearBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // eax

  v4 = RtlNumberOfSetBitsInRange(BitMapHeader, StartingIndex, Length);
  if ( v4 == -1 )
    return -1;
  else
    return Length - v4;
}

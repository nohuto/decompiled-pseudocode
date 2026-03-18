/*
 * XREFs of RtlInitializeBitMap @ 0x140122E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}

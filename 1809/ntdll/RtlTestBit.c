/*
 * XREFs of RtlTestBit @ 0x180002690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  return _bittest((const signed __int32 *)BitMapHeader->Buffer, BitNumber);
}

/*
 * XREFs of RtlFindMostSignificantBit @ 0x140122AB0
 * Callers:
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiValidateZeroBits @ 0x14060A148 (MiValidateZeroBits.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}

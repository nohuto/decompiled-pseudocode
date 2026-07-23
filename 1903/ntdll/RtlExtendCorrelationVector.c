/*
 * XREFs of RtlExtendCorrelationVector @ 0x180072570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800725B4 @ 0x1800725B4 (sub_1800725B4.c)
 *     sub_180072FCC @ 0x180072FCC (sub_180072FCC.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int v1; // eax
  __int64 v2; // rcx
  DWORD v3; // r10d
  __int64 v4; // r11

  if ( (int)sub_1800725B4(CorrelationVector) < 0 )
    return -2147483643;
  v1 = sub_180072FCC();
  if ( (int)v4 >= v1 - 3 )
    return -2147483643;
  *(_WORD *)(v4 + v2 + 1) = 12334;
  *(_BYTE *)(v4 + v2 + 3) = v3;
  return v3;
}

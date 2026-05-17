/*
 * XREFs of RtlExtendCorrelationVector @ 0x180072570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800725B4 @ 0x1800725B4 (sub_1800725B4.c)
 *     sub_180072FCC @ 0x180072FCC (sub_180072FCC.c)
 */

__int64 RtlExtendCorrelationVector()
{
  int v0; // eax
  __int64 v1; // rcx
  unsigned int v2; // r10d
  __int64 v3; // r11

  if ( (int)sub_1800725B4() < 0 )
    return (unsigned int)-2147483643;
  v0 = sub_180072FCC();
  if ( (int)v3 >= v0 - 3 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    *(_WORD *)(v3 + v1 + 1) = 12334;
    *(_BYTE *)(v3 + v1 + 3) = v2;
  }
  return v2;
}

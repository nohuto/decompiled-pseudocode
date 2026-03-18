/*
 * XREFs of MiTryConvertLargePageAttribute @ 0x14017D7C0
 * Callers:
 *     MiFreeLargePageMemory @ 0x140146DD8 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiChangePageAttributeContiguous @ 0x14017D844 (MiChangePageAttributeContiguous.c)
 */

__int64 __fastcall MiTryConvertLargePageAttribute(__int64 a1, int a2)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int16 v6; // cx

  v3 = MiLargePageSizes[a2];
  v4 = 48 * a1 - 0x58000000000LL;
  v5 = v4 + 48 * v3;
  while ( 1 )
  {
    if ( v4 >= v5 )
    {
      MiChangePageAttributeContiguous(a1, v3);
      return 1LL;
    }
    if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
      break;
    v6 = *(_WORD *)(v4 + 32);
    if ( !((*(_BYTE *)(v4 + 34) & 7) == 5 ? v6 == 1 : v6 == 2) )
      break;
    v4 += 48LL;
  }
  return 0LL;
}

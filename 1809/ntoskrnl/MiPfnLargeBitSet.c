/*
 * XREFs of MiPfnLargeBitSet @ 0x14009AA90
 * Callers:
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPfnLargeBitSet(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  __int64 *v3; // r10
  __int64 i; // rcx

  if ( !*(_BYTE *)(a1 + 4766) )
    return 0xFFFFFFFFLL;
  v2 = 0;
  v3 = MiLargePageSizes;
  for ( i = a1 + 5000; !*(_QWORD *)i || !_bittest64(*(const signed __int64 **)(i + 8), a2 / *v3); i += 16LL )
  {
    ++v2;
    ++v3;
    if ( v2 >= 2 )
      return 0xFFFFFFFFLL;
  }
  return v2;
}

/*
 * XREFs of SdbpCheckVersion @ 0x1408E90D8
 * Callers:
 *     SdbpCheckAttribute @ 0x140720580 (SdbpCheckAttribute.c)
 *     SdbpMatchOsVersion @ 0x14072312C (SdbpMatchOsVersion.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F40 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // ecx

  v3 = 48;
  while ( (unsigned __int16)(a1 >> v3) == (unsigned __int16)(a2 >> v3) || (unsigned __int16)(a1 >> v3) == 0xFFFF )
  {
    v3 -= 16;
    if ( v3 < 0 )
      return 1LL;
  }
  return 0LL;
}

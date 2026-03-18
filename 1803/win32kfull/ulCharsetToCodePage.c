/*
 * XREFs of ulCharsetToCodePage @ 0x1C02ADBEC
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C003F6A8 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C02648A8 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0264A5C (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     pcpComputeGlyphset @ 0x1C02ADA2C (pcpComputeGlyphset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1)
{
  int v1; // edx
  _DWORD *v2; // rax

  if ( a1 == 255 )
    return 1LL;
  v1 = 0;
  v2 = charsets;
  while ( *v2 != a1 )
  {
    ++v1;
    if ( (__int64)++v2 >= (__int64)L".FON" )
      return gbDBCSCodePage != 0 ? 0x4E4 : 0;
  }
  return (unsigned int)codepages[v1];
}

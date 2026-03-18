/*
 * XREFs of ulCharsetToCodePage @ 0x1C014D0C4
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C01158EC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C014CEFC (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0278528 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
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
  v2 = &charsets;
  do
  {
    if ( *v2 == a1 )
      return (unsigned int)codepages[v1];
    ++v1;
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&FLOAT_16_0 );
  return gbDBCSCodePage != 0 ? 0x4E4 : 0;
}

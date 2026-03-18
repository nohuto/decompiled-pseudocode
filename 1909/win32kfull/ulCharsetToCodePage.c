/*
 * XREFs of ulCharsetToCodePage @ 0x1C02D2354
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C00F8A2C (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028E08C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C028E244 (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1)
{
  __int64 v1; // rax
  _DWORD *i; // rdx

  if ( a1 == 255 )
    return 1LL;
  v1 = 0LL;
  for ( i = &charsets; *i != a1; ++i )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x11 )
      return gbDBCSCodePage != 0 ? 0x4E4 : 0;
  }
  return (unsigned int)codepages[v1];
}

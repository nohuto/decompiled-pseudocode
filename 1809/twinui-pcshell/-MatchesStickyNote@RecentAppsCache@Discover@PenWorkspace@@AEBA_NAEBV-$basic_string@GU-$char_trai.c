/*
 * XREFs of ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18019B008
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18019A0A0 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180198B48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::MatchesStickyNote(__int64 a1, __int64 *a2)
{
  unsigned __int16 *v2; // r8
  char v3; // r11
  __int64 v4; // r9
  __int64 v5; // rcx

  v2 = *(unsigned __int16 **)(a1 + 208);
  v3 = 0;
  if ( v2 && *v2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    v5 = (__int64)a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      v5 = *a2;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v5, a2[2], v2, v4) )
      return 1;
  }
  return v3;
}

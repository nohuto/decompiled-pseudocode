/*
 * XREFs of ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180201130
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1802001A8 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 * Callees:
 *     <none>
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::MatchesStickyNote(__int64 a1, char *a2)
{
  char *v2; // rax
  __int64 v3; // rcx
  char *v4; // r8
  __int64 v5; // rdx
  char v6; // cl
  signed __int64 v7; // r8
  unsigned __int16 v8; // r9
  int v9; // eax

  v2 = *(char **)(a1 + 208);
  if ( !v2 || !*(_WORD *)v2 )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)&v2[2 * v3] );
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v4 = *(char **)a2;
  v5 = *((_QWORD *)a2 + 2);
  if ( v5 != v3 )
    return 0;
  v6 = 1;
  if ( v5 )
  {
    v7 = v4 - v2;
    while ( 1 )
    {
      v8 = *(_WORD *)&v2[v7];
      if ( v8 != *(_WORD *)v2 )
        break;
      v2 += 2;
      if ( !--v5 )
        goto LABEL_12;
    }
    v9 = v8 < *(_WORD *)v2 ? -1 : 1;
  }
  else
  {
LABEL_12:
    v9 = 0;
  }
  if ( v9 )
    return 0;
  return v6;
}

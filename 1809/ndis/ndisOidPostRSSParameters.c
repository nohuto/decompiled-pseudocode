/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C001FC80
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenRSSParameters @ 0x1C001FD18 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001FEF0 (ndisPostSetMiniportRSSParameters.c)
 *     ndisShouldCacheRSSParameters @ 0x1C0020058 (ndisShouldCacheRSSParameters.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 */

void __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(186LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSParameters(v1, v3, *((unsigned int *)a1 + 10));
    if ( v4 && (unsigned __int8)ndisShouldCacheRSSParameters(v3) )
      ndisPostSetOpenRSSParameters(v4, v3, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(187LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v4, *((_DWORD *)a1 + 10));
}

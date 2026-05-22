/*
 * XREFs of ?_Tidy@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@IEAAXXZ @ 0x180169A5C
 * Callers:
 *     ?OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x1801668F0 (-OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = v2 - 1;
    a1[4] = v3;
    if ( !v3 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x18);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[2] = 0LL;
  a1[1] = 0LL;
}

/*
 * XREFs of ?push_back@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x180169A8C
 * Callers:
 *     ?EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z @ 0x180165780 (-EnsurePresent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JH@Z.c)
 *     ?OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x1801668C0 (-OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@IEAAX_K@Z @ 0x1801698A0 (-_Growmap@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$all.c)
 */

__int64 __fastcall std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::push_back(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  v6 = a1[1];
  if ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
    v6 = a1[1];
  }
  result = *(_QWORD *)(v6 + 8 * v5);
  *(_OWORD *)result = *(_OWORD *)a2;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a2 + 16);
  ++a1[4];
  return result;
}

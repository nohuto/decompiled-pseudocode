/*
 * XREFs of _Getcoll @ 0x1800CA074
 * Callers:
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800BAD7C (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getcat@?$collate@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800BAE98 (-_Getcat@-$collate@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BE1A8 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BEE40 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Getcat@?$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800C5120 (-_Getcat@-$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C6ECC (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     _GetLocaleName @ 0x1800B7698 (_GetLocaleName.c)
 */

_Collvec *__cdecl Getcoll(_Collvec *__return_ptr retstr)
{
  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 4);
  *(&retstr->_Page + 1) = ___lc_collate_cp_func();
  retstr->_LocaleName = GetLocaleName(1);
  return retstr;
}

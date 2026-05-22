/*
 * XREFs of ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x180106750
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall DWMCursorBroker::SetClosestInteractiveBounds(__int64 a1, int *a2, __int128 *a3)
{
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v8 = *a2;
  v9 = *((_QWORD *)a2 + 1);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)(a1 + 40),
    (__int64 **)&v7,
    &v8);
  v5 = v7;
  if ( (_QWORD)v7 != *(_QWORD *)(a1 + 48) )
  {
    v7 = *a3;
    *(_OWORD *)(*(_QWORD *)(v5 + 32) + 100LL) = v7;
  }
  return 0LL;
}

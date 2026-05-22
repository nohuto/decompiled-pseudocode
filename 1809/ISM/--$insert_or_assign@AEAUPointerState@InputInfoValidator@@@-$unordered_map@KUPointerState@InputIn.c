/*
 * XREFs of ??$insert_or_assign@AEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x180105978
 * Callers:
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAULegacyInputInfo@@@Z @ 0x1801055B4 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUPointerState@InputInfoValidator@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@1@@Z @ 0x180105A40 (--$_Insert@AEAU-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$_List_unchecked_iterator@V.c)
 *     ??$_Buynode@AEBKAEAUPointerState@InputInfoValidator@@@?$_List_buy@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@PEAX@1@PEAU21@0AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x180105C4C (--$_Buynode@AEBKAEAUPointerState@InputInfoValidator@@@-$_List_buy@U-$pair@$$CBKUPointerState@Inp.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,InputInfoValidator::PointerState>::insert_or_assign<InputInfoValidator::PointerState &>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  int v7; // r8d
  __int64 *v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    a1,
    &v15,
    a3);
  v8 = (__int64 *)a1[1];
  v9 = v15;
  if ( v15 == v8 )
  {
    v10 = *v8;
    v11 = *(__int64 **)(*v8 + 8);
    v12 = std::_List_buy<std::pair<unsigned long const,InputInfoValidator::PointerState>>::_Buynode<unsigned long const &,InputInfoValidator::PointerState &>(
            (_DWORD)v8,
            *v8,
            (_DWORD)v11,
            v7,
            (__int64)a4);
    v13 = a1[2];
    if ( v13 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v13 + 1;
    *(_QWORD *)(v10 + 8) = v12;
    *v11 = v12;
    std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::_Insert<std::pair<unsigned long const,InputInfoValidator::PointerState> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    *(__int64 *)((char *)v15 + 20) = *a4;
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

/*
 * XREFs of ??1?$list@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@QEAA@XZ @ 0x1800A0E34
 * Callers:
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0____::_1_::dtor$0 @ 0x18003B5B1 (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPoi_ea_18003B5B1.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$11 @ 0x1800A0DFA (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$11.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$9 @ 0x1800A274F (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<DWMPointerMapping const,CursorId>>::~list<std::pair<DWMPointerMapping const,CursorId>>(
        __int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x28);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x28);
}

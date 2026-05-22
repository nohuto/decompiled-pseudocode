/*
 * XREFs of ??1?$list@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1800BAA60
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$26 @ 0x18003BBDF (_Win32kInterop--Win32kInterop_--_1_--dtor$26.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator___std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator______0___::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator___std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator______0____::_1_::dtor$0 @ 0x18003DAC5 (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator___std--_Uhash_compare_unsigned_lo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,LegacyDeviceInfo *>>::~list<std::pair<unsigned long const,LegacyDeviceInfo *>>(
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
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
}

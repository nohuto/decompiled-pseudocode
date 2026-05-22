/*
 * XREFs of ??1?$unordered_map@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18009BD1C
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$5 @ 0x18003C752 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::unordered_map<unsigned long,std::shared_ptr<LegacyDeviceInfo>>::~unordered_map<unsigned long,std::shared_ptr<LegacyDeviceInfo>>(
        _QWORD *a1)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // rsi

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (_QWORD **)a1[1];
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v5 = (_QWORD *)a1[1];
  if ( v4 != v5 )
  {
    do
    {
      v6 = (std::_Ref_count_base *)v4[4];
      v7 = (_QWORD *)*v4;
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x28);
      v5 = (_QWORD *)a1[1];
      v4 = v7;
    }
    while ( v7 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x28);
}

/*
 * XREFs of ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x1800A52AC
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800A51BC (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003EDF4 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEBVCResource@@@2@V-$tuple@$$V@2@@-$_Hash@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@AEBQEBVCResource@@@Z @ 0x18003F0E0 (-lower_bound@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::CWeakResourceReference(
        CWeakResourceReference *this,
        struct CResource *a2)
{
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+10h] BYREF

  *((_DWORD *)this + 2) = 0;
  v3 = (char *)this + 16;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::lower_bound(
    0LL,
    (__int64)&v9,
    (unsigned __int8 *)this + 16);
  v6 = v9;
  if ( v9 == qword_18033D078 )
  {
    v10 = (__int64 *)((char *)this + 16);
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CResource const * const &>,std::tuple<>>(
      v4,
      (__int64)v8,
      v5,
      &v10);
    v6 = v8[0];
  }
  *(_QWORD *)(v6 + 24) = this;
  *(_DWORD *)(*(_QWORD *)v3 + 32LL) |= 8u;
  return this;
}

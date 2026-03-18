/*
 * XREFs of ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800C7D94
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18002F204 (-_Init@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x1800740D4 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x180074470 (-equal_range@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C7EB0 (--0-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ @ 0x1800CC0A0 (-_Tidy@-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800D9148 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWeakResourceReference::OnResourceDestroyed(CWeakResourceReference *this)
{
  char *v1; // r14
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 *i; // rax
  __int64 *v6; // r8
  __int64 v7; // rbx
  void (__fastcall **v8)(CWeakResourceReference *); // rax
  __int64 *v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 *v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 16;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
    (__int64)this,
    &v11,
    (unsigned __int8 *)this + 16);
  v3 = v11;
  v4 = v12;
  for ( i = v11; i != v12; i = (__int64 *)*i )
    ;
  if ( v11 == *(__int64 **)qword_18033FF98 && v12 == (__int64 *)qword_18033FF98 )
  {
    std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear(&qword_18033FF98);
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Init(
      (__int64)&CWeakResourceReference::s_weakReferenceMap,
      8LL);
  }
  else
  {
    while ( v3 != v4 )
    {
      v6 = v3;
      v3 = (__int64 *)*v3;
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
        &CWeakResourceReference::s_weakReferenceMap,
        &v13,
        v6);
    }
  }
  v7 = 0LL;
  *(_DWORD *)(*(_QWORD *)v1 + 32LL) &= ~8u;
  v8 = *(void (__fastcall ***)(CWeakResourceReference *))this;
  *(_QWORD *)v1 = 0LL;
  (*v8)(this);
  std::vector<CResource *>::vector<CResource *>(&v11, (char *)this + 24);
  v9 = v11;
  v10 = (unsigned __int64)((char *)v12 - (char *)v11 + 7) >> 3;
  if ( v11 > v12 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v9 + 64LL))(*v9, 0LL, 0LL);
      ++v7;
      ++v9;
    }
    while ( v7 != v10 );
  }
  std::vector<CResource *>::_Tidy(&v11);
  (*(void (__fastcall **)(CWeakResourceReference *))(*(_QWORD *)this + 8LL))(this);
}

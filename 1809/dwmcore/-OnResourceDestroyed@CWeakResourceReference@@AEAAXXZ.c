/*
 * XREFs of ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800678B8
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800679A4 (--0-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ @ 0x18006B280 (-_Tidy@-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@0@Z @ 0x1800C4614 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x1800C489C (-equal_range@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWeakResourceReference::OnResourceDestroyed(CWeakResourceReference *this)
{
  char *v1; // rsi
  __int64 v3; // rcx
  char *i; // rax
  __int64 v5; // rdi
  void (__fastcall **v6)(CWeakResourceReference *); // rax
  char *v7; // rsi
  unsigned __int64 v8; // rbp
  char *v9; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = (char *)this + 16;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
    this,
    &v9,
    (char *)this + 16);
  for ( i = v9; i != v10; i = *(char **)i )
    ;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
    v3,
    &v11,
    v9,
    v10);
  v5 = 0LL;
  *(_DWORD *)(*(_QWORD *)v1 + 32LL) &= ~8u;
  v6 = *(void (__fastcall ***)(CWeakResourceReference *))this;
  *(_QWORD *)v1 = 0LL;
  (*v6)(this);
  std::vector<CResource *>::vector<CResource *>(&v9, (char *)this + 24);
  v7 = v9;
  v8 = (unsigned __int64)(v10 - v9 + 7) >> 3;
  if ( v9 > v10 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v7 + 64LL))(*(_QWORD *)v7, 0LL, 0LL);
      ++v5;
      v7 += 8;
    }
    while ( v5 != v8 );
  }
  std::vector<CResource *>::_Tidy(&v9);
  (*(void (__fastcall **)(CWeakResourceReference *))(*(_QWORD *)this + 8LL))(this);
}

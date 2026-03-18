/*
 * XREFs of ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800C75BC
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x1800789F0 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x18003EFE0 (-equal_range@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x18003F2D0 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18004BEBC (-_Init@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C76D8 (--0-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ @ 0x1800CBA50 (-_Tidy@-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800D9944 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWeakResourceReference::OnResourceDestroyed(CWeakResourceReference *this)
{
  char *v1; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *i; // rax
  _QWORD *v6; // r8
  __int64 v7; // rbx
  void (__fastcall **v8)(CWeakResourceReference *); // rax
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbp
  _QWORD *v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 16;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
    (__int64)this,
    &v11,
    (unsigned __int8 *)this + 16);
  v3 = v11;
  v4 = v12;
  for ( i = v11; i != v12; i = (_QWORD *)*i )
    ;
  if ( v11 == *(_QWORD **)qword_18033D078 && v12 == (_QWORD *)qword_18033D078 )
  {
    std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear(&qword_18033D078);
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Init(
      (__int64)&CWeakResourceReference::s_weakReferenceMap,
      8LL);
  }
  else
  {
    while ( v3 != v4 )
    {
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
        &CWeakResourceReference::s_weakReferenceMap,
        (__int64)&v13,
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
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 64LL))(*v9, 0LL, 0LL);
      ++v7;
      ++v9;
    }
    while ( v7 != v10 );
  }
  std::vector<CResource *>::_Tidy(&v11);
  (*(void (__fastcall **)(CWeakResourceReference *))(*(_QWORD *)this + 8LL))(this);
}

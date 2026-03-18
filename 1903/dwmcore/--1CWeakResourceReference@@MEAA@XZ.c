/*
 * XREFs of ??1CWeakResourceReference@@MEAA@XZ @ 0x180082CB0
 * Callers:
 *     ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x180082C70 (--_ECWeakResourceReference@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18002F204 (-_Init@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x1800740D4 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x180074470 (-equal_range@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800D9148 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 */

void __fastcall CWeakResourceReference::~CWeakResourceReference(CWeakResourceReference *this)
{
  char *v1; // r14
  bool v3; // zf
  __int64 *v4; // rbx
  __int64 *i; // rax
  __int64 *v6; // r8
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (char *)this + 16;
  v3 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  if ( !v3 )
  {
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
      (__int64)this,
      &v7,
      (unsigned __int8 *)this + 16);
    v4 = v7;
    for ( i = v7; i != v8; i = (__int64 *)*i )
      ;
    if ( v7 == *(__int64 **)qword_18033FF98 && v8 == (__int64 *)qword_18033FF98 )
    {
      std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear(&qword_18033FF98);
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Init(
        (__int64)&CWeakResourceReference::s_weakReferenceMap,
        8LL);
    }
    else
    {
      while ( v4 != v8 )
      {
        v6 = v4;
        v4 = (__int64 *)*v4;
        std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
          &CWeakResourceReference::s_weakReferenceMap,
          &v9,
          v6);
      }
    }
    *(_DWORD *)(*(_QWORD *)v1 + 32LL) &= ~8u;
  }
  std::vector<CResource *>::_Tidy((char *)this + 24);
}

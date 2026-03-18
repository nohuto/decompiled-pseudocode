/*
 * XREFs of ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x1800BCEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ @ 0x18006B280 (-_Tidy@-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@0@Z @ 0x1800C4614 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x1800C489C (-equal_range@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::`vector deleting destructor'(
        CWeakResourceReference *this,
        char a2)
{
  char *v2; // rsi
  bool v4; // zf
  __int64 v7; // rcx
  _QWORD *i; // rax
  _QWORD *v9; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-10h]
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 16;
  v4 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  if ( !v4 )
  {
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
      this,
      &v9,
      (char *)this + 16);
    for ( i = v9; i != v10; i = (_QWORD *)*i )
      ;
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
      v7,
      &v11,
      v9,
      v10);
    *(_DWORD *)(*(_QWORD *)v2 + 32LL) &= ~8u;
  }
  std::vector<CResource *>::_Tidy((__int64)this + 24);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}

/*
 * XREFs of ??1CChannelContext@@UEAA@XZ @ 0x1800CF7E0
 * Callers:
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x1800CF7A0 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180040280 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x1800740D4 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V12@@2@AEBQEAVCChannelContext@@@Z @ 0x1800C5B38 (-equal_range@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800C5C28 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$h.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x1801C1910 (-clear@-$list@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-$pair@QEAVCChannelContext@@M@st.c)
 */

void __fastcall CChannelContext::~CChannelContext(CChannelContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 *v5; // rbx
  __int64 *i; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-10h]
  CChannelContext *v14; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CChannelContext::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v14 = this;
    v4 = (_QWORD *)(*(_QWORD *)(v3 + 240) + 432LL);
    std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::equal_range(
      v4,
      &v12,
      (unsigned __int8 *)&v14);
    v5 = v12;
    for ( i = v12; i != v13; i = (__int64 *)*i )
      ;
    v7 = (__int64 *)v4[1];
    if ( v12 == (__int64 *)*v7 && v13 == v7 )
    {
      std::list<std::pair<CChannelContext * const,float>>::clear();
      std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Init(
        (__int64)v4,
        8LL);
    }
    else
    {
      while ( v5 != v13 )
      {
        v11 = v5;
        v5 = (__int64 *)*v5;
        std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
          v4,
          &v14,
          v11);
      }
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)this + 3) = 0LL;
  }
  ReleaseInterface<CProcessAttribution>((CDirtyRegion **)this + 5);
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *((_QWORD *)this + 4) = 0LL;
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 7) = 0LL;
  }
  operator delete(*((void **)this + 6));
}

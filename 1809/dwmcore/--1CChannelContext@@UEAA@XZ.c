/*
 * XREFs of ??1CChannelContext@@UEAA@XZ @ 0x1800949F0
 * Callers:
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x1800949B0 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@@Z @ 0x180068FDC (-erase@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$h.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@V12@@2@AEBQEAVCChannelContext@@@Z @ 0x18006930C (-equal_range@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E53C8 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$h.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800EA4A4 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CChannelContext::~CChannelContext(CChannelContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *i; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-10h]
  CChannelContext *v13; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CChannelContext::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v13 = this;
    v4 = (_QWORD *)(*(_QWORD *)(v3 + 224) + 432LL);
    std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::equal_range(
      v4,
      &v11,
      (const unsigned __int8 *)&v13);
    v5 = v11;
    for ( i = v11; i != v12; i = (_QWORD *)*i )
      ;
    v7 = (_QWORD *)v4[1];
    if ( v11 == (_QWORD *)*v7 && v12 == v7 )
    {
      std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear();
      std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Init(
        v4,
        8LL);
    }
    else
    {
      while ( v5 != v12 )
      {
        v10 = (__int64)v5;
        v5 = (_QWORD *)*v5;
        std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::erase(
          v4,
          (__int64)&v13,
          v10);
      }
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)this + 3) = 0LL;
  }
  ReleaseInterface<CConnection>((CMILRefCountBase **)this + 5);
  ReleaseInterface<CConnection>((CMILRefCountBase **)this + 4);
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 7) = 0LL;
  }
  WPF::ProcessHeapImpl::Free(*((void **)this + 6));
}

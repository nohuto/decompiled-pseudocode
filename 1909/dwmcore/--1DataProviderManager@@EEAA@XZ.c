/*
 * XREFs of ??1DataProviderManager@@EEAA@XZ @ 0x180187E38
 * Callers:
 *     ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x180187F50 (--_GDataProviderManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800EAF54 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801881FC (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DataProviderManager::~DataProviderManager(DataProviderManager *this)
{
  _QWORD *v2; // rdx
  _QWORD *i; // rax
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rcx

  *(_QWORD *)this = &DataProviderManager::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 6);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 72LL) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 104);
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 10) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 6);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 7) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v6 != v7 )
  {
    do
    {
      v8 = v6[3];
      v9 = (_QWORD *)*v6;
      if ( v8 )
      {
        v6[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      }
      std::_Deallocate<16,0>(v6, 0x20uLL);
      v7 = (_QWORD *)*((_QWORD *)this + 6);
      v6 = v9;
    }
    while ( v9 != v7 );
  }
  std::_Deallocate<16,0>(v7, 0x20uLL);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease((char *)this + 24);
  v10 = *((_QWORD *)this + 2);
  if ( v10 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}

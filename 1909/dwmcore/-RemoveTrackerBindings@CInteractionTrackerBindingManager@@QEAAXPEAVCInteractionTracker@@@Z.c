/*
 * XREFs of ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801DE7E0
 * Callers:
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801D8950 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180160F90 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180197FC4 (-lower_bound@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash.c)
 *     ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x1801C0170 (-clear@-$list@U-$pair@QEAVCChannelContext@@M@std@@V-$allocator@U-$pair@QEAVCChannelContext@@M@st.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@@Z @ 0x1801DCE20 (--$-0V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingMode.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801DF644 (-erase@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@V-$unordered_map@PEAVCInteractionTracker.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@@Z @ 0x1801DF70C (-erase@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-.c)
 */

void __fastcall CInteractionTrackerBindingManager::RemoveTrackerBindings(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2)
{
  char *v2; // r13
  _QWORD *v4; // rbx
  __int64 v5; // r8
  __int64 *v6; // r12
  _BYTE *v7; // r14
  _BYTE *v8; // r15
  __int64 *i; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  bool v15; // cc
  _QWORD *v16; // r15
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  char v19[8]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v20; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  _BYTE *v22; // [rsp+40h] [rbp-39h]
  _BYTE *v23; // [rsp+48h] [rbp-31h]
  char v24[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v25; // [rsp+58h] [rbp-21h] BYREF
  void *v26; // [rsp+68h] [rbp-11h]
  __int128 v27; // [rsp+70h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  _QWORD *v29; // [rsp+E0h] [rbp+67h] BYREF
  struct CInteractionTracker *v30; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v32; // [rsp+F8h] [rbp+7Fh] BYREF

  v30 = a2;
  v2 = (char *)this + 64;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
    (__int64)this + 64,
    (__int64)&v29,
    (unsigned __int8 *)&v30);
  v4 = v29;
  if ( v29 == *((_QWORD **)this + 9) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x375,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>((__int64)&v21, 0LL, &v30);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>(
    (__int64)v24,
    (__int64)(v4 + 3),
    v5);
  v6 = v25;
  v7 = v23;
  v8 = v22;
  for ( i = (__int64 *)*v25; i != v6; i = (__int64 *)*i )
  {
    v20 = *((_OWORD *)i + 1);
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
      (__int64)v2,
      (__int64)&v29,
      (unsigned __int8 *)&v20);
    v10 = v29;
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
      (__int64)(v29 + 3),
      (__int64)&v31,
      (unsigned __int8 *)&v30);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::erase(
      v10 + 3,
      v19,
      v31);
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v30 + 16LL))(v30);
    if ( !v10[5] )
    {
      v11 = v10[2];
      v32 = v11;
      if ( v7 == v8 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>((__int64)&v21, v8, &v32);
        v7 = v23;
        v8 = v22;
      }
      else
      {
        *(_QWORD *)v8 = v11;
        v8 += 8;
        v22 = v8;
      }
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v12 = (void *)v21;
  v13 = 0LL;
  v14 = (unsigned __int64)&v8[-v21 + 7] >> 3;
  v15 = v21 <= (unsigned __int64)v8;
  v16 = (_QWORD *)v21;
  if ( !v15 )
    v14 = 0LL;
  if ( v14 )
  {
    do
    {
      v29 = (_QWORD *)*v16;
      v17 = v29;
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::lower_bound(
        (__int64)v2,
        (__int64)&v31,
        (unsigned __int8 *)&v29);
      std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::erase(
        v2,
        &v32,
        v31);
      v18 = v17[79];
      if ( v18 )
      {
        v17[79] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      ++v16;
      ++v13;
    }
    while ( v13 != v14 );
    v12 = (void *)v21;
  }
  if ( v26 )
  {
    std::_Deallocate<16,0>(v26, (*((_QWORD *)&v27 + 1) - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL);
    v26 = 0LL;
    v27 = 0LL;
  }
  std::list<std::pair<CChannelContext * const,float>>::clear((__int64)&v25);
  std::_Deallocate<16,0>(v25, 0x20uLL);
  if ( v12 )
    std::_Deallocate<16,0>(v12, (v7 - (_BYTE *)v12) & 0xFFFFFFFFFFFFFFF8uLL);
}

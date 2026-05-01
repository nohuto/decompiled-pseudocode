/*
 * XREFs of _lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator() @ 0x18001B858
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_363ecfaa426a2d345ca41bd67db72fc0____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_____::Run @ 0x18001EC00 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_363ecfaa426a2d3.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009680 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009878 (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000CE50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtm.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180010834 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001CE88 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@XZ @ 0x18001EF94 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025E50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_180025E50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DEC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator()(_QWORD *a1, __int64 a2)
{
  HSTRING v3; // r15
  __int64 v4; // r14
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int Results; // eax
  _QWORD *v23; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v26; // [rsp+80h] [rbp+40h]
  _QWORD *v27; // [rsp+90h] [rbp+50h]
  _QWORD *v28; // [rsp+98h] [rbp+58h] BYREF

  v26 = 0LL;
  v3 = (HSTRING)a1[2];
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager **)(*a1 + 56LL);
  v6 = operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v27 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_22;
  }
  v9 = v6 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 2));
  v7[7] = 1LL;
  *v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable';
  *v9 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v12 = v7 + 2;
  v7[2] = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v7 = v27;
  }
  *v7 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable';
  *v9 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `IWeakReferenceSource'};
  *v12 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7[8] = 0LL;
  v7[9] = 0LL;
  v7[10] = 0LL;
  v7[11] = 0LL;
  v7[12] = 0LL;
  v7[13] = 0LL;
  v7[14] = 0LL;
  v7[15] = 0LL;
  v7[16] = 0LL;
  v7[17] = 0LL;
  v28 = v7 + 18;
  v7[18] = 0LL;
  v7[19] = 0LL;
  v7[18] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
             &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'},
             v10,
             v11);
  v28 = v7 + 20;
  v7[20] = 0LL;
  v7[21] = 0LL;
  v7[20] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
             v14,
             v13,
             v15);
  v28 = v7 + 22;
  v7[22] = 0LL;
  v7[23] = 0LL;
  v7[22] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
             v17,
             v16,
             v18);
  v28 = v7 + 24;
  v7[24] = 0LL;
  v7[25] = 0LL;
  v7[24] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode(
             v20,
             v19,
             v21);
  v7[26] = 0LL;
  v7[27] = 0LL;
  v7[28] = 0LL;
  v8 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
         (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)v7,
         v5,
         (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)((v4 + 8) & -(__int64)(v4 != 0)),
         v3);
  if ( v8 >= 0 )
  {
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef((__int64)v7);
    v26 = (__int64)v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
    v8 = 0;
  }
  else if ( v7 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v8 < 0 )
    goto LABEL_15;
  v28 = 0LL;
  Results = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults(v26, &v28);
  v8 = Results;
  v23 = v28;
  if ( Results >= 0
    && (Results = Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
                    a2,
                    v28),
        v8 = Results,
        Results >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Results);
  }
  if ( v23 )
    (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
LABEL_22:
  if ( v26 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v26);
  return (unsigned int)v8;
}

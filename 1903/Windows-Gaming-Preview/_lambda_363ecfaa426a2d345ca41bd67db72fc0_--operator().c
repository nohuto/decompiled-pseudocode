/*
 * XREFs of _lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator() @ 0x18001B4EC
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_363ecfaa426a2d345ca41bd67db72fc0__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x18001EE40 (Windows--Internal--COperationLambdaVar_0__lambda_363ecfaa426a2d345ca41bd67db72fc0__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009610 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009808 (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180010714 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001CC44 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@XZ @ 0x18001F070 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025BC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_180025BC0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator()(_QWORD *a1, __int64 a2)
{
  HSTRING v3; // r15
  __int64 v4; // r14
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *v5; // r12
  char *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int Results; // eax
  __int64 v14; // rbx
  _QWORD v16[6]; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v18; // [rsp+90h] [rbp+40h]
  char *v19; // [rsp+A0h] [rbp+50h]

  v16[2] = -2LL;
  v18 = 0LL;
  v3 = (HSTRING)a1[2];
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager **)(*a1 + 56LL);
  v6 = (char *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v19 = v6;
  v16[3] = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_25;
  }
  v16[4] = v6;
  v9 = v6 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
  v7[7] = 1LL;
  *v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable';
  *v9 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v10 = v7 + 2;
  v7[2] = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v7 = v19;
  }
  *v7 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable';
  *v9 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
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
  v7[18] = 0LL;
  v7[19] = 0LL;
  v7[18] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
  v7[20] = 0LL;
  v7[21] = 0LL;
  v7[20] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
  v7[22] = 0LL;
  v7[23] = 0LL;
  v7[22] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
  v7[24] = 0LL;
  v7[25] = 0LL;
  v7[24] = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buyheadnode();
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
    {
      v11 = v7[7];
      v16[1] = v11;
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v7 + 7, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_14;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
    }
LABEL_14:
    v18 = (__int64)v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
    v8 = 0;
  }
  else if ( v7 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v8 < 0 )
    goto LABEL_18;
  v16[0] = 0LL;
  Results = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults(v18, v16);
  v8 = Results;
  v14 = v16[0];
  if ( Results >= 0
    && (Results = Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
                    a2,
                    v16[0]),
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
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_25:
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v18);
  return (unsigned int)v8;
}

/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001A294
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001DAB0 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017740 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEAU.c)
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001A67C (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025C10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025C10.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  __int64 v2; // rcx
  RTL_SRWLOCK *v3; // rax
  RTL_SRWLOCK *v4; // rbx
  int v5; // edi
  RTL_SRWLOCK *v6; // rax
  RTL_SRWLOCK *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v2);
  }
  *((_QWORD *)this + 13) = 0LL;
  v3 = (RTL_SRWLOCK *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v10 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v3[4].Ptr = (PVOID)1;
  v3->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::`vftable';
  v6 = v3 + 1;
  v4[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::`vftable'{for `IWeakReferenceSource'};
  v7 = v4 + 2;
  v4[2].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v10;
  }
  v4->Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable';
  v6->Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable'{for `IWeakReferenceSource'};
  v7->Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>'};
  v4[7].Ptr = 0LL;
  v4[8].Ptr = 0LL;
  v4[9].Ptr = 0LL;
  v4[10].Ptr = 0LL;
  InitializeSRWLock(v4 + 11);
  InitializeSRWLock(v4 + 12);
  v4[13].Ptr = 0LL;
  InitializeSRWLock(v4 + 14);
  InitializeSRWLock(v4 + 15);
  v4[16].Ptr = 0LL;
  v5 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::RuntimeClassInitialize((Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *)v4);
  if ( v5 >= 0 )
  {
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::AddRef((__int64)v4);
    *((_QWORD *)this + 13) = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v4);
    v5 = 0;
  }
  else if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v4);
  }
  if ( v5 < 0 )
    goto LABEL_17;
  return 0LL;
}

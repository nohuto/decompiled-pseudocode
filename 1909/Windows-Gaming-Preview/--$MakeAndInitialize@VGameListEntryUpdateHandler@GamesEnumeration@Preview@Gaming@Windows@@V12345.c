/*
 * XREFs of ??$MakeAndInitialize@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18001DBFC
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001A67C (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017740 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEAU.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025B60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025B60.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler,Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler,>(
        RTL_SRWLOCK **a1)
{
  unsigned int v2; // esi
  RTL_SRWLOCK *v3; // rcx
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rbx
  bool v6; // zf

  v2 = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(v3);
  }
  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v4[4].Ptr = (PVOID)1;
    v4->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable';
    v4[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler'};
    v4[2].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4->Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable';
    v4[1].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler'};
    v4[2].Ptr = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    v4[5].Ptr = 0LL;
    InitializeSRWLock(v4 + 6);
    InitializeSRWLock(v5 + 7);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::AddRef((__int64)v5);
    *a1 = v5;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}

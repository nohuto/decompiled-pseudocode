/*
 * XREFs of ??0GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180030044
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18002E720 (-CreateInstance@-$SimpleClassFactory@VGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows.c)
 * Callees:
 *     <none>
 */

Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::GameListEntryProxy(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this)
{
  bool v2; // zf

  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 5) = &CFTMCrossProcBase::`vftable';
  *((_QWORD *)this + 6) = &CFTMCrossProcClientImpl::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 7) = &CFTMCrossProcClientImpl::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 11) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 10);
  *((_QWORD *)this + 6) = &CFTMCrossProcClientImpl::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 7) = &CFTMCrossProcClientImpl::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 12) = &CFTMCrossProcClientImpl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRpcOptions>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v2 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListEntry'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::Selector<CFTMCrossProcBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  *((_QWORD *)this + 6) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  *((_QWORD *)this + 12) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRpcOptions>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  *((_QWORD *)this + 17) = 1LL;
  if ( !v2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>'};
  *((_QWORD *)this + 2) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListEntry'};
  *((_QWORD *)this + 3) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>'};
  *((_QWORD *)this + 5) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CFTMCrossProcBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  *((_QWORD *)this + 6) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFastRundown>'};
  *((_QWORD *)this + 12) = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRpcOptions>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CFTMCrossProcBase>,IRpcOptions>>'};
  return this;
}

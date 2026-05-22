/*
 * XREFs of ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x180152190
 * Callers:
 *     ??1?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@EEAA@XZ @ 0x1801518D8 (--1-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Micros.c)
 *     ??_GSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAAPEAXI@Z @ 0x180152D40 (--_GSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015988C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x18015D808 (-SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18016137C (-erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverH.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::~SpatialGraphNodeReferenceFactory(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 a2)
{
  __int64 v3; // rcx
  HolographicDriverClientTrace *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `IInspectable'};
  *(_QWORD *)&this->LockCount = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this->OwningThread = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `IWeakReferenceSource'};
  this->LockSemaphore = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( HolographicDriverClientTrace::IsEnabled((unsigned __int8)this, a2) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v3,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::SpatialGraphNodeReferenceFactoryDestroyed_(v4, this);
  }
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::erase(
    &this[3],
    &v5,
    *(_QWORD *)this[3].DebugInfo);
  std::_Deallocate<16,0>(this[3].DebugInfo, (const struct std::nothrow_t *)0x38);
  DeleteCriticalSection(this + 2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>((__int64)this);
}

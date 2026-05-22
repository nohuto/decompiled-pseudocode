/*
 * XREFs of ??0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800BC40C
 * Callers:
 *     ?CreateSpatialInteractionObjectDevice@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAPEAV1234@PEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_W@Z @ 0x1800BB77C (-CreateSpatialInteractionObjectDevice@SpatialInteractionObjectDevice@SpatialInteractions@Interna.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180026890 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18004F154 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
RTL_SRWLOCK *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::SpatialInteractionHandObjectDevice(
        RTL_SRWLOCK *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[3]);
  this[8].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  this[3].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IInspectable'};
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  this[3].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[9].Ptr = 0LL;
  this[12].Ptr = 0LL;
  this[13].Ptr = (PVOID)7;
  LOWORD(this[10].Ptr) = 0;
  this[14].Ptr = 0LL;
  this[15].Ptr = 0LL;
  LODWORD(this[16].Ptr) = 0;
  this[17].Ptr = 0LL;
  this[18].Ptr = 0LL;
  this[17].Ptr = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>>::_Buynode0(
                   (__int64)v2,
                   0LL,
                   0LL);
  this[19].Ptr = 0LL;
  this[20].Ptr = 0LL;
  this[21].Ptr = 0LL;
  LODWORD(this[16].Ptr) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    &this[16].Ptr,
    8LL);
  InitializeSRWLock(this + 24);
  this->Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::`vftable'{for `IInspectable'};
  this[1].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  this[3].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[25].Ptr = 0LL;
  this[26].Ptr = 0LL;
  this[27].Ptr = 0LL;
  LODWORD(this[28].Ptr) = 0;
  return this;
}

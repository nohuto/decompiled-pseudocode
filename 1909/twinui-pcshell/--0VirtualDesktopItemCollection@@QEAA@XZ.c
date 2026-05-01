/*
 * XREFs of ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x180373C80
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x180373BC0 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z @ 0x1802E1958 (--0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x180372314 (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VObservableObjectArray@@@Details@23@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180373C60 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00V-$VirtualDesktopNo.c)
 */

VirtualDesktopItemCollection *__fastcall VirtualDesktopItemCollection::VirtualDesktopItemCollection(
        VirtualDesktopItemCollection *this)
{
  ObservableObjectArray::ObservableObjectArray(this);
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>((_QWORD *)this + 18);
  *((_DWORD *)this + 39) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  *((_QWORD *)this + 18) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  *((_QWORD *)this + 18) = &VirtualDesktopItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>'};
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  VirtualDesktopNotificationListener::VirtualDesktopNotificationListener(
    (VirtualDesktopItemCollection *)((char *)this + 176),
    (VirtualDesktopItemCollection *)((char *)this + 144));
  return this;
}

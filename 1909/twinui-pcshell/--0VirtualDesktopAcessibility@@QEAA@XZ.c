/*
 * XREFs of ??0VirtualDesktopAcessibility@@QEAA@XZ @ 0x18041205C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180411EB0 (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

VirtualDesktopAcessibility *__fastcall VirtualDesktopAcessibility::VirtualDesktopAcessibility(
        VirtualDesktopAcessibility *this)
{
  _QWORD *v2; // rdi
  VirtualDesktopAcessibility *result; // rax

  v2 = (_QWORD *)((char *)this + 24);
  *(_QWORD *)this = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((VirtualDesktopAcessibility *)((char *)this + 24));
  *((_DWORD *)this + 15) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IVirtualDesktopAccessibilityInternal'};
  *v2 = &VirtualDesktopAcessibility::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopAcessibility::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
  *((_QWORD *)this + 1) = &VirtualDesktopAcessibility::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &VirtualDesktopAcessibility::`vftable'{for `IVirtualDesktopAccessibilityInternal'};
  *v2 = &VirtualDesktopAcessibility::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return result;
}

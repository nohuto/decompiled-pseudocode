/*
 * XREFs of ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x18034C540
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18034C474 (--$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z @ 0x1802C2428 (--0VirtualDesktopNotificationListener@@QEAA@PEAUIVirtualDesktopNotification@@@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbnailWindowFilter@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18034C510 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbna.c)
 */

VirtualDesktopThumbnailWindowFilter *__fastcall VirtualDesktopThumbnailWindowFilter::VirtualDesktopThumbnailWindowFilter(
        VirtualDesktopThumbnailWindowFilter *this)
{
  VirtualDesktopThumbnailWindowFilter *result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `IVirtualDesktopThumbnailWindowFilter'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &VirtualDesktopThumbnailWindowFilter::`vftable'{for `IVirtualDesktopThumbnailWindowFilter'};
  *((_QWORD *)this + 1) = &VirtualDesktopThumbnailWindowFilter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
  VirtualDesktopNotificationListener::VirtualDesktopNotificationListener(
    (VirtualDesktopThumbnailWindowFilter *)((char *)this + 48),
    (VirtualDesktopThumbnailWindowFilter *)((char *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}

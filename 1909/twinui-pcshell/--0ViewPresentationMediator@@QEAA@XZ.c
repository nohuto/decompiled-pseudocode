/*
 * XREFs of ??0ViewPresentationMediator@@QEAA@XZ @ 0x1802C8E54
 * Callers:
 *     ??$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802C8BB0 (--$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1802C8CBC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1802C8CBC.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x180433194 (--0CGITRegistrationList@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
ViewPresentationMediator *__fastcall ViewPresentationMediator::ViewPresentationMediator(ViewPresentationMediator *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &ViewPresentationMediator::`vftable';
  *((_QWORD *)this + 5) = &ViewPresentationMediator::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &ViewPresentationMediator::`vftable'{for `IViewPresentationMediator'};
  *((_QWORD *)this + 14) = &ViewPresentationMediator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 15) = &ViewPresentationMediator::`vftable'{for `IWindowManagementShowMoveSizeEvents'};
  *((_QWORD *)this + 16) = &ViewPresentationMediator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &ViewPresentationMediator::`vftable'{for `IWindowManagementWindowGroupingEvents'};
  *((_QWORD *)this + 18) = &ViewPresentationMediator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  CGITRegistrationList::CGITRegistrationList((ViewPresentationMediator *)((char *)this + 208));
  CGITRegistrationList::CGITRegistrationList((ViewPresentationMediator *)((char *)this + 256));
  *((_DWORD *)this + 76) = 0;
  return this;
}

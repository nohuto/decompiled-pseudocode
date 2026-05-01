/*
 * XREFs of ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18030CBC0
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18030C394 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CExperienceManagerAnimationHelper@@QEAA@H@Z @ 0x180174990 (--0CExperienceManagerAnimationHelper@@QEAA@H@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIDesktopVisibilityChangesNotification@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18030C9D0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_18030C9D0.c)
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180412CF8 (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 */

// Hidden C++ exception states: #wind=38
TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(
        TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &TouchKeyboardExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &TouchKeyboardExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 15) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 16) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveLayoutChanges'};
  *((_QWORD *)this + 17) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 18) = &TouchKeyboardExperienceManager::`vftable'{for `ITouchKeyboardExperienceManager'};
  *((_QWORD *)this + 19) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModeChangeListener,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 20) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)this + 21) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 22) = &TouchKeyboardExperienceManager::`vftable'{for `IDesktopVisibilityChangesNotification'};
  *((_QWORD *)this + 23) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 24) = &TouchKeyboardExperienceManager::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)this + 25) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 320));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 328));
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 416), 0, 0);
  InitializeSRWLock((PSRWLOCK)this + 57);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 7LL;
  *((_WORD *)this + 268) = 0;
  *((_DWORD *)this + 142) = 0;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 178) = 0;
  *((_BYTE *)this + 716) = 0;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 188) = 9;
  CExperienceManagerAnimationHelper::CExperienceManagerAnimationHelper(
    (TouchKeyboardExperienceManager *)((char *)this + 760),
    15);
  CExperienceManagerAnimationHelper::CExperienceManagerAnimationHelper(
    (TouchKeyboardExperienceManager *)((char *)this + 792),
    17);
  *((_WORD *)this + 412) = 0;
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 832));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 840));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 848));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 856));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 864));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 872));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 880));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 888));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 896));
  Microsoft::WRL::WeakRef::WeakRef((TouchKeyboardExperienceManager *)((char *)this + 904));
  *((_QWORD *)this + 114) = 0LL;
  *((_BYTE *)this + 920) = 0;
  *((_DWORD *)this + 231) = SHTaskPoolGetUniqueContext(v2);
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    (TouchKeyboardExperienceManager *)((char *)this + 760),
    (TouchKeyboardExperienceManager *)((char *)this + 192));
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    (TouchKeyboardExperienceManager *)((char *)this + 792),
    (TouchKeyboardExperienceManager *)((char *)this + 192));
  return this;
}

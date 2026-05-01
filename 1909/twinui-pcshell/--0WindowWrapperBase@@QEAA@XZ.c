/*
 * XREFs of ??0WindowWrapperBase@@QEAA@XZ @ 0x18001CC38
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001CB50 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UIUAPViewWrapper@@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C1A9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrappe.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

WindowWrapperBase *__fastcall WindowWrapperBase::WindowWrapperBase(WindowWrapperBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  WindowWrapperBase *result; // rax

  *((_QWORD *)this + 2) = &Microsoft::WRL::ChainInterfaces<IWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((WindowWrapperBase *)((char *)this + 64));
  *(_QWORD *)this = &WindowWrapperBase::`vftable';
  *((_QWORD *)this + 1) = &WindowWrapperBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewWrapper'};
  *((_QWORD *)this + 2) = &WindowWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &WindowWrapperBase::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  *((_QWORD *)this + 4) = &WindowWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 5) = &WindowWrapperBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *((_QWORD *)this + 6) = &WindowWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 7) = &WindowWrapperBase::`vftable'{for `IFramedViewWrapper'};
  *((_QWORD *)this + 8) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 21);
  InitializeSRWLock((PSRWLOCK)this + 22);
  *((_WORD *)this + 92) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = SHTaskPoolGetUniqueContext(v2);
  *(_QWORD *)((char *)this + 260) = 0LL;
  *(_QWORD *)((char *)this + 268) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 1;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 392) = 0;
  *(_QWORD *)((char *)this + 396) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 1;
  *((_BYTE *)this + 486) = 1;
  *((_DWORD *)this + 122) = 1;
  *((_DWORD *)this + 123) = 1;
  *(_QWORD *)((char *)this + 476) = 6LL;
  *((_WORD *)this + 242) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_BYTE *)this + 512) = 0;
  *((_DWORD *)this + 129) = 0;
  memset_0((char *)this + 520, 0, 0x2CuLL);
  *((_DWORD *)this + 141) = SHTaskPoolGetUniqueContext(v3);
  result = this;
  *((_WORD *)this + 284) = 0;
  return result;
}

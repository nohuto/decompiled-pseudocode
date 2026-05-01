/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803FE338
 * Callers:
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FE4CC (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801545EC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmB.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1803FE5F4 (-InternalRelease@-$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1803FE618 (-RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopMan.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopApplicationViewEventListener,CVirtualDesktopApplicationViewEventListener,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopLock * &>(
        volatile signed __int32 **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopSwitchAnimator **a3,
        struct IVirtualDesktopForegroundPolicy **a4,
        struct IVirtualDesktopWindowMoveManager **a5,
        struct IVirtualDesktopPinnedAppsPrivate **a6,
        struct IVirtualDesktopLock **a7)
{
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rbx
  int v13; // edi
  volatile signed __int32 *v15; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (volatile signed __int32 *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>((__int64)v11);
    v15 = v12;
    *(_QWORD *)v12 = &CVirtualDesktopApplicationViewEventListener::`vftable'{for `IApplicationViewChangeListener'};
    *((_QWORD *)v12 + 1) = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 7) = 0LL;
    *((_QWORD *)v12 + 8) = 0LL;
    *((_QWORD *)v12 + 9) = 0LL;
    *((_QWORD *)v12 + 10) = 0LL;
    *((_QWORD *)v12 + 11) = 0LL;
    v13 = CVirtualDesktopApplicationViewEventListener::RuntimeClassInitialize(
            (CVirtualDesktopApplicationViewEventListener *)v12,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7);
    if ( v13 >= 0 )
    {
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 11);
        v12 = v15;
      }
      *a1 = v12;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}

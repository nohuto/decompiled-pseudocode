/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopGroupedViewsEventListener@@V1@AEAPEAUITabViewManager@@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGroupedViewsEventListener@@AEAPEAUITabViewManager@@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803FCB5C
 * Callers:
 *     ?VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FE0F8 (-VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredVi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopGroupedViewsEventListener@@QEAA@XZ @ 0x1803FD09C (--0VirtualDesktopGroupedViewsEventListener@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1803FD6AC (-InternalRelease@-$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1803FDA78 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopGroupedViewsEventListener,VirtualDesktopGroupedViewsEventListener,ITabViewManager * &,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &,IInspectable * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
        volatile signed __int64 **a1,
        struct ITabViewManager **a2,
        struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **a3,
        struct IInspectable **a4,
        struct IVirtualDesktopManagerPrivate **a5,
        struct IVirtualDesktopPinnedAppsPrivate **a6,
        struct IVirtualDesktopGroupedViewsPolicy **a7,
        struct IVirtualDesktopLock **a8)
{
  VirtualDesktopGroupedViewsEventListener *v12; // rax
  int v13; // edi
  volatile signed __int64 *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  volatile signed __int64 *v18; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = (VirtualDesktopGroupedViewsEventListener *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = (volatile signed __int64 *)VirtualDesktopGroupedViewsEventListener::VirtualDesktopGroupedViewsEventListener(v12);
    v18 = v14;
    v13 = VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize(
            (VirtualDesktopGroupedViewsEventListener *)v14,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8);
    if ( v13 >= 0 )
    {
      if ( v14 )
      {
        v15 = *((_QWORD *)v14 + 7);
        while ( v15 >= 0 )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange64(v14 + 7, v15 + 1, v15);
          if ( v16 == v15 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v15 + 16));
      }
LABEL_10:
      *a1 = v14;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::InternalRelease(&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}

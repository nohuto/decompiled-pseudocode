/*
 * XREFs of ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1802F69D4
 * Callers:
 *     ??1CSwitchItemElement@@UEAA@XZ @ 0x1802F6AB4 (--1CSwitchItemElement@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F6BB0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingVi.c)
 *     ??1CVirtualDesktopBarElement@@UEAA@XZ @ 0x1802FA35C (--1CVirtualDesktopBarElement@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@U?$ChainInterfaces@UIAnimatableScrollViewer@@UIScrollViewer@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802FA510 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@U-$Cha.c)
 *     ??1CShrinkButtonElement@@QEAA@XZ @ 0x1802FD9B0 (--1CShrinkButtonElement@@QEAA@XZ.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x180307EA0 (--1CSwitchItemGrid@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UISwitchItemGrid@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@UIMultitaskingViewTelemetryHost@@UIScrollableElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180307F60 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UISwit.c)
 *     ??_ECScrollViewerHost@@UEAAPEAXI@Z @ 0x18030A400 (--_ECScrollViewerHost@@UEAAPEAXI@Z.c)
 *     ??1CMultitaskingViewFrameElement@@UEAA@XZ @ 0x18030B464 (--1CMultitaskingViewFrameElement@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGlyphButton@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180313DB0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGl.c)
 *     ??_ECGlyphButtonElement@@UEAAPEAXI@Z @ 0x180313DF0 (--_ECGlyphButtonElement@@UEAAPEAXI@Z.c)
 *     ??_ECScrollButtonContainer@@UEAAPEAXI@Z @ 0x18031B6F0 (--_ECScrollButtonContainer@@UEAAPEAXI@Z.c)
 *     ??_GCScrollViewer@@UEAAPEAXI@Z @ 0x18031C4C0 (--_GCScrollViewer@@UEAAPEAXI@Z.c)
 *     ??_GLightDismissElement@@UEAAPEAXI@Z @ 0x18031D9E0 (--_GLightDismissElement@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18031DE60 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@@WRL@M.c)
 *     ??_GInputEaterElement@@UEAAPEAXI@Z @ 0x18031DEA0 (--_GInputEaterElement@@UEAAPEAXI@Z.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x180320D44 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180320E60 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UIObse.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::~CMultitaskingViewElementBase(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    *(_QWORD *)(v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 3) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 3) );
      v4 = (void *)*((_QWORD *)this + 2);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}

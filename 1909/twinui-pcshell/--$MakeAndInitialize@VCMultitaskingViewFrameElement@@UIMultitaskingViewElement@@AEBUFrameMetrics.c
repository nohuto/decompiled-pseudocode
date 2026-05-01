/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@5AEAPEAUIAnimationCoordinator@@@Z @ 0x18038B088
 * Callers:
 *     ?CMultitaskingViewFrameElement_CreateInstance@@YAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@PEAPEAU5@@Z @ 0x18038B7D8 (-CMultitaskingViewFrameElement_CreateInstance@@YAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEv.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewFrameElement@@QEAA@XZ @ 0x18038B270 (--0CMultitaskingViewFrameElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18038C7A4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewFrameElement,IMultitaskingViewElement,FrameMetrics const &,HWND__ * &,AsyncFrameEvents const &,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IAnimationCoordinator * &>(
        _QWORD *a1,
        const struct FrameMetrics *a2,
        HWND *a3,
        const struct AsyncFrameEvents *a4,
        struct ISwitchThumbnailFactory **a5,
        struct IMultitaskingViewElement **a6,
        struct IMultitaskingViewElement **a7,
        struct IAnimationCoordinator **a8)
{
  CMultitaskingViewFrameElement *v12; // rax
  int v13; // edi
  CMultitaskingViewFrameElement *v14; // rbx

  *a1 = 0LL;
  v12 = (CMultitaskingViewFrameElement *)operator new(0x240uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = CMultitaskingViewFrameElement::CMultitaskingViewFrameElement(v12);
    v13 = CMultitaskingViewFrameElement::RuntimeClassInitialize(v14, a2, *a3, a4, *a5, *a6, *a7, *a8);
    if ( v13 >= 0 )
      v13 = (**(__int64 (__fastcall ***)(CMultitaskingViewFrameElement *, GUID *, _QWORD *))v14)(
              v14,
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              a1);
    if ( v14 )
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}

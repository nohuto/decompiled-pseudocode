/*
 * XREFs of ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x180310210
 * Callers:
 *     ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df___::Run @ 0x18030F9E0 (ObservablePropertyCallback__lambda_dcff52c4f625f8ebd2d760e1ea2509df___--Run.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x18030FA60 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVirtualDesktopBarElement::_UpdateScrollElementVisibility(CVirtualDesktopBarElement *this)
{
  _BYTE *v2; // rax
  __int64 v3; // rdx
  void (*v4)(void); // rax

  v2 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
  v3 = **((_QWORD **)this + 93);
  if ( *v2 )
    v4 = *(void (**)(void))(v3 + 144);
  else
    v4 = *(void (**)(void))(v3 + 136);
  v4();
}

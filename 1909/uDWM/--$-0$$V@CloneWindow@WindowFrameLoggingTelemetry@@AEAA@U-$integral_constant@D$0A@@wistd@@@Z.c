/*
 * XREFs of ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180007D70
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180007B30 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180007E24 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 */

WindowFrameLoggingTelemetry::CloneWindow *__fastcall WindowFrameLoggingTelemetry::CloneWindow::CloneWindow(
        WindowFrameLoggingTelemetry::CloneWindow *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  *((_QWORD *)this + 2) = this;
  v1 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  v3 = (_QWORD *)((char *)this + 136);
  *(_DWORD *)v1 = 0;
  v1[4] = 0;
  v1[64] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 6) = "CloneWindow";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset_0(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  WindowFrameLoggingTelemetry::CloneWindow::StartActivity(this);
  return this;
}

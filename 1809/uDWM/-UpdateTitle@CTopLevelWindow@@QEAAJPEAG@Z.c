/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180088200
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x18007436C (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180074B14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180035D84 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CTopLevelWindow *this, unsigned __int16 *a2)
{
  size_t *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (size_t *)*((_QWORD *)this + 64);
  v3 = 0;
  if ( v2 )
  {
    v4 = CText::SetText(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x12C1u);
  }
  return v3;
}

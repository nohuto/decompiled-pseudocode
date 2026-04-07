/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18008E040
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x18007A93C (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18007B0BC (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180029238 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x128Du);
  }
  return v3;
}

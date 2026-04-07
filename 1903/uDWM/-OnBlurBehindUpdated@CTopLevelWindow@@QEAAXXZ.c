/*
 * XREFs of ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180012678
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800050F4 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180012228 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x18004CAF0 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow::OnBlurBehindUpdated(CTopLevelWindow *this)
{
  CRenderDataVisual *v2; // rcx

  v2 = (CRenderDataVisual *)*((_QWORD *)this + 36);
  if ( v2 )
    CRenderDataVisual::ClearInstructions(v2);
  CVisual::SetDirtyFlags(this, 0x80000u);
}

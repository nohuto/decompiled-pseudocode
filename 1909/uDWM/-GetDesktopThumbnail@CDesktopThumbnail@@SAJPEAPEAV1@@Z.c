/*
 * XREFs of ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AEF58
 * Callers:
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18008FF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A2F88 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800A8BE0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800A8D40 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800AED74 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800AE9E0 (-Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnail::GetDesktopThumbnail(struct CDesktopThumbnail **a1)
{
  unsigned int v1; // ebx
  struct CDesktopThumbnail *v2; // rax
  int v4; // eax

  *a1 = 0LL;
  v1 = 0;
  v2 = CDesktopThumbnail::s_pThumbnailNoRef;
  if ( CDesktopThumbnail::s_pThumbnailNoRef )
  {
    *a1 = CDesktopThumbnail::s_pThumbnailNoRef;
    _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
  }
  else
  {
    v4 = CDesktopThumbnail::Create(a1);
    v1 = v4;
    if ( v4 >= 0 )
      *a1 = CDesktopThumbnail::s_pThumbnailNoRef;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xD0u);
  }
  return v1;
}

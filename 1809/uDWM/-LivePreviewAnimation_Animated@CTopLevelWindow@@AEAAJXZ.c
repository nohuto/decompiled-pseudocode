/*
 * XREFs of ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x1800876F8
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18008818C (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180039D38 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180077AB0 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180088014 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

__int64 __fastcall CTopLevelWindow::LivePreviewAnimation_Animated(CLivePreviewTimeline **this)
{
  double CurrentOpacity; // xmm0_8
  int v3; // eax
  unsigned int v4; // edi

  CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(this[84]);
  v3 = CTopLevelWindow::SetLivePreviewAlpha((CTopLevelWindow *)this, CurrentOpacity * *((double *)this + 23));
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_BYTE *)this[84] + 72) )
      CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x10A2u);
  }
  return v4;
}

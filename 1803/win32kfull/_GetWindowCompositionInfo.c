/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C002DC68
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00098F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C003A190 (NtUserGetWindowCompositionAttribute.c)
 *     GetWindowExtendedMargin @ 0x1C0059034 (GetWindowExtendedMargin.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C006EAEC (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00708E8 (SetWindowExtendedBoundsMargin.c)
 *     DecVisWindows @ 0x1C0075BD4 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0075E9C (IncVisWindows.c)
 *     IsWindowShellCloaked @ 0x1C00C1194 (IsWindowShellCloaked.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0104E0C (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C01050A0 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0105154 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z @ 0x1C0105650 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C01079B8 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010C6CC (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C010E4C4 (SetWindowCompositionForceIconicSWR.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C01F0390 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C01FA1F4 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C01FA2A8 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C01FA35C (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C01FA40C (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C01FA4C0 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C01FA554 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C01FA608 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C01FA6B8 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C01FA76C (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C01FA820 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C002DE64 (IsTopLevelOrLayeredChildWindow.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 Prop; // rax

  v4 = 0;
  if ( (unsigned int)IsTopLevelOrLayeredChildWindow() )
  {
    Prop = RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
    {
      *(_OWORD *)a2 = *(_OWORD *)Prop;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(Prop + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(Prop + 32);
    }
    else
    {
      *(_WORD *)a2 = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_OWORD *)(a2 + 8) = 0uLL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    return 1;
  }
  return v4;
}

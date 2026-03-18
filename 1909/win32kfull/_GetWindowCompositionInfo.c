/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C0068944
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0010034 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0015D14 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C0015E18 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00163E0 (SetWindowCompositionAccentPolicy.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0016B30 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     IsWindowShellCloaked @ 0x1C0017094 (IsWindowShellCloaked.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0019118 (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     IncVisWindows @ 0x1C0027544 (IncVisWindows.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0027E10 (NtUserGetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00F2394 (SetWindowExtendedBoundsMargin.c)
 *     DecVisWindows @ 0x1C00F8FD8 (DecVisWindows.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C010E928 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010FFA0 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0113E84 (SetWindowCompositionForceIconicSWR.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0132510 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0161F8C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0162054 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C0165CBC (SetWindowCompositionDarkModeColors.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C022EF20 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C023B35C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C023B430 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C023B504 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C023B5D8 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C023B688 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C023B75C (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C023B830 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C023B904 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00689E4 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 Prop; // rax
  unsigned int v6; // eax
  unsigned int v8; // eax

  v4 = 0;
  if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
    {
      *(_OWORD *)a2 = *(_OWORD *)Prop;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(Prop + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(Prop + 32);
      v6 = *(_DWORD *)a2;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0;
      v8 = *(_DWORD *)a2;
      *(_QWORD *)(a2 + 24) = 0LL;
      v6 = v8 & 0xFFFF0000;
      *(_OWORD *)(a2 + 8) = 0uLL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    v4 = 1;
    *(_DWORD *)a2 = v6 & 0x1FFFF;
  }
  return v4;
}

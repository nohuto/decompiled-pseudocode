/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C00722F8
 * Callers:
 *     IsWindowShellCloaked @ 0x1C000ED34 (IsWindowShellCloaked.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00734E0 (NtUserGetWindowCompositionAttribute.c)
 *     DecVisWindows @ 0x1C007A0CC (DecVisWindows.c)
 *     IncVisWindows @ 0x1C007A3C8 (IncVisWindows.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00B93A0 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C00B9534 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C00B9FFC (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00BA2A4 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00BA674 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C00BCE58 (SetWindowCompositionForceIconicSWR.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C00CF9F8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C010F748 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C010F804 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0129D48 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C015E720 (SetWindowCompositionDarkModeColors.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C0217680 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C02233C0 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0223480 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0223540 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C02235FC (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C02236BC (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C022375C (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C022381C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C02238D8 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0223998 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0223A58 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C007239C (IsTopLevelOrLayeredChildWindow.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 Prop; // rax
  unsigned int v6; // ecx

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
      v6 = *(_DWORD *)a2 & 0xFFFF0000;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = v6;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_OWORD *)(a2 + 8) = 0uLL;
    }
    v4 = 1;
    *(_DWORD *)a2 = v6 & 0x1FFFF;
  }
  return v4;
}

/*
 * XREFs of _GetWindowCompositionInfo @ 0x1C00C7274
 * Callers:
 *     DecVisWindows @ 0x1C002CB50 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C002CC3C (IncVisWindows.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00867AC (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00868E8 (SetWindowCompositionAccentPolicy.c)
 *     IsWindowShellCloaked @ 0x1C0088160 (IsWindowShellCloaked.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C008AB90 (NtUserGetWindowCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C008BB40 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C008BF7C (SetWindowExtendedBoundsMargin.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0116FF0 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C012DCC4 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C01300FC (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0133E28 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0135310 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0139E84 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0160FBC (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0161084 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C01646EC (SetWindowCompositionDarkModeColors.c)
 *     NtUserGetWindowCompositionInfo @ 0x1C022F540 (NtUserGetWindowCompositionInfo.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C023B97C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C023BA50 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C023BB24 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C023BBF8 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C023BCA8 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C023BD7C (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C023BE50 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C023BF24 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00C7314 (IsTopLevelOrLayeredChildWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

__int64 __fastcall GetWindowCompositionInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 Prop; // rax
  unsigned int v7; // eax
  unsigned int v9; // eax

  v5 = 0;
  if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1, a2, a3) )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
    {
      *(_OWORD *)a2 = *(_OWORD *)Prop;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(Prop + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(Prop + 32);
      v7 = *(_DWORD *)a2;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0;
      v9 = *(_DWORD *)a2;
      *(_QWORD *)(a2 + 24) = 0LL;
      v7 = v9 & 0xFFFF0000;
      *(_OWORD *)(a2 + 8) = 0uLL;
      *(_QWORD *)(a2 + 32) = 0LL;
    }
    v5 = 1;
    *(_DWORD *)a2 = v7 & 0x1FFFF;
  }
  return v5;
}

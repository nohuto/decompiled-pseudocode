/*
 * XREFs of SetWindowCompositionInfo @ 0x1C001A5F4
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0015D14 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C0015E18 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00163E0 (SetWindowCompositionAccentPolicy.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C0016B30 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0019118 (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C010E928 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010FFA0 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0113E84 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0161F8C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0162054 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C0165CBC (SetWindowCompositionDarkModeColors.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C023B35C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C023B430 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C023B504 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C023B5D8 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C023B688 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C023B75C (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C023B830 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C023B904 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 */

__int64 __fastcall SetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 Prop; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  v3 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomDWMProp, 1LL);
  if ( Prop )
  {
    v3 = 1;
    *(_OWORD *)Prop = *(_OWORD *)a2;
    *(_OWORD *)(Prop + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(Prop + 32) = *(_QWORD *)(a2 + 32);
  }
  else
  {
    v7 = Win32AllocPool(40LL, 1684239189LL);
    v8 = v7;
    if ( v7 )
    {
      v9 = (unsigned __int16)atomDWMProp;
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(v7 + 32) = *(_QWORD *)(a2 + 32);
      v3 = InternalSetProp(a1, v9, v7, 1LL);
      if ( !v3 )
        Win32FreePool(v8);
    }
  }
  return v3;
}

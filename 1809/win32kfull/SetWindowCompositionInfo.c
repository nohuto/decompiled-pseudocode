/*
 * XREFs of SetWindowCompositionInfo @ 0x1C00731FC
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00B93A0 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C00B9534 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C00B9FFC (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00BA2A4 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C00BA674 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C00BCE58 (SetWindowCompositionForceIconicSWR.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C010F748 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0129D48 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C015E720 (SetWindowCompositionDarkModeColors.c)
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
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
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

/*
 * XREFs of SetWindowCompositionInfo @ 0x1C008BDD4
 * Callers:
 *     SetWindowCompositionHasIconicBitmap @ 0x1C00867AC (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00868E8 (SetWindowCompositionAccentPolicy.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C008BB40 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C012DCC4 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C01300FC (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0133E28 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0135310 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0139E84 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0160FBC (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0161084 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C01646EC (SetWindowCompositionDarkModeColors.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C023B97C (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C023BA50 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C023BB24 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C023BBF8 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C023BCA8 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C023BD7C (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C023BE50 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C023BF24 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
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

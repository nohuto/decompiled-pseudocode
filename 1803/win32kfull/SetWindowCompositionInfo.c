/*
 * XREFs of SetWindowCompositionInfo @ 0x1C0070090
 * Callers:
 *     SetWindowCompositionNCRenderingExiled @ 0x1C006EAEC (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0104E0C (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C01050A0 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0105154 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z @ 0x1C0105650 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C01079B8 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010C6CC (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C010E4C4 (SetWindowCompositionForceIconicSWR.c)
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
 *     <none>
 */

__int64 __fastcall SetWindowCompositionInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // esi
  __int64 Prop; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  v2 = a1 + 120;
  v4 = 0;
  Prop = RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomDWMProp, 1LL);
  if ( Prop )
  {
    v4 = 1;
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
      v4 = RealInternalSetProp(v2, v9, v7, 1LL);
      if ( !v4 )
        Win32FreePool(v8);
    }
  }
  return v4;
}

/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1C00702C4
 * Callers:
 *     SetWindowCompositionNCRenderingExiled @ 0x1C006EAEC (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0104E0C (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C01050A0 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0105154 (SetWindowCompositionFreezeSWR.c)
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
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, int a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  _OWORD v14[6]; // [rsp+20h] [rbp-49h] BYREF

  v5 = a3;
  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v14, 0, 0x58uLL);
    v9 = *a4;
    v10 = *((_QWORD *)a4 + 2);
    *(_DWORD *)((char *)v14 + 2) = -2147483560;
    *((_QWORD *)&v14[2] + 1) = 1073741867LL;
    *(_QWORD *)&v14[3] = a2;
    DWORD2(v14[3]) = v5;
    v11 = qword_1C02DCE78[2 * v5];
    v14[4] = v9;
    LOWORD(v14[0]) = v11 + 24;
    v12 = qword_1C02DCE78[2 * v5];
    *(_QWORD *)&v14[5] = v10;
    HIDWORD(v14[3]) = v12;
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}

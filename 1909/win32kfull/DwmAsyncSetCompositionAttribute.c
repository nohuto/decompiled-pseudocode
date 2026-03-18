/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1C00191E8
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0015D14 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C0015E18 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C00163E0 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0019118 (SetWindowCompositionNCRenderingExiled.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
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
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
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
    v11 = qword_1C02DF5F8[2 * v5];
    v14[4] = v9;
    LOWORD(v14[0]) = v11 + 24;
    v12 = qword_1C02DF5F8[2 * v5];
    *(_QWORD *)&v14[5] = v10;
    HIDWORD(v14[3]) = v12;
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}

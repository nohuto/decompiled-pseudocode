/*
 * XREFs of ?Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z @ 0x18002073C
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x18003D624 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ??0CDecodeBitmap@@IEAA@U_LUID@@@Z @ 0x1800207A4 (--0CDecodeBitmap@@IEAA@U_LUID@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDecodeBitmap::Create(struct _LUID a1, struct CDecodeBitmap **a2)
{
  unsigned int v4; // edi
  CDecodeBitmap *v5; // rax
  unsigned int v6; // ecx

  v4 = 0;
  v5 = (CDecodeBitmap *)operator new(0xD0uLL);
  if ( v5 )
    v5 = CDecodeBitmap::CDecodeBitmap(v5, a1);
  *a2 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(CDecodeBitmap *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  return v4;
}

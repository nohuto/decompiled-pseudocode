/*
 * XREFs of ?Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z @ 0x180020088
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180097870 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 * Callees:
 *     ??0CDecodeBitmap@@IEAA@U_LUID@@@Z @ 0x180020100 (--0CDecodeBitmap@@IEAA@U_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDecodeBitmap::Create(struct _LUID a1, struct CDecodeBitmap **a2)
{
  unsigned int v4; // edi
  CDecodeBitmap *v5; // rax
  struct CDecodeBitmap *v6; // rax
  unsigned int v7; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CDecodeBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0xD0uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CDecodeBitmap::CDecodeBitmap(v5, a1);
  *a2 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CDecodeBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x16u);
  }
  return v4;
}

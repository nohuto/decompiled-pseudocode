/*
 * XREFs of ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C02881A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0035594 (McTemplateK0p.c)
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0285F34 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

void __fastcall SwapChainObCloseProcedure(struct _EPROCESS *a1, DXGSWAPCHAIN **a2)
{
  const GUID *v3; // r8

  if ( *a2 )
  {
    DXGSWAPCHAIN::DestroyLocal(*a2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0p(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventIndirectSwapChainCloseHandle,
        v3,
        *a2);
  }
}

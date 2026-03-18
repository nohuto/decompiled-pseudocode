/*
 * XREFs of ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C0252340
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C002FD94 (McTemplateK0p.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0040D64 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 */

void __fastcall SwapChainObDeleteProcedure(DXGSWAPCHAIN **a1)
{
  DXGSWAPCHAIN *v2; // rcx
  const GUID *v3; // r8

  v2 = *a1;
  if ( v2 )
  {
    DXGSWAPCHAIN::`scalar deleting destructor'(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventIndirectSwapChainDestroy, v3, *a1);
    *a1 = 0LL;
  }
}

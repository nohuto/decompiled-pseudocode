/*
 * XREFs of ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C0288600
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C00356F4 (McTemplateK0p.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0047D10 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 */

void __fastcall SwapChainObDeleteProcedure(DXGSWAPCHAIN **a1)
{
  DXGSWAPCHAIN *v2; // rcx
  const GUID *v3; // r8

  v2 = *a1;
  if ( v2 )
  {
    DXGSWAPCHAIN::`scalar deleting destructor'(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventIndirectSwapChainDestroy, v3, *a1);
    *a1 = 0LL;
  }
}

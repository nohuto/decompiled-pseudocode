/*
 * XREFs of ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C02521CC
 * Callers:
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0040504 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0247C4C (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     DxgkAbandonSwapChain @ 0x1C0252710 (DxgkAbandonSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0250ECC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall SwapChainAbandonInternal(struct DXGSWAPCHAIN *this)
{
  __int64 v2; // rdx
  const GUID *v3; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  DXGSWAPCHAIN::MarkAbandoned((struct _KTHREAD **)this, v2, v3);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  return 0LL;
}

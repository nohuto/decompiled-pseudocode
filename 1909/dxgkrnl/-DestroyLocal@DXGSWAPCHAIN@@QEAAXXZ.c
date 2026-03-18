/*
 * XREFs of ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C02862F4
 * Callers:
 *     ?SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C02885B0 (-SwapChainObCloseProcedure@@YAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C0286684 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0286FBC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocal(DXGSWAPCHAIN *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // dl
  __int64 CurrentProcess; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  if ( *((_QWORD *)this + 13) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v4);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 88));
  }
  if ( *((_QWORD *)this + 19) == CurrentProcess )
  {
    DXGSWAPCHAIN::MarkAbandoned(this, v4);
    DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (DXGSWAPCHAIN *)((char *)this + 136));
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}

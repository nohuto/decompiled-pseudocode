/*
 * XREFs of _lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_ @ 0x1C027AD60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C02882B4 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

LONG_PTR __fastcall lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_(struct DXGSWAPCHAIN **Object)
{
  struct DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // rdi
  LONG_PTR result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-58h]
  struct _D3DKMT_RELEASESWAPCHAIN v10; // [rsp+30h] [rbp-48h] BYREF

  memset(&v10, 0, 0x40uLL);
  v2 = *Object;
  v10.bProducer = 1;
  v3 = (int)SwapChainReleaseInternal(v2, &v10, 0LL, 0, v9);
  result = ObfDereferenceObject(Object);
  if ( (int)v3 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = v3;
    return WdLogEvent5_WdError(v8);
  }
  return result;
}

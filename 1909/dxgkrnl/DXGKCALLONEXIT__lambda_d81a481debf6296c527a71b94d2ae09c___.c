/*
 * XREFs of DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c___ @ 0x1C000171C
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C00C8824 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234BF4 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c_(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1

  result = a1;
  v3 = a2[1];
  *(_OWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 32) = 1;
  *(_OWORD *)(a1 + 16) = v3;
  return result;
}

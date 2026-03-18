/*
 * XREFs of ?IsDriverBlacklisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1801AC338
 * Callers:
 *     ?IsFrontBufferRenderingSupported@CD3DDeviceLevel1@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x1800E47B4 (-IsFrontBufferRenderingSupported@CD3DDeviceLevel1@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA?AUComputeScribbleSupportResult@@XZ @ 0x180165A28 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA-AUComputeScribbleSupportResult@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComputeScribbleRenderer::IsDriverBlacklisted(const struct CD3DDeviceLevel1 *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 87);
  return *(_DWORD *)(v1 + 296) == 4318 && *(_QWORD *)(v1 + 352) < 0x180015000D25B5uLL;
}

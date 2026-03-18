/*
 * XREFs of ?IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x18022C950
 * Callers:
 *     ?GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z @ 0x180089D3C (-GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z.c)
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA?AUComputeScribbleSupportResult@@XZ @ 0x180207B88 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA-AUComputeScribbleSupportResult@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CComputeScribbleRenderer::IsGPUWhitelisted(const struct CD3DDeviceLevel1 *a1)
{
  char v1; // dl

  v1 = 0;
  if ( CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist || *(_DWORD *)(*((_QWORD *)a1 + 87) + 296LL) == 32902 )
    return 1;
  return v1;
}

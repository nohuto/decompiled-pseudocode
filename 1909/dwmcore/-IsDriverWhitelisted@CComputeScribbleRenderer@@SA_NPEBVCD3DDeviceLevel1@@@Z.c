/*
 * XREFs of ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1800E3E24
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800E3960 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDeviceLevel1@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x1800E47B4 (-IsFrontBufferRenderingSupported@CD3DDeviceLevel1@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA?AUComputeScribbleSupportResult@@XZ @ 0x180165A28 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA-AUComputeScribbleSupportResult@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComputeScribbleRenderer::IsDriverWhitelisted(const struct CD3DDeviceLevel1 *a1)
{
  __int64 v1; // rax
  bool result; // al

  result = 1;
  if ( !CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist )
  {
    v1 = *((_QWORD *)a1 + 87);
    if ( *(_DWORD *)(v1 + 296) != 32902 || *(int *)(v1 + 348) >= 2600 )
      return 0;
  }
  return result;
}

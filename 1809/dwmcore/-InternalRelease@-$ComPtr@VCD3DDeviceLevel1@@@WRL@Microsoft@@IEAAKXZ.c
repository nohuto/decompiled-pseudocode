/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FBA8
 * Callers:
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800065C0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18001C23C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018E7DC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180210A94 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x180210CE4 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CD3DSurface::Release((CD3DSurface *)(v1 + 496));
  }
  return result;
}

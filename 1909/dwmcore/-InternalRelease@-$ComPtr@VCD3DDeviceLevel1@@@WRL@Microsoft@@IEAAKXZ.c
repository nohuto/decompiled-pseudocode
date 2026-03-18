/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CEBA0
 * Callers:
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801CE8E4 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801CFDD8 (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D0544 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801FBFA0 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801FC0D0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180243DA0 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x180244000 (-Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILPoolResource::Release((CMILPoolResource *)(v1 + 496));
  }
  return result;
}

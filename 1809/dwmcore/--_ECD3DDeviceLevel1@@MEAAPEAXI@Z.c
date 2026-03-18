/*
 * XREFs of ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800E8F90
 * Callers:
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180036D7C (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800D60A8 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 *     ??_ECD3DDeviceLevel1@@OBPA@EAAPEAXI@Z @ 0x1800F0BF0 (--_ECD3DDeviceLevel1@@OBPA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800E92D4 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::`vector deleting destructor'(CD3DDeviceLevel1 *this, char a2)
{
  CD3DDeviceLevel1::~CD3DDeviceLevel1(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}

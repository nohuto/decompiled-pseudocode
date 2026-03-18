/*
 * XREFs of ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180024240
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180025400 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180058A18 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ??_ECD3DDeviceLevel1@@OBPA@EAAPEAXI@Z @ 0x1800EC580 (--_ECD3DDeviceLevel1@@OBPA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::`vector deleting destructor'(CD3DDeviceLevel1 *this, char a2)
{
  CD3DDeviceLevel1::~CD3DDeviceLevel1(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}

/*
 * XREFs of ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C02246A8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0225358 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C024D4A0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C024DCA0 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C024E4A0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::CloseInternalCddPrimaryHandle(DXGDEVICE *this, struct COREDEVICEACCESS *a2)
{
  __int64 i; // rdi
  struct DXGRESOURCE *v5; // r9

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 434); i = (unsigned int)(i + 1) )
  {
    v5 = (struct DXGRESOURCE *)*((_QWORD *)this + i + 65);
    if ( v5 )
    {
      if ( *((_BYTE *)this + i + 504) )
      {
        DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v5, a2, DXGDEVICE::DestroyFlagsDefault);
        *((_BYTE *)this + i + 504) = 0;
      }
    }
  }
}

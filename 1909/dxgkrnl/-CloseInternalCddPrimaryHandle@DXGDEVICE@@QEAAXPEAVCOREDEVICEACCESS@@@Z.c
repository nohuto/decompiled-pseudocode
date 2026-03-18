/*
 * XREFs of ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0259590
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C024CAF0 (DxgkSubmitPresentToHwQueue.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C025A24C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C02830D0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C02838D0 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02840D0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
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

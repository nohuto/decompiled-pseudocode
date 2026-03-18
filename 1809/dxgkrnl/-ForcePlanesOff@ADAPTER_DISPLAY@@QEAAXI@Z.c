/*
 * XREFs of ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C013B80C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00060EC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C1920 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ForcePlanesOff(DXGADAPTER **this)
{
  DXGADAPTER *v1; // r8
  ADAPTER_DISPLAY *v2; // r9
  unsigned int v3; // r10d
  unsigned __int8 v4; // r8

  if ( *((_QWORD *)this[2] + 316) )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(this[2]) )
    {
      if ( (unsigned int)DXGADAPTER::GetDriverVersion(v1) != 2200 )
        return;
      v4 = 0;
    }
    else
    {
      v4 = 1;
    }
    ADAPTER_DISPLAY::DisableMPOPlanes(v2, v3, v4);
  }
}

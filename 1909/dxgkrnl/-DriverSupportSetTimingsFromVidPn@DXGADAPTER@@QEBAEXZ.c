/*
 * XREFs of ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6DB8
 * Callers:
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128B44 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C016A9CC (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02BA6C0 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::DriverSupportSetTimingsFromVidPn(DXGADAPTER *this)
{
  unsigned __int8 result; // al

  result = 0;
  if ( *((int *)this + 546) >= 8704 && *((_DWORD *)this + 432) >= 0x7007u && *((_QWORD *)this + 131) )
  {
    if ( *((_QWORD *)this + 112) )
      return 1;
  }
  return result;
}

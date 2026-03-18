/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00B5C6C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00B5A34 (_EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00CE3E0 (DxgkGetAdapterDefaultScaling.c)
 *     BmlPinPathContentScaling @ 0x1C00D67C0 (BmlPinPathContentScaling.c)
 *     BmlInternalTryPinningScaling @ 0x1C00D6924 (BmlInternalTryPinningScaling.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C027ACEC (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this)
{
  __int64 v2; // rcx
  int DriverVersion; // eax
  unsigned int v4; // ecx
  __int64 v6; // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v6);
    v2 = *((_QWORD *)this + 1);
  }
  DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v2 + 16));
  v4 = 255;
  if ( DriverVersion >= 1105 )
    return 4;
  return v4;
}

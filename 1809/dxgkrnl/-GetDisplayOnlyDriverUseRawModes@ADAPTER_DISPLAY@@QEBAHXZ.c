/*
 * XREFs of ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C00396F0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00E2DB0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(ADAPTER_DISPLAY *this)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2528LL) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 6158LL;
    WdLogEvent5_WdAssertion(v2);
  }
  return *((unsigned int *)this + 63);
}

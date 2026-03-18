/*
 * XREFs of ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0055EF8
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0006778 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

_BOOL8 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(DXGADAPTER **this, __int64 a2)
{
  __int64 v3; // rax
  DXGADAPTER *v4; // rcx
  _BOOL8 result; // rax

  if ( *((_QWORD *)this[2] + 320) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 6391LL;
    WdLogEvent5_WdAssertion(v3);
  }
  result = 1;
  if ( !*((_DWORD *)this + 90) )
  {
    v4 = this[2];
    if ( (*((_DWORD *)v4 + 77) & 0x100) != 0 || DXGADAPTER::SupportHWVSync(v4) )
      return 0;
  }
  return result;
}

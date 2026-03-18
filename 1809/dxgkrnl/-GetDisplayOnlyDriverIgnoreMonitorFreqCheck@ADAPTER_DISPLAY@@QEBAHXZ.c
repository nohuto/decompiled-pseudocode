/*
 * XREFs of ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C004EE58
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0016588 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

_BOOL8 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(DXGADAPTER **this)
{
  __int64 v2; // rax
  DXGADAPTER *v3; // rcx
  _BOOL8 result; // rax

  if ( *((_QWORD *)this[2] + 316) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 6164LL;
    WdLogEvent5_WdAssertion(v2);
  }
  result = 1;
  if ( !*((_DWORD *)this + 64) )
  {
    v3 = this[2];
    if ( (*((_DWORD *)v3 + 77) & 0x100) != 0 || DXGADAPTER::SupportHWVSync(v3) )
      return 0;
  }
  return result;
}

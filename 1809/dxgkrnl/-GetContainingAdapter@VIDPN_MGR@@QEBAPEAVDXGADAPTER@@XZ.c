/*
 * XREFs of ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0005F0C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D386C (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTER *__fastcall VIDPN_MGR::GetContainingAdapter(VIDPN_MGR *this)
{
  __int64 v1; // rax
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v4);
    v1 = *((_QWORD *)this + 1);
  }
  return *(struct DXGADAPTER **)(v1 + 16);
}

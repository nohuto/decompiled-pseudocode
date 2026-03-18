/*
 * XREFs of ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0139D7C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0282754 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0283C40 (-Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C00194EC (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(DMMVIDEOPRESENTTARGET *this, char a2, unsigned __int8 a3)
{
  __int64 v3; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = *((_QWORD *)this + 5);
  if ( !v3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
    v3 = *((_QWORD *)this + 5);
  }
  v7 = *(_QWORD *)(v3 + 88);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
    v8 = *(_QWORD *)(v7 + 8);
  }
  DMMVIDEOPRESENTTARGET::SetPowerState(this, *(struct DXGADAPTER **)(v8 + 16), a3);
  *((_BYTE *)this + 417) = a2;
}

/*
 * XREFs of ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C001AA38
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTER *__fastcall VIDPN_MGR::GetContainingAdapter(VIDPN_MGR *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
    v2 = *((_QWORD *)this + 1);
  }
  return *(struct DXGADAPTER **)(v2 + 16);
}

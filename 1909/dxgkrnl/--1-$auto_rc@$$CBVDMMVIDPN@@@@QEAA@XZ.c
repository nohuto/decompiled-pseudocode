/*
 * XREFs of ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C004546C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>(__int64 *a1, __int64 a2, __int64 a3)
{
  return auto_rc<DMMVIDPN const>::reset(a1, 0LL, a3);
}

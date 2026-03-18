/*
 * XREFs of ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E705C
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00D8BF4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6FA0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 * Callees:
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00E8160 (MonitorGetMonitorOrientationsFromTarget.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AddingMonitorOrientation(
        ADAPTER_DISPLAY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2,
        unsigned int a3)
{
  char v3; // bl
  int MonitorOrientationsFromTarget; // eax
  char v5; // cl
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  MonitorOrientationsFromTarget = MonitorGetMonitorOrientationsFromTarget(*((_QWORD *)this + 2), a3, &v7);
  v5 = v7;
  if ( MonitorOrientationsFromTarget < 0 )
    v5 = 0;
  return ((v5 + v3 - 1) & 3u) + 1;
}

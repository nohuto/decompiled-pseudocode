/*
 * XREFs of _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C015C9DC
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015C7D0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

int __fastcall VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(
        __int64 a1,
        __int64 a2,
        const GUID *a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( !*(_DWORD *)a1 )
    {
      v3 = *(_QWORD *)(a1 + 8) - 1LL;
      if ( (v3 & 0xFFFFFFFFFFFFFFFDuLL) == 0
        && *(_DWORD *)(a1 + 16) == 1
        && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
      {
        LODWORD(v3) = McTemplateK0q(
                        a1,
                        &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel,
                        a3,
                        *(_DWORD *)(a1 + 20));
      }
    }
  }
  return v3;
}

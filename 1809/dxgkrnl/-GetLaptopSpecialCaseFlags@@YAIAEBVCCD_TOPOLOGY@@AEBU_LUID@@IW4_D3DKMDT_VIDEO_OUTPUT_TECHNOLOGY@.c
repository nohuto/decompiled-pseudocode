/*
 * XREFs of ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C0239D54
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall GetLaptopSpecialCaseFlags(
        const struct CCD_TOPOLOGY *a1,
        const struct _LUID *a2,
        int a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4,
        const struct MONITORSCOUNT_CALLBACK_CONTEXT *a5)
{
  __int64 v5; // rax
  __int64 v9; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v11; // rax

  v5 = *((_QWORD *)a1 + 8);
  if ( v5 )
    LOWORD(v5) = *(_WORD *)(v5 + 20);
  if ( (_WORD)v5 != 1 || *((_DWORD *)a5 + 1) != 2 )
    return 0LL;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a1, 0);
  if ( !PathDescriptor )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 3244LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_DWORD *)PathDescriptor + 7) == a3
    && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
    && *((_DWORD *)PathDescriptor + 5) == a2->HighPart )
  {
    return 0LL;
  }
  if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)PathDescriptor + 22)) )
    return 8LL;
  return IsInternalVideoOutput(a4);
}

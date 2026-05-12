/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C0045080
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C00467A8 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C0037958 (WPP_SF_q.c)
 *     McTemplateK0quuujq @ 0x1C0043974 (McTemplateK0quuujq.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0047CCC (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C004ED08 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // ebx

  v2 = *(_BYTE *)(a1 + 162);
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 96);
    if ( byte_1C0061743 < 0 )
    {
      McTemplateK0quuujq(
        *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 24),
        &EventUnitUnresponsive,
        HIWORD(v3),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v3,
        SBYTE1(v3),
        SBYTE2(v3),
        a1 + 1720,
        5);
      v2 = *(_BYTE *)(a1 + 162);
    }
    *(_BYTE *)(a1 + 162) = v2 | 2;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x32u,
        (__int64)&WPP_a32982da72aa344f3768c69018313f42_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 476) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v3);
  }
  return 0LL;
}

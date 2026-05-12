/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C0046470
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0047B98 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 *     McTemplateK0quuujq @ 0x1C0044D64 (McTemplateK0quuujq.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0048E48 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C004FE78 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // ebx

  v2 = *(_BYTE *)(a1 + 450);
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 96);
    if ( byte_1C0062743 < 0 )
    {
      McTemplateK0quuujq(
        *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 24),
        &EventUnitUnresponsive,
        HIWORD(v3),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v3,
        SBYTE1(v3),
        SBYTE2(v3),
        a1 + 1976,
        5);
      v2 = *(_BYTE *)(a1 + 450);
    }
    *(_BYTE *)(a1 + 450) = v2 | 2;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x32u,
        (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 732) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v3);
  }
  return 0LL;
}

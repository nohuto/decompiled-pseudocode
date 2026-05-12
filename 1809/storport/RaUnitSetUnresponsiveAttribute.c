/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C0047CB4
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C004904C (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     McTemplateK0zqjujsssq @ 0x1C0027418 (McTemplateK0zqjujsssq.c)
 *     McTemplateK0zqjuuujsssq @ 0x1C0027594 (McTemplateK0zqjuuujsssq.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C004A478 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0050990 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  char v2; // cl
  int v3; // ebx

  v2 = *(_BYTE *)(a1 + 450);
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 96);
    if ( byte_1C00617E3 < 0 )
    {
      McTemplateK0zqjuuujsssq(
        *(_QWORD *)(a1 + 24) + 5256LL,
        &EventUnitUnresponsive,
        a1 + 169,
        *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5256LL,
        v3,
        SBYTE1(v3),
        SBYTE2(v3),
        a1 + 1976,
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
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
        0x35u,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 732) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
    {
      if ( (byte_1C00617E3 & 0x40) != 0 )
        McTemplateK0zqjujsssq(
          a1 + 169,
          a1 + 160,
          a1 + 1976,
          *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 5256LL,
          *(_BYTE *)(a1 + 96),
          a1 + 1976,
          (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
          (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
          (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
          2);
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v3);
    }
  }
  return 0LL;
}

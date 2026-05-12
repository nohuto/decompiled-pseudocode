/*
 * XREFs of RaidUnitRequestTimeout @ 0x1C004A5E8
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000FC60 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     McTemplateK0zqjujsssq @ 0x1C0027418 (McTemplateK0zqjujsssq.c)
 *     McTemplateK0zqjuuujsssq @ 0x1C0027594 (McTemplateK0zqjuuujsssq.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     WPP_SF_ddd @ 0x1C003BA34 (WPP_SF_ddd.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C004A478 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C004B578 (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0050990 (StorpTelemetryMarkUnitUnresponsive.c)
 */

char __fastcall RaidUnitRequestTimeout(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rax
  char result; // al

  v1 = *(_DWORD *)(a1 + 96);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x40u,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x41u,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        (unsigned __int8)v1,
        BYTE1(v1),
        BYTE2(v1));
    }
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && *(char *)(v3 + 108) < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2056));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5488LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2112));
  if ( *(_DWORD *)(a1 + 1268) )
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
        3);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 450) |= 2u;
    if ( byte_1C00617E3 < 0 )
      McTemplateK0zqjuuujsssq(
        a1 + 169,
        &EventUnitUnresponsive,
        a1 + 1976,
        *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5256LL,
        v1,
        SBYTE1(v1),
        SBYTE2(v1),
        a1 + 1976,
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
        2);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x42u,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        a1);
    }
  }
  result = RaidUnitQueueHierarchicalResetWorkItem(a1);
  if ( !result )
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
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}

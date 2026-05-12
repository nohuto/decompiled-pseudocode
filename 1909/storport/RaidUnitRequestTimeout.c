/*
 * XREFs of RaidUnitRequestTimeout @ 0x1C0048FC8
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000F040 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 *     WPP_SF_ddd @ 0x1C0038CEC (WPP_SF_ddd.c)
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 *     McTemplateK0quuujq @ 0x1C0044D64 (McTemplateK0quuujq.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0048E48 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C0049F50 (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C004FE78 (StorpTelemetryMarkUnitUnresponsive.c)
 */

char __fastcall RaidUnitRequestTimeout(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // r8
  char result; // al
  __int64 v6; // [rsp+20h] [rbp-48h]
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+28h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 96);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Eu,
        (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      v9 = BYTE2(v1);
      v7 = BYTE1(v1);
      WPP_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Fu,
        (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
        (unsigned __int8)v1,
        v7,
        v9);
    }
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && *(char *)(v3 + 108) < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2056));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5352LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2112));
  if ( *(_DWORD *)(a1 + 1292) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        LODWORD(v8) = BYTE2(v1);
        LODWORD(v6) = BYTE1(v1);
        WPP_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x40u,
          (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
          (unsigned __int8)v1,
          v6,
          v8);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x41u,
          (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids);
      }
    }
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 450) |= 2u;
    if ( byte_1C0062743 < 0 )
      McTemplateK0quuujq(
        *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 24),
        &EventUnitUnresponsive,
        v4,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v1,
        SBYTE1(v1),
        SBYTE2(v1),
        a1 + 1976,
        2);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x42u,
        (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
        a1);
    }
  }
  result = RaidUnitQueueHierarchicalResetWorkItem(a1);
  if ( !result )
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  return result;
}

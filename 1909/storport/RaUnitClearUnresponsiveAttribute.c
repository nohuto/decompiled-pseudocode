/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C0045740
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0047B98 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 *     McTemplateK0quuujq @ 0x1C0044D64 (McTemplateK0quuujq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C004FD0C (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (byte_1C0062744 & 1) != 0 )
      McTemplateK0quuujq(
        (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(a1 + 96) >> 8),
        &EventUnitResponsive,
        a1 + 1976,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_DWORD *)(a1 + 96),
        BYTE1(*(_DWORD *)(a1 + 96)),
        BYTE2(*(_DWORD *)(a1 + 96)),
        a1 + 1976,
        4);
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 450) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x31u,
        (__int64)&WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
        a1);
    }
  }
  return 0LL;
}

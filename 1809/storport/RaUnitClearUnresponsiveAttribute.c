/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C0046E90
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C004904C (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     McTemplateK0zqjuuujsssq @ 0x1C0027594 (McTemplateK0zqjuuujsssq.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0050824 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // eax

  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (byte_1C00617E4 & 1) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 96);
      McTemplateK0zqjuuujsssq(
        v2 >> 8,
        &EventUnitResponsive,
        a1 + 186,
        *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5256LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 1976,
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
        4);
    }
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 450) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x34u,
        (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
        a1);
    }
  }
  return 0LL;
}

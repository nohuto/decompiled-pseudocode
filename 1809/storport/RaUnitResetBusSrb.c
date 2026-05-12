/*
 * XREFs of RaUnitResetBusSrb @ 0x1C004757C
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 * Callees:
 *     McTemplateK0zqjujsssq @ 0x1C0027418 (McTemplateK0zqjujsssq.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004B2D0 (RaidUnitSubmitResetRequest.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( (byte_1C00617E3 & 0x40) != 0 )
    McTemplateK0zqjujsssq(
      a1,
      a2,
      a1 + 169,
      *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5256LL,
      *(_BYTE *)(a1 + 96),
      a1 + 1976,
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
      1);
  return RaidUnitSubmitResetRequest(a1, a2);
}

/*
 * XREFs of RaUnitResetBusSrb @ 0x1C00449D0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 * Callees:
 *     McTemplateK0quj @ 0x1C004386C (McTemplateK0quj.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0048B18 (RaidUnitSubmitResetRequest.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( (byte_1C0061743 & 0x40) != 0 )
    McTemplateK0quj(
      (struct _MCGEN_TRACE_CONTEXT *)a1,
      a2,
      *(_QWORD *)(a1 + 24),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      a1 + 1720);
  return RaidUnitSubmitResetRequest(a1, a2);
}

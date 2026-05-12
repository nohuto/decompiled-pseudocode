/*
 * XREFs of RaUnitResetBusSrb @ 0x1C0045DC0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 * Callees:
 *     McTemplateK0quj @ 0x1C0044C5C (McTemplateK0quj.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0049C88 (RaidUnitSubmitResetRequest.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( (byte_1C0062743 & 0x40) != 0 )
    McTemplateK0quj(
      (struct _MCGEN_TRACE_CONTEXT *)a1,
      a2,
      *(_QWORD *)(a1 + 24),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      a1 + 1976);
  return RaidUnitSubmitResetRequest(a1, a2);
}

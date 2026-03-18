/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x140073464
 * Callers:
 *     MiAdvanceVadView @ 0x1400ACF34 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) )
    a2 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) - 1;
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}

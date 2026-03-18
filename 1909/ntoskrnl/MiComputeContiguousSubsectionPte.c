/*
 * XREFs of MiComputeContiguousSubsectionPte @ 0x1400736D4
 * Callers:
 *     MiAdvanceVadView @ 0x1400E8444 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeContiguousSubsectionPte(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) )
    a2 = *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFFu) - 1;
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}

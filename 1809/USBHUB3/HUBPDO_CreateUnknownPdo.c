/*
 * XREFs of HUBPDO_CreateUnknownPdo @ 0x1C0070B38
 * Callers:
 *     HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x1C001DFA0 (HUBDSM_CreatingUnknownChildPDOAndReportingToPnp.c)
 * Callees:
 *     HUBPDO_CreatePdoInternal @ 0x1C006F900 (HUBPDO_CreatePdoInternal.c)
 */

__int64 __fastcall HUBPDO_CreateUnknownPdo(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 2;
  return HUBPDO_CreatePdoInternal(a1, 0);
}

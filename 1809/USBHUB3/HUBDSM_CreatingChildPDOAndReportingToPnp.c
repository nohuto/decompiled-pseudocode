/*
 * XREFs of HUBDSM_CreatingChildPDOAndReportingToPnp @ 0x1C001DE40
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CreatePdo @ 0x1C0070A74 (HUBPDO_CreatePdo.c)
 */

__int64 __fastcall HUBDSM_CreatingChildPDOAndReportingToPnp(__int64 a1)
{
  return HUBPDO_CreatePdo(*(_QWORD *)(a1 + 960));
}

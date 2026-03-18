/*
 * XREFs of HUBHSM_QueryingForHubHackFlags @ 0x1C00083E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0074514 (HUBFDO_QueryHubErrataFlags.c)
 */

__int64 __fastcall HUBHSM_QueryingForHubHackFlags(__int64 a1)
{
  return HUBFDO_QueryHubErrataFlags(*(_QWORD *)(a1 + 960));
}

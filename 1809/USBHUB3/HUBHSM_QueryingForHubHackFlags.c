/*
 * XREFs of HUBHSM_QueryingForHubHackFlags @ 0x1C0007AC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C006E11C (HUBFDO_QueryHubErrataFlags.c)
 */

__int64 __fastcall HUBHSM_QueryingForHubHackFlags(__int64 a1)
{
  return HUBFDO_QueryHubErrataFlags(*(_QWORD *)(a1 + 960));
}

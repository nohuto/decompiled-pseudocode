/*
 * XREFs of PsmHamTerminateHost @ 0x180054890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsmHamTerminateHost(__int64 a1, unsigned int a2)
{
  return HamSrvTerminateHostForBi((char *)RmSvcGlobals + 1608, a1, a2);
}

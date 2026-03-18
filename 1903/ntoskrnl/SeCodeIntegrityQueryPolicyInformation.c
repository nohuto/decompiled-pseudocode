/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x1406B0570
 * Callers:
 *     SepIsSModeEnabled @ 0x1400FE6D0 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140436508 )
    return qword_140436508(a1);
  else
    return 3221225473LL;
}

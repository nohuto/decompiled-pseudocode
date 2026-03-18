/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x1406B24A0
 * Callers:
 *     SepIsSModeEnabled @ 0x1401010D0 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140436488 )
    return qword_140436488(a1);
  else
    return 3221225473LL;
}

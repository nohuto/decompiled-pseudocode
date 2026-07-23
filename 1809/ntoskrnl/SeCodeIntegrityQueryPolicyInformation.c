/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x140690EA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegrityQueryPolicyInformation()
{
  if ( qword_14040EE48 )
    return qword_14040EE48();
  else
    return 3221225473LL;
}

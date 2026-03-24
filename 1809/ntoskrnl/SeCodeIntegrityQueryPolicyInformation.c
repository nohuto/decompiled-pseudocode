/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x14068FCE0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegrityQueryPolicyInformation()
{
  if ( qword_14040DDE8 )
    return qword_14040DDE8();
  else
    return 3221225473LL;
}

/*
 * XREFs of SeCodeIntegrityQueryInformation @ 0x1406DCD0C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v5; // ecx

  v3 = a3;
  if ( !qword_140436498 )
    return 3221225473LL;
  v5 = (unsigned __int8)SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v5 = (unsigned __int8)SeILSigningPolicyRuntime;
  LOBYTE(a3) = v5 != 0;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_140436498)(a1, a2, a3, v3);
}

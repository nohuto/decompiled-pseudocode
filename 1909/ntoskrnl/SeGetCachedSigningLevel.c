/*
 * XREFs of SeGetCachedSigningLevel @ 0x1406D1D90
 * Callers:
 *     NtGetCachedSigningLevel @ 0x1406D1B40 (NtGetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_140436410 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140436410)(a1, a3, a2);
  return 3221225485LL;
}

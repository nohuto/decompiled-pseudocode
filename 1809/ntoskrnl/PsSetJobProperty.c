/*
 * XREFs of PsSetJobProperty @ 0x1402E9DF0
 * Callers:
 *     <none>
 * Callees:
 *     PspInsertProperty @ 0x14010F024 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14010F10C (PspRemoveProperty.c)
 */

__int64 __fastcall PsSetJobProperty(__int64 a1, __int64 a2, void *a3)
{
  KSPIN_LOCK *v4; // rcx

  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] != PsJobType )
  {
    return 3221225485LL;
  }
  v4 = (KSPIN_LOCK *)(a1 + 1264);
  if ( a3 )
    return PspInsertProperty(v4, a2, a3);
  else
    return PspRemoveProperty((__int64)v4, a2, 0LL);
}

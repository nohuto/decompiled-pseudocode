/*
 * XREFs of PspLockJobMemoryLimitsExclusive @ 0x1406157A8
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    --*(_WORD *)(a3 + 486);
  if ( a1 != a2 )
    ExAcquirePushLockExclusiveEx(a1 + 1032, 0LL);
}

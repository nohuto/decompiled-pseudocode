/*
 * XREFs of CemRcTableWaitForEmpty @ 0x18007E894
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A90 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18007D6DC (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcTableWaitForEmpty(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 16;
  RtlAcquireSRWLockExclusive(a1 + 16);
  while ( *(_DWORD *)(a1 + 40) )
    RtlSleepConditionVariableSRW(a1 + 32, v1, 0LL, 0LL);
  return RtlReleaseSRWLockExclusive(v1);
}

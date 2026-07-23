/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x14012F390
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1405F8498 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140706788 (PspSetProcessAffinityUpdateMode.c)
 *     NtGetNextProcess @ 0x14071A010 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x140749B58 (PspAssignPrimaryToken.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 728);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe(a2);
}

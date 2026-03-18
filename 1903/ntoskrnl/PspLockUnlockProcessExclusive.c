/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140109B18
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1405E732C (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14072CB94 (PspSetProcessAffinityUpdateMode.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x140780184 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140109B58 (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 736);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread(a2);
}

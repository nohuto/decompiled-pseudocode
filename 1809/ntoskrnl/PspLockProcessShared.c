/*
 * XREFs of PspLockProcessShared @ 0x14016107C
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 728, 0LL);
}

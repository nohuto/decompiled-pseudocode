/*
 * XREFs of PspLockProcessShared @ 0x14015BD24
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  return ExAcquirePushLockSharedEx(a1 + 736, 0LL);
}

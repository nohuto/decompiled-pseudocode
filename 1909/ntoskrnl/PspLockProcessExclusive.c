/*
 * XREFs of PspLockProcessExclusive @ 0x1400E9FEC
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspCreatePicoProcess @ 0x1408C9F00 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 736, 0LL);
}

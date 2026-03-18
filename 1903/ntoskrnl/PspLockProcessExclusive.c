/*
 * XREFs of PspLockProcessExclusive @ 0x1400E504C
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PspCreatePicoProcess @ 0x1408CA620 (PspCreatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 736, 0LL);
}

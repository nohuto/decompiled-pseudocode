/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x1400E9FC0
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PopDiagInitialize @ 0x140A06520 (PopDiagInitialize.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}

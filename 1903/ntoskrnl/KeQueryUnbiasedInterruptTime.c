/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x1400E5020
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PopDiagInitialize @ 0x140A06004 (PopDiagInitialize.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}

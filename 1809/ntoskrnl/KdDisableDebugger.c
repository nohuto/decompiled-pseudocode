/*
 * XREFs of KdDisableDebugger @ 0x1401936D0
 * Callers:
 *     NtSystemDebugControl @ 0x1408DA830 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1401936E4 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}

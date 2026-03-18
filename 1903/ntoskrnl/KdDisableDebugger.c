/*
 * XREFs of KdDisableDebugger @ 0x14019DCA0
 * Callers:
 *     NtSystemDebugControl @ 0x1409185C0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x14019DCB4 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}

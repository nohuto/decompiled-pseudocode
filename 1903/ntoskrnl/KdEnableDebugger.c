/*
 * XREFs of KdEnableDebugger @ 0x1402A2070
 * Callers:
 *     KdpStub @ 0x1400162A8 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1409185C0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1402A20AC (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1402A3174 (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = KeRelaxTimingConstraints(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}

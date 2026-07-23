/*
 * XREFs of KdEnableDebugger @ 0x14028C1D0
 * Callers:
 *     KdpStub @ 0x1400A3360 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14098FB60 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x14028C20C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x14028D2C4 (KeRelaxTimingConstraints.c)
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

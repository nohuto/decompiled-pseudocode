/*
 * XREFs of KdEnableDebugger @ 0x14028BEE0
 * Callers:
 *     KdpStub @ 0x1400A3420 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1408DA850 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x14028BF1C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x14028CFD4 (KeRelaxTimingConstraints.c)
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

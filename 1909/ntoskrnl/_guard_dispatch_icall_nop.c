/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1401C0950
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1401BDF54 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401BE200 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1401BE3B8 (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}

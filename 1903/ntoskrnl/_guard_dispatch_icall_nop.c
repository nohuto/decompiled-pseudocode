/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1401BFDD0
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1401BD834 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401BDAE0 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1401BDC98 (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}

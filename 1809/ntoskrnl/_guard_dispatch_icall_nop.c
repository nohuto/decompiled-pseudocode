/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1401B7FF0
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1401B2758 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401B2A04 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1401B2BBC (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}

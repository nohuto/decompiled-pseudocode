/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1401B7E70
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1401B25F8 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401B28A4 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1401B2A5C (SymCryptParallelHashSetNextWork.c)
 *     KeGuardDispatchICall @ 0x14034AB40 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}

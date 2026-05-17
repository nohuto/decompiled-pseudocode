/*
 * XREFs of ZwContinue @ 0x1800A0B40
 * Callers:
 *     LdrInitializeThunk @ 0x1800786D0 (LdrInitializeThunk.c)
 *     KiUserApcDispatcher @ 0x1800A3F10 (KiUserApcDispatcher.c)
 *     RtlRestoreContext @ 0x1800A4540 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1800A4870 (RcFrameConsolidation.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x18010C030 (RtlpLoadUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwContinue()
{
  __int64 result; // rax

  result = 67LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

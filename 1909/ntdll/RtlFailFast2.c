/*
 * XREFs of RtlFailFast2 @ 0x1800A1FA0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180078810 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F75C0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

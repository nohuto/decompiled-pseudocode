/*
 * XREFs of RtlFailFast2 @ 0x1401CD590
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140314D54 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

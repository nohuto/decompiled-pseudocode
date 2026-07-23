/*
 * XREFs of RtlFailFast2 @ 0x1401C65A0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6908 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

/*
 * XREFs of RtlFailFast2 @ 0x1401CCA10
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140315304 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}

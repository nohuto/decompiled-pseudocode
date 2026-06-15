/*
 * XREFs of __castguard_check_failure_user_handled_wrapper_0 @ 0x1800031A0
 * Callers:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 (*_castguard_check_failure_user_handled_wrapper_0())(void)
{
  __int64 (*result)(void); // rax

  result = qword_18004FD68;
  if ( qword_18004FD68 )
    return (__int64 (*)(void))qword_18004FD68();
  return result;
}

/*
 * XREFs of __castguard_check_failure_user_handled_wrapper_0 @ 0x18000CD64
 * Callers:
 *     sub_18000BF3C @ 0x18000BF3C (sub_18000BF3C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (*_castguard_check_failure_user_handled_wrapper_0())(void)
{
  __int64 (*result)(void); // rax

  result = qword_180269B48;
  if ( qword_180269B48 )
    return (__int64 (*)(void))qword_180269B48();
  return result;
}

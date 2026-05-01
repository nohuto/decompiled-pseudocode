/*
 * XREFs of __except_handler4 @ 0x1000CB60
 * Callers:
 *     <none>
 * Callees:
 *     __except_handler4_common @ 0x1000CF92 (__except_handler4_common.c)
 */

int __cdecl _except_handler4(int a1, int a2, int a3, int a4)
{
  return _except_handler4_common(&__security_cookie, __security_check_cookie, a1, a2, a3, a4);
}

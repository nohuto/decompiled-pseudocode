/*
 * XREFs of sub_1800D68F0 @ 0x1800D68F0
 * Callers:
 *     sub_180067840 @ 0x180067840 (sub_180067840.c)
 * Callees:
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_180078230 @ 0x180078230 (sub_180078230.c)
 *     sub_1800A629C @ 0x1800A629C (sub_1800A629C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     log10f @ 0x180127314 (log10f.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_1800D68F0(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+280h] [rbp+178h] BYREF

  result = &retaddr;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
  {
    sub_18006CE94(a2);
    sub_180078230();
  }
  return result;
}

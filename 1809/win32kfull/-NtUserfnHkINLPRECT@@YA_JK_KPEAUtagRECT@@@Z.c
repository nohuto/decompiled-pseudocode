/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C021184C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C014A020 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00B5C2C (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(__int64 a1, __int64 a2, struct tagRECT *a3)
{
  return xxxCallNextHookEx();
}

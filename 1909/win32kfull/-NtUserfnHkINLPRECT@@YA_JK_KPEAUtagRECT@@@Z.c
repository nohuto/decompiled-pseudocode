/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C02291F4
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C014C2B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(__int64 a1, __int64 a2, struct tagRECT *a3)
{
  return xxxCallNextHookEx();
}

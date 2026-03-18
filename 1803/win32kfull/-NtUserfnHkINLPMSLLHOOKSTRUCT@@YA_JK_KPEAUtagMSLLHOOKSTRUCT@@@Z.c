/*
 * XREFs of ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01EB80C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01299B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0129AEC (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(__int64 a1, __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  return xxxCallNextHookEx();
}

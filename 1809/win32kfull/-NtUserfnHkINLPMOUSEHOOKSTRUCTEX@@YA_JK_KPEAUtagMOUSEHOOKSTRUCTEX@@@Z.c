/*
 * XREFs of ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C0211770
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C014A020 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00B5C2C (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPMOUSEHOOKSTRUCTEX(__int64 a1, __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3)
{
  return xxxCallNextHookEx();
}

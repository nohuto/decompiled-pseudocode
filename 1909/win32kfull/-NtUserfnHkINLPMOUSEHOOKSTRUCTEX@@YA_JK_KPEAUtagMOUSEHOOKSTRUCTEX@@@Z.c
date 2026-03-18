/*
 * XREFs of ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C02290F8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C014C2B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPMOUSEHOOKSTRUCTEX(__int64 a1, __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3)
{
  return xxxCallNextHookEx();
}

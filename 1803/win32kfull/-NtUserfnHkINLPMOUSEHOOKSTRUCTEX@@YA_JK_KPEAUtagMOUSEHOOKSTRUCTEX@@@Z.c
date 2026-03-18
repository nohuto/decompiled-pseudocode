/*
 * XREFs of ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C01EB7A8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01299B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0129AEC (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPMOUSEHOOKSTRUCTEX(__int64 a1, __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3)
{
  return xxxCallNextHookEx();
}

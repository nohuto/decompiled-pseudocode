/*
 * XREFs of ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C022915C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C014C2B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(__int64 a1, __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  _OWORD v5[2]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagMSLLHOOKSTRUCT *)MmUserProbeAddress;
  v5[0] = *(_OWORD *)a3;
  v5[1] = *((_OWORD *)a3 + 1);
  return xxxCallNextHookEx();
}

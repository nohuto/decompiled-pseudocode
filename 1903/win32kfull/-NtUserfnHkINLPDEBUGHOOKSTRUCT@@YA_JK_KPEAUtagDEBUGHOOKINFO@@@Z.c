/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C02295B8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C014B500 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00B4548 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GetDebugHookLParamSize @ 0x1C021520C (GetDebugHookLParamSize.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(__int64 a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  unsigned int DebugHookLParamSize; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *Address[4]; // [rsp+28h] [rbp-40h] BYREF

  memset(Address, 0, sizeof(Address));
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a3;
  *(_OWORD *)&Address[2] = *((_OWORD *)a3 + 1);
  DebugHookLParamSize = GetDebugHookLParamSize(a2, (__int64)Address);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
  ProbeForRead(Address[1], DebugHookLParamSize, CurrentProcessWow64Process != 0 ? 1 : 4);
  return xxxCallNextHookEx();
}

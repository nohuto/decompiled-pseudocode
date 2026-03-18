/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01EB678
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01299B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0129AEC (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetDebugHookLParamSize @ 0x1C01D8AD8 (GetDebugHookLParamSize.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(__int64 a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  unsigned int DebugHookLParamSize; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcessWow64Process; // rax
  volatile void *Address[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]

  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a3;
  v11 = *((_OWORD *)a3 + 1);
  DebugHookLParamSize = GetDebugHookLParamSize(a2, (__int64)Address);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6, v7);
  ProbeForRead(Address[1], DebugHookLParamSize, CurrentProcessWow64Process != 0 ? 1 : 4);
  return xxxCallNextHookEx();
}

/*
 * XREFs of NtUserYieldTask @ 0x1C0237480
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0016ABC (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxUserYield @ 0x1C01EB76C (xxxUserYield.c)
 */

__int64 NtUserYieldTask()
{
  struct tagTHREADINFO *v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL);
  v1 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( *(_QWORD *)(v1 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) |= 0x400u;
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x400u;
    PriorityBoost::UpdateProcessPriorityForSpinning(gptiCurrent, v0);
  }
  v2 = xxxUserYield(gptiCurrent);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}

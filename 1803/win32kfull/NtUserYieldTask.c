/*
 * XREFs of NtUserYieldTask @ 0x1C01F7520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C005FDB4 (UpdateProcessPriorityForSpinning.c)
 *     xxxUserYield @ 0x1C01B381C (xxxUserYield.c)
 */

__int64 NtUserYieldTask()
{
  __int64 v0; // rcx
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 1LL);
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL);
  v0 = *(_QWORD *)(gptiCurrent + 472LL);
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) |= 0x400u;
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x400u;
    UpdateProcessPriorityForSpinning(gptiCurrent);
  }
  v1 = xxxUserYield(gptiCurrent);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v1;
}

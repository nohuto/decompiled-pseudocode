/*
 * XREFs of NtUserYieldTask @ 0x1C021F110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C00CF0D4 (UpdateProcessPriorityForSpinning.c)
 *     xxxUserYield @ 0x1C01D604C (xxxUserYield.c)
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
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v0 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) |= 0x400u;
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x400u;
    UpdateProcessPriorityForSpinning(gptiCurrent);
  }
  v1 = xxxUserYield(gptiCurrent);
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v1;
}

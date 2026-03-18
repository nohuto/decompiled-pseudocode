/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x1C0034150
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C00CF0D4 (UpdateProcessPriorityForSpinning.c)
 */

__int64 HandleProcessSpinning(void)
{
  __int64 v0; // rax
  BOOL v1; // edx
  int v2; // r8d
  int v4; // eax

  v0 = *(_QWORD *)(gptiCurrent + 480LL);
  v1 = *(_QWORD *)(v0 + 8) >= 0x64uLL;
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v2 & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v2 | 0x400;
  }
  if ( v1 )
  {
    v4 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v4 & 0x400) == 0 )
    {
      *(_DWORD *)(gptiCurrent + 488LL) = v4 | 0x400;
      UpdateProcessPriorityForSpinning();
    }
  }
  return 1LL;
}

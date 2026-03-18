/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x1C0048C40
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C005FDB4 (UpdateProcessPriorityForSpinning.c)
 */

__int64 HandleProcessSpinning(void)
{
  __int64 v0; // rax
  BOOL v1; // edx
  int v2; // r8d
  int v4; // eax

  v0 = *(_QWORD *)(gptiCurrent + 472LL);
  v1 = *(_QWORD *)(v0 + 8) >= 0x64uLL;
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v2 & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) = v2 | 0x400;
  }
  if ( v1 )
  {
    v4 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v4 & 0x400) == 0 )
    {
      *(_DWORD *)(gptiCurrent + 480LL) = v4 | 0x400;
      UpdateProcessPriorityForSpinning();
    }
  }
  return 1LL;
}

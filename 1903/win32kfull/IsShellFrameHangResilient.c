/*
 * XREFs of IsShellFrameHangResilient @ 0x1C01207DC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( (*(_DWORD *)(a1 + 1224) & 0x40000) == 0 )
    return 0;
  v5 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 400LL) <= 1u
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 456) + 48LL)
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9) + 456) + 56LL)
    || IsAdaptiveQueueDetachExempted(a1) )
  {
    return 0;
  }
  return v5;
}

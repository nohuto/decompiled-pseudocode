/*
 * XREFs of IsShellFrameHangResilient @ 0x1C00FB04C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( (*(_DWORD *)(a1 + 1224) & 0x40000) == 0 )
    return 0;
  v4 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 400LL) <= 1u
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 456) + 48LL)
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7) + 456) + 56LL)
    || IsAdaptiveQueueDetachExempted(a1) )
  {
    return 0;
  }
  return v4;
}

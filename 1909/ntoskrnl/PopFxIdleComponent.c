/*
 * XREFs of PopFxIdleComponent @ 0x1400E16B0
 * Callers:
 *     PopFxResidentTimeoutRoutine @ 0x1400DFFA0 (PopFxResidentTimeoutRoutine.c)
 *     PopFxCompleteComponentActivation @ 0x1400E15C0 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400E1660 (PoFxIdleComponent.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     PopFxArmResidentTimer @ 0x1400DFEFC (PopFxArmResidentTimer.c)
 *     PopFxIdleWorker @ 0x1400E1274 (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400E181C (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxQueueWorkOrder @ 0x1400E3AA8 (PopFxQueueWorkOrder.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v3; // esi
  LARGE_INTEGER v6; // r11
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  __int64 v9; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 820) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v6.QuadPart = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 824) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
      v7 + 144,
      (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
      &v12);
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
  if ( (_DWORD)result == 0x80000000 )
  {
    if ( !v6.QuadPart )
      v6 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v9 = *(unsigned int *)(v7 + 92);
    if ( (v9 & 2) == 0 && !PopFxLowPowerEpoch )
    {
      v9 = (unsigned int)PopFxActiveIdleThreshold;
      if ( v6.QuadPart - v12 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
      {
        v9 = 2147483649LL;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)(v7 + 88),
                                 -2147483647,
                                 0x80000000);
        if ( (_DWORD)result != 0x80000000 )
          return result;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 96)) == 1 )
        {
          result = (unsigned int)_InterlockedIncrement(&PopFxResidentComponentCount);
          if ( (_DWORD)result == 1 )
            return PopFxArmResidentTimer(0);
          return result;
        }
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
      }
    }
    if ( PopFxActiveIdleLevel == 1 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
        v7 + 144,
        (LARGE_INTEGER)v6.QuadPart,
        0LL);
    if ( (a3 & 2) != 0 )
      return PopFxQueueWorkOrder(v9, v7 + 24, BugCheckParameter2);
    else
      return PopFxIdleWorker((__int64 *)BugCheckParameter2, v3);
  }
  return result;
}

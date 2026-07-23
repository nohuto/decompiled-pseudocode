/*
 * XREFs of KiResumeUmsThread @ 0x14084691C
 * Callers:
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 * Callees:
 *     KeClearUmsThreadKernelLock @ 0x140846518 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x140846808 (KeUpdateUmsThreadState.c)
 */

__int64 __fastcall KiResumeUmsThread(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = **(_QWORD **)(a1 + 496);
  if ( (*a2 & 4) != 0 )
    result = KeClearUmsThreadKernelLock(**(_QWORD **)(a1 + 496));
  else
    result = 0LL;
  if ( (int)result >= 0 )
    return KeUpdateUmsThreadState(v3, 3, (*a2 & 8) != 0);
  return result;
}

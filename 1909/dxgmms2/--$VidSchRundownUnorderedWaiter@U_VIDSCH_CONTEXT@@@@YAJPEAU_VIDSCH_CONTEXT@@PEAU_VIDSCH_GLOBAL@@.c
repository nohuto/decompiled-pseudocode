/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011300
 * Callers:
 *     VidSchFlushContext @ 0x1C007C780 (VidSchFlushContext.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008230 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C00306C4 (VidSchiRundownUnorderedWaiterContext.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // ebx
  _QWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  char v10; // [rsp+30h] [rbp-30h]
  _QWORD v11[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v12; // [rsp+58h] [rbp-8h]

  v5 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 788) )
  {
    if ( a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 788) )
      {
        v12 = 0;
        v11[0] = a2 + 1648;
        AcquireSpinLock::Acquire((Acquire *)v11);
        v10 = 0;
        v9[1] = v9;
        v9[0] = v9;
        VidSchiRundownUnorderedWaiterContext(v9, a1);
        if ( !v10 )
          HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v9);
        AcquireSpinLock::Release((AcquireSpinLock *)v11);
      }
    }
  }
  return v5;
}

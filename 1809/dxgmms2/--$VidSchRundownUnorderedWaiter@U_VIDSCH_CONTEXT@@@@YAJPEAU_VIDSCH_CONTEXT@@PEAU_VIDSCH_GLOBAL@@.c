/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011874
 * Callers:
 *     VidSchFlushContext @ 0x1C007AEE0 (VidSchFlushContext.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C001A390 (VidSchiRundownUnorderedWaiterContext.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // ebx
  __int64 v9; // r8
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  char v11; // [rsp+30h] [rbp-30h]
  _BYTE v12[40]; // [rsp+38h] [rbp-28h] BYREF

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
        AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v12, (unsigned __int64 *)(a2 + 1648), v9, 0);
        v11 = 0;
        v10[1] = v10;
        v10[0] = v10;
        VidSchiRundownUnorderedWaiterContext(v10, a1);
        if ( !v11 )
          HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v10);
        AcquireSpinLock::Release((AcquireSpinLock *)v12);
      }
    }
  }
  return v5;
}

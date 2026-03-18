/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0010FD4
 * Callers:
 *     VidSchFlushDevice @ 0x1C007B810 (VidSchFlushDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C00306C4 (VidSchiRundownUnorderedWaiterContext.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // ebx
  _QWORD **v9; // rsi
  _QWORD *i; // rdi
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-30h]
  _QWORD v13[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v14; // [rsp+58h] [rbp-8h]

  v5 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 1288) )
  {
    if ( a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 1288) )
      {
        v14 = 0;
        v13[0] = a2 + 1648;
        AcquireSpinLock::Acquire((AcquireSpinLock *)v13);
        v12 = 0;
        v9 = (_QWORD **)(a1 + 72);
        v11[1] = v11;
        v11[0] = v11;
        for ( i = *v9; i != v9; i = (_QWORD *)*i )
          VidSchiRundownUnorderedWaiterContext(v11, i - 3);
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v11);
        AcquireSpinLock::Release((AcquireSpinLock *)v13);
      }
    }
  }
  return v5;
}

/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00114C4
 * Callers:
 *     VidSchFlushDevice @ 0x1C007AD00 (VidSchFlushDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C001A390 (VidSchiRundownUnorderedWaiterContext.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        union _LARGE_INTEGER Interval)
{
  unsigned int v5; // ebx
  bool v9; // r8
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  char v13; // [rsp+30h] [rbp-38h]
  _BYTE v14[48]; // [rsp+38h] [rbp-30h] BYREF

  v5 = 0;
  if ( a3 != 5 && *(_DWORD *)(a1 + 1284) )
  {
    if ( a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      if ( *(_DWORD *)(a1 + 1284) )
      {
        AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v14, (unsigned __int64 *)(a2 + 1648), v9, 0);
        v13 = 0;
        v12[1] = v12;
        v10 = (_QWORD *)(a1 + 72);
        v11 = *(_QWORD **)(a1 + 72);
        v12[0] = v12;
        while ( v11 != v10 )
        {
          VidSchiRundownUnorderedWaiterContext(v12, v11 - 3);
          v11 = (_QWORD *)*v11;
        }
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v12);
        AcquireSpinLock::Release((AcquireSpinLock *)v14);
      }
    }
  }
  return v5;
}

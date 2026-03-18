/*
 * XREFs of ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0030E3C
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C001A420 (VidSchiRundownUnorderedWaiterDevice.c)
 */

__int64 __fastcall VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+30h] [rbp-38h]
  _BYTE v11[48]; // [rsp+38h] [rbp-30h] BYREF

  v3 = 0;
  if ( (_DWORD)a3 != 5 && *(_DWORD *)(a1 + 736) )
  {
    if ( (int)a3 < 6 )
    {
      return (unsigned int)-2147483631;
    }
    else if ( *(_DWORD *)(a1 + 736) )
    {
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)(a2 + 1648), a3, 0);
      v10 = 0;
      v6 = (_QWORD *)(a1 + 280);
      v9[1] = v9;
      v7 = *(_QWORD **)(a1 + 280);
      v9[0] = v9;
      if ( v7 == v6 )
        goto LABEL_8;
      do
      {
        VidSchiRundownUnorderedWaiterDevice((__int64)v9, (__int64)(v7 - 13), v5);
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != v6 );
      if ( !v10 )
LABEL_8:
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v9);
      AcquireSpinLock::Release((AcquireSpinLock *)v11);
    }
  }
  return v3;
}

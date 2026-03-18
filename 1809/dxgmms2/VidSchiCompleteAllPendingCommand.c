/*
 * XREFs of VidSchiCompleteAllPendingCommand @ 0x1C003957C
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0039C84 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035378 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0039794 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiCompletePendingFlip @ 0x1C0039A40 (VidSchiCompletePendingFlip.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00C78D0 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompleteAllPendingCommand(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int i; // r15d
  __int64 *v6; // r14
  __int64 v7; // r14
  _QWORD **v8; // r14
  _QWORD *j; // rbx
  LARGE_INTEGER *v10; // rbx
  bool IsTDRPending; // al
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-59h] BYREF
  char v15; // [rsp+38h] [rbp-49h]
  _QWORD v16[2]; // [rsp+40h] [rbp-41h] BYREF
  char v17; // [rsp+50h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v19[40]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v20[48]; // [rsp+98h] [rbp+17h] BYREF

  v3 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 68); ++i )
  {
    v6 = *(__int64 **)(a1 + 616);
    if ( i < *(_DWORD *)(a1 + 688) )
      v6 += i;
    v7 = *v6;
    if ( (*(_DWORD *)(v7 + 12) & 2) != 0 )
    {
      AcquireSpinLock::AcquireSpinLock(
        (AcquireSpinLock *)v19,
        (unsigned __int64 *)(*(_QWORD *)(v7 + 24) + 1648LL),
        a3,
        0);
      v15 = 0;
      v8 = (_QWORD **)(v7 + 1688);
      v14[1] = v14;
      v14[0] = v14;
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
        VidSchiRundownHardwareContext((struct HwQueueStagingList *)v14, (struct VIDSCH_HW_CONTEXT *)(j - 26));
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v14);
      AcquireSpinLock::Release((AcquireSpinLock *)v19);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
      v10 = (LARGE_INTEGER *)(*(_QWORD *)(v7 + 184) + 112LL * *(unsigned int *)(v7 + 196));
      memset(v10, 0, 0x70uLL);
      *(_DWORD *)(v7 + 196) = (*(_DWORD *)(v7 + 196) + 1) & (*(_DWORD *)(v7 + 192) - 1);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v10->LowPart = 7;
      v10[1] = KeQueryPerformanceCounter(0LL);
      v10[2] = *(LARGE_INTEGER *)(v7 + 152);
      LOBYTE(v10[3].LowPart) = *(_BYTE *)(a1 + 2428) & 1;
      IsTDRPending = VidSchIsTDRPending(a1);
      BYTE2(v10[3].u.LowPart) = 0;
      BYTE1(v10[3].LowPart) = IsTDRPending;
      VidSchiCompletePendingCommandInNodeHwQueue(v7, *(_QWORD *)(v7 + 152), 0LL);
      v12 = *(_QWORD *)(v7 + 168);
      *(_QWORD *)(v7 + 64) = v12;
      *(_QWORD *)(v7 + 72) = v12;
      if ( *(_DWORD *)(v7 + 2868) )
        VidSchiWaitForCompletePreemption(v7);
    }
  }
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v20, (unsigned __int64 *)(a1 + 1648), a3, 0);
  v17 = 0;
  v16[1] = v16;
  v16[0] = v16;
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
      VidSchiCompletePendingFlip(v16, a1, v3++, 9LL);
    while ( v3 < *(_DWORD *)(a1 + 40) );
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v16);
  AcquireSpinLock::Release((AcquireSpinLock *)v20);
  return 0LL;
}

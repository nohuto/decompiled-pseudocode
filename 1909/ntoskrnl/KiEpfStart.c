/*
 * XREFs of KiEpfStart @ 0x1402B3184
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x1402B2EDC (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfHandleNotification @ 0x1402B3160 (KiEpfHandleNotification.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeSetKernelStackSwapEnable @ 0x14009A1E0 (KeSetKernelStackSwapEnable.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall KiEpfStart(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *SchedulerAssist; // rax
  char v6; // di
  signed __int32 v7; // edx
  _BYTE *v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  BOOLEAN v11; // bl
  _QWORD v12[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(v12, 0, sizeof(v12));
  _InterlockedIncrement(&KiEpfCounters);
  CurrentThread = KeGetCurrentThread();
  HIDWORD(v12[3]) = 0;
  v12[5] = &v12[4];
  v12[4] = &v12[4];
  v12[2] = a1;
  LOWORD(v12[3]) = 263;
  BYTE2(v12[3]) = 6;
  v3 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 16));
  if ( *(int *)(v3 + 24) > 0 )
    goto LABEL_5;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !KiEpfCompletionQueue )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 1;
    goto LABEL_5;
  }
  if ( CurrentThread == CurrentPrcb->IdleThread )
  {
    v8 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v8 )
      v8[16] = 1;
    goto LABEL_5;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
LABEL_5:
    --*(_DWORD *)(v3 + 24);
    v6 = 0;
    goto LABEL_6;
  }
  v9 = *(_QWORD **)(v3 + 8);
  v6 = 1;
  if ( *v9 != v3 )
    __fastfail(3u);
  v12[1] = *(_QWORD *)(v3 + 8);
  v12[0] = v3;
  *v9 = v12;
  *(_QWORD *)(v3 + 8) = v12;
LABEL_6:
  KxReleaseSpinLock((PKSPIN_LOCK)(v3 + 16));
  if ( v6 )
  {
    _InterlockedIncrement(&dword_140446AD0);
    v7 = _InterlockedIncrement(&dword_140446AD4);
    do
      v10 = dword_140446AD8;
    while ( dword_140446AD8 < v7 && v10 != _InterlockedCompareExchange(&dword_140446AD8, v7, dword_140446AD8) );
    v11 = KeSetKernelStackSwapEnable(0);
    KeWaitForGate((__int64)&v12[3], 39);
    KeSetKernelStackSwapEnable(v11);
    _InterlockedDecrement(&dword_140446AD4);
  }
}

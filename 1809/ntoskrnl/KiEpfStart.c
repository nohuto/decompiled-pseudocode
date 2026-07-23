/*
 * XREFs of KiEpfStart @ 0x14029C0E4
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x14029BE38 (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfHandleNotification @ 0x14029C0C0 (KiEpfHandleNotification.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KeSetKernelStackSwapEnable @ 0x140101D60 (KeSetKernelStackSwapEnable.c)
 */

void __fastcall KiEpfStart(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *SchedulerAssist; // rax
  char v5; // di
  signed __int32 v6; // edx
  _BYTE *v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  BOOLEAN v10; // bl
  _QWORD v11[3]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+3Ah] [rbp-16h]
  int v14; // [rsp+3Ch] [rbp-14h]
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF

  _InterlockedIncrement(&KiEpfCounters);
  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v15[1] = v15;
  v15[0] = v15;
  v11[2] = a1;
  v12 = 263;
  v13 = 6;
  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( *(int *)(v2 + 24) > 0 )
  {
LABEL_5:
    --*(_DWORD *)(v2 + 24);
    v5 = 0;
    goto LABEL_6;
  }
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
    v7 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v7 )
      v7[16] = 1;
    goto LABEL_5;
  }
  v8 = *(_QWORD **)(v2 + 8);
  v5 = 1;
  if ( *v8 != v2 )
    __fastfail(3u);
  v11[1] = *(_QWORD *)(v2 + 8);
  v11[0] = v2;
  *v8 = v11;
  *(_QWORD *)(v2 + 8) = v11;
LABEL_6:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_14041C230);
    v6 = _InterlockedIncrement(&dword_14041C234);
    do
      v9 = dword_14041C238;
    while ( dword_14041C238 < v6 && v9 != _InterlockedCompareExchange(&dword_14041C238, v6, dword_14041C238) );
    v10 = KeSetKernelStackSwapEnable(0);
    KeWaitForGate((__int64)&v12, 0x27u);
    KeSetKernelStackSwapEnable(v10);
    _InterlockedDecrement(&dword_14041C234);
  }
}

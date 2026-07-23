/*
 * XREFs of ExpWorkerThread @ 0x1400B5BB0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     ExpNewThreadNecessary @ 0x1400B6A40 (ExpNewThreadNecessary.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     KeSetKernelStackSwapEnable @ 0x140101D60 (KeSetKernelStackSwapEnable.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x140310950 (EtwTraceThreadWorkItem.c)
 */

BOOLEAN __fastcall ExpWorkerThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v2; // r13
  __int64 v3; // rbp
  __int64 v5; // r15
  char v6; // r12
  __int64 v7; // rax
  _QWORD *BugCheckParameter4; // rsi
  void (__fastcall *v9)(const void *); // rbp
  const void *v10; // r14
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v12; // ecx
  unsigned int Queue; // eax
  signed __int32 v14; // edx
  int v15; // ecx
  signed __int32 v16; // r8d
  unsigned int v17; // esi
  BOOLEAN result; // al
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v21[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+90h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v2 = &v23;
  v3 = *(_QWORD *)(a1 + 688);
  v5 = *(_QWORD *)(a1 + 696);
  v6 = 1;
  v23 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 1u;
  v22 = v3;
  _InterlockedOr(v21, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
LABEL_5:
    while ( 1 )
    {
      v7 = KeRemovePriQueue(a1, 0LL, 0LL, v2);
      BugCheckParameter4 = (_QWORD *)v7;
      if ( !v6 )
        break;
      v6 = 0;
      *(_DWORD *)(a1 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 712), 0xFFFFBFFF);
      v2 = 0LL;
      if ( v7 != 258 )
      {
LABEL_9:
        if ( v7 == 128 )
          goto LABEL_35;
        if ( (unsigned __int8)ExpNewThreadNecessary(a1, *(unsigned int *)(a1 + 720)) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL * *(unsigned __int16 *)(v5 + 146)) + 16LL), 0, 0);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 704));
        v9 = (void (__fastcall *)(const void *))BugCheckParameter4[2];
        v10 = (const void *)BugCheckParameter4[3];
        if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
        {
          EtwTraceThreadWorkItem(BugCheckParameter4[2], 1344LL);
          v9(v10);
          EtwTraceThreadWorkItem(v9, 1345LL);
        }
        else
        {
          ((void (__fastcall *)(_QWORD))BugCheckParameter4[2])(BugCheckParameter4[3]);
        }
        if ( (KeGetPcr()->Prcb.BpbRetpolineState & 1) != 0 )
        {
          _disable();
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = v25 >> 9;
          CurrentPrcb->BpbRetpolineState &= ~1u;
          if ( (v12 & 1) != 0 )
            _enable();
        }
        if ( CurrentThread->MutantListHead.Flink != &CurrentThread->MutantListHead )
          KeBugCheckEx(0x39u, (ULONG_PTR)v9, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( CurrentThread->WaitBlock[3].SpareLong )
          KeBugCheckEx(1u, (ULONG_PTR)v9, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 1uLL);
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, (ULONG_PTR)v9, KeGetCurrentIrql(), (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          KeBugCheckEx(0xDFu, (ULONG_PTR)v9, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)CurrentThread->Process,
            (ULONG_PTR)CurrentThread->ApcState.Process,
            CurrentThread->ApcStateIndex,
            (ULONG_PTR)CurrentThread);
        if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
          KeBugCheckEx(0x19Au, (ULONG_PTR)v9, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4, 0LL);
        if ( (unsigned int)PsGetIoPriorityThread(CurrentThread) != 2 )
        {
          IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
          KeBugCheckEx(0x128u, (ULONG_PTR)v9, IoPriorityThread, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        }
        if ( (unsigned int)PsGetPagePriorityThread((__int64)CurrentThread) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
          KeBugCheckEx(0x129u, (ULONG_PTR)v9, PagePriorityThread, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        }
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          KeBugCheckEx(0x15Bu, (ULONG_PTR)v9, (Queue >> 9) & 7, (ULONG_PTR)v10, (ULONG_PTR)BugCheckParameter4);
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x800) != 0 )
          KeBugCheckEx(
            0x1D6u,
            (ULONG_PTR)v9,
            (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 11) & 1,
            (ULONG_PTR)v10,
            (ULONG_PTR)BugCheckParameter4);
        if ( (CurrentThread->MiscFlags & 8) != 0 )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with system affinity set, worker routine %p, parameter %p, item %p\n",
            v9,
            v10,
            BugCheckParameter4);
          PreviousAffinity.Mask = 0LL;
          *(_QWORD *)&PreviousAffinity.Group = 0LL;
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
        if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v5 + 144)
          || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v5 + 136) )
        {
          KeQueryNodeActiveAffinity(*(_WORD *)(v5 + 146), &PreviousAffinity, 0LL);
          KeSetAffinityThread(CurrentThread, &PreviousAffinity);
        }
        if ( CurrentThread[1].WaitBlock[0].SparePtr )
        {
          DbgPrintEx(
            0,
            0,
            "EXWORKER: worker exit with activity ID set, worker routine %p, parameter %p, item %p\n",
            v9,
            v10,
            BugCheckParameter4);
          KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
        }
        v3 = v22;
      }
    }
    if ( v7 != 258 )
      goto LABEL_9;
LABEL_35:
    ;
  }
  while ( (*(_DWORD *)(a1 + 712) & 0x8000) == 0
       && (*(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber
        || *(_DWORD *)(a1 + 4)) );
  _m_prefetchw((const void *)(a1 + 712));
  v14 = *(_DWORD *)(a1 + 712);
  do
  {
    v15 = (v14 & 0x3FFF) - 1;
    v16 = v14;
    if ( v15 < (2 * *(_DWORD *)(a1 + 716)) >> 1 && (v14 & 0x8000) == 0 )
      goto LABEL_5;
    v17 = v15 | v14 & 0xFFFFC000;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v17, v14);
  }
  while ( v14 != v16 );
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  result = KeSetKernelStackSwapEnable(1u);
  if ( v17 == 0x8000 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 728), 0, 0);
  return result;
}

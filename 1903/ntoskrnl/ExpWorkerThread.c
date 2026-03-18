/*
 * XREFs of ExpWorkerThread @ 0x140059C30
 * Callers:
 *     <none>
 * Callees:
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     PsGetPagePriorityThread @ 0x14005A4E0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     ExpNewThreadNecessary @ 0x14005A590 (ExpNewThreadNecessary.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x1400BA370 (KeSetKernelStackSwapEnable.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1401089A0 (KeQueryNodeActiveAffinity.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x14032E660 (EtwTraceThreadWorkItem.c)
 */

BOOLEAN __fastcall ExpWorkerThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v2; // r13
  __int64 v3; // r15
  char v4; // r12
  int v6; // eax
  __int64 v7; // rax
  _QWORD *BugCheckParameter4; // rdi
  void (__fastcall *v9)(const void *); // rbp
  const void *v10; // r14
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v12; // ecx
  unsigned int Queue; // eax
  signed __int32 v14; // eax
  int v15; // edx
  signed __int32 v16; // r8d
  unsigned int v17; // edx
  bool v18; // di
  BOOLEAN result; // al
  unsigned int PagePriorityThread; // eax
  int IoPriorityThread; // eax
  signed __int32 v22[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  __int64 v24; // [rsp+38h] [rbp-60h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+90h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v2 = &v23;
  v3 = *(_QWORD *)(a1 + 696);
  PreviousAffinity.Mask = 0LL;
  v4 = 1;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 688);
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v6 & 1) != 0 )
    __fastfail(0x38u);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6 | 1;
  _InterlockedOr(v22, 0);
  if ( !ExpWorkersCanSwap )
    KeSetKernelStackSwapEnable(0);
  do
  {
LABEL_4:
    while ( 1 )
    {
      v7 = KeRemovePriQueue(a1, 0LL, 0LL, v2);
      BugCheckParameter4 = (_QWORD *)v7;
      if ( !v4 )
        break;
      v4 = 0;
      *(_DWORD *)(a1 + 716) &= ~0x80000000;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 712), 0xFFFFBFFF);
      v2 = 0LL;
      if ( v7 != 258 )
      {
LABEL_6:
        if ( v7 == 128 )
          goto LABEL_32;
        if ( (unsigned __int8)ExpNewThreadNecessary(a1, *(unsigned int *)(a1 + 720)) )
          KeSetEvent(
            (PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 8LL * *(unsigned __int16 *)(v3 + 146)) + 16LL),
            0,
            0);
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
          v12 = v26 >> 9;
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
        if ( (unsigned int)PsGetPagePriorityThread(CurrentThread) != 5 )
        {
          PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
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
        if ( CurrentThread->UserAffinity.Group != *(_WORD *)(v3 + 144)
          || CurrentThread->UserAffinity.Mask != *(_QWORD *)(v3 + 136) )
        {
          KeQueryNodeActiveAffinity(*(_WORD *)(v3 + 146), &PreviousAffinity, 0LL);
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
      }
    }
    if ( v7 != 258 )
      goto LABEL_6;
LABEL_32:
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
      goto LABEL_4;
    v17 = v14 & 0xFFFFC000 | v15;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v17, v14);
  }
  while ( v14 != v16 );
  v18 = v17 == 0x8000;
  if ( *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    KeBugCheckEx(0x1D2u, 0LL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~1u;
  result = KeSetKernelStackSwapEnable(1u);
  if ( v18 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 728), 0, 0);
  return result;
}

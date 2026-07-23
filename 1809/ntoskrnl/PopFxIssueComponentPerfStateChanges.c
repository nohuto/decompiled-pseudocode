/*
 * XREFs of PopFxIssueComponentPerfStateChanges @ 0x1402D8818
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1402D7370 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     PopFxQueueWorkOrder @ 0x140100530 (PopFxQueueWorkOrder.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x1402D7BA8 (PopFxCompleteComponentPerfState.c)
 *     PopPluginRequestComponentPerfState @ 0x1402DACC4 (PopPluginRequestComponentPerfState.c)
 *     PopDiagTraceFxPerfRequest @ 0x1402E1338 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402E1548 (PopDiagTraceFxPerfRequestProgress.c)
 */

void __fastcall PopFxIssueComponentPerfStateChanges(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v10; // rbx
  int v11; // r15d
  void *v12; // r12
  char v13; // r14
  int v14; // edx
  char v15; // al
  char v16; // cl
  signed __int32 v17[8]; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+30h] [rbp-38h]
  char v19; // [rsp+78h] [rbp+10h] BYREF

  KeGetCurrentIrql();
  v10 = *(_QWORD *)(a2 + 424);
  if ( !v10 )
    PopFxBugCheck(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
  if ( a4 > *(_DWORD *)(v10 + 144) )
    PopFxBugCheck(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v10 + 40), 0) & 7) != 0 )
    PopFxBugCheck(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v10 + 80));
  v12 = Src;
  if ( *(_BYTE *)(v10 + 74) )
  {
    memmove(*(void **)(v10 + 48), Src, 16LL * a4);
    *(_DWORD *)(v10 + 56) = a4;
    *(_BYTE *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v10 + 80) = a6;
  KeResetEvent((PRKEVENT)(v10 + 8));
  PopDiagTraceFxPerfRequest(v10, a4, v12);
  v13 = 1;
  v18 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x88000000);
  }
  else if ( (a3 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x10000000u);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 4u);
  _InterlockedOr(v17, 0);
  if ( *(_BYTE *)(v10 + 73) )
  {
    v14 = *(_DWORD *)(a2 + 16);
    v19 = 0;
    v15 = PopPluginRequestComponentPerfState(BugCheckParameter2, v14, a4, (_DWORD)v12, (__int64)&v19);
    v16 = v19;
    v13 = v15;
  }
  else
  {
    v16 = 1;
    v19 = 1;
  }
  if ( v13 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), v16 != 0 ? 1610612736 : 0x20000000);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 40));
  }
  PopDiagTraceFxPerfRequestProgress(
    v10,
    ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) - 1) & 7);
  if ( v13 )
  {
    if ( (a3 & 2) != 0 )
    {
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
      PopFxQueueWorkOrder(
        &PopFxSystemWorkQueue,
        (PLIST_ENTRY)(v10 + 88),
        (struct _IO_REMOVE_LOCK *)BugCheckParameter2,
        0);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x80000000);
      PopFxCompleteComponentPerfState(BugCheckParameter2, *(_DWORD *)(a2 + 16), v10, v19);
    }
  }
  else if ( v18 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 8), Executive, 0, 0, 0LL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 20, 0LL);
  }
}

/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x1400D63AC
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14007D950 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x14008DEF0 (CcScheduleReadAheadEx.c)
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 *     CcAsyncCopyRead @ 0x1400DFF40 (CcAsyncCopyRead.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140160D5C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcAllocateWorkQueueEntry(__int64 a1, PSLIST_ENTRY *a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v6; // r8
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v6 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v6 )
    goto LABEL_2;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v6 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v6
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v6 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_2:
    LODWORD(v6->Next) = CurrentPrcb->Number;
  }
  *a2 = v6;
  if ( !v6 )
    return 3221225626LL;
  v6[8].Next = (_SLIST_ENTRY *)a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
    __fastfail(0xEu);
  return 0LL;
}

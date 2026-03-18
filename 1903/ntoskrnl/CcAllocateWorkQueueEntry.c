/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x14007E104
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehind @ 0x14007D79C (CcWriteBehind.c)
 *     CcLazyWriteScan @ 0x14007ED94 (CcLazyWriteScan.c)
 *     CcAsyncCopyRead @ 0x1400A9670 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1400A9CA0 (CcScheduleReadAheadEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14017112C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcQueueLazyWriteScanThread @ 0x14018D280 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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

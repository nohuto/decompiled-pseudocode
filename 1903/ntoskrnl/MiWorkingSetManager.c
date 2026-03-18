/*
 * XREFs of MiWorkingSetManager @ 0x1400F1CC8
 * Callers:
 *     MmWorkingSetManager @ 0x1402C9A04 (MmWorkingSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x1402C9C90 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiAdjustCachedStacks @ 0x140004E60 (MiAdjustCachedStacks.c)
 *     MiEmptyDecayClusterTimers @ 0x14000E780 (MiEmptyDecayClusterTimers.c)
 *     MiProcessWorkingSets @ 0x140047BB0 (MiProcessWorkingSets.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExQueueWorkItemToPartition @ 0x140080198 (ExQueueWorkItemToPartition.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F1EE8 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F1F90 (MiDeleteStaleCacheMaps.c)
 *     MiSignalLargePageRebuild @ 0x1400F2000 (MiSignalLargePageRebuild.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F2364 (MiNumberWsSwapPagefiles.c)
 *     MiScanPagefiles @ 0x1400F23A0 (MiScanPagefiles.c)
 *     MiAdjustModifiedPageLoad @ 0x1400F2538 (MiAdjustModifiedPageLoad.c)
 *     MiAdjustPteBins @ 0x1400F26D4 (MiAdjustPteBins.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x1402CCE10 (MiQueueExtentPfnDeletion.c)
 *     MiEnumerateSlabAllocators @ 0x1402DB8DC (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // r14d
  char v6; // si
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 UnbiasedInterruptTime; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  char v14; // bp
  signed __int32 v15[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v16[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v16, 0, sizeof(v16));
  v4 = *(_QWORD *)(a1 + 7800);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 96) )
    *(_QWORD *)(v4 + 96) = KeGetCurrentThread();
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiDeleteStaleCacheMaps();
    MiReclaimUnusedUltraMdlMaps();
  }
  MiEmptyDecayClusterTimers(a1);
  if ( (*(_DWORD *)(a1 + 4) & 0x18) != 0 )
    MiEnumerateSlabAllocators(a1, MiFreeSlabEntries, 0LL);
  if ( ++*(_DWORD *)(v4 + 32) == *(_DWORD *)(v4 + 36) )
  {
    v11 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v12 = ((_BYTE)v11 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v12;
    v13 = ((_BYTE)v12 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v13 + 3392) )
      KeSetEvent((PRKEVENT)(a1 + 24 * (v13 + 181)), 0, 0);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_140466910, 0, 0);
  v16[4] = 1;
  MiProcessWorkingSets(a1, (__int64)v16);
  v6 = v16[4];
  if ( v16[4] != 1 )
  {
    v14 = 1;
    do
    {
      if ( v14 == v6 )
      {
        ++*(_DWORD *)(v4 + 2588);
        v6 = 1;
        v16[4] = 1;
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2344), *(unsigned int *)(v4 + 128));
        ++*(_DWORD *)(v4 + 2584);
        MiScanPagefiles(a1);
        v5 = 1;
      }
      v14 = v6;
      MiProcessWorkingSets(a1, (__int64)v16);
      v6 = v16[4];
    }
    while ( v16[4] != 1 );
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
    if ( byte_140464732 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2344), *(unsigned int *)(v4 + 128));
    MiScanPagefiles(a1);
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 1064) )
    {
      _InterlockedOr(v15, 0);
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a1 + 1072)) >= 0x861C46800LL )
      {
        if ( byte_140466201 )
        {
          *(_QWORD *)(a1 + 1072) = UnbiasedInterruptTime - 33000000000LL;
        }
        else if ( PsReferencePartitionSafe(*(_QWORD *)(a1 + 168)) )
        {
          *(_QWORD *)(a1 + 1040) = 0LL;
          *(_QWORD *)(a1 + 1056) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 1064) = a1;
          ExQueueWorkItemToPartition((_QWORD *)(a1 + 1040), 3, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
        }
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 8448);
  v8 = *(_QWORD *)(a1 + 8560);
  if ( v7 > v8 && v7 - v8 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 784), 0, 0);
  return MiSignalLargePageRebuild(a1);
}

/*
 * XREFs of MiRemoveSharedCommitNode @ 0x1405F1650
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiSectionClose @ 0x1405F1B80 (MiSectionClose.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x14060627C (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiIncludeSharedCommit @ 0x140076770 (MiIncludeSharedCommit.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiRemoveSharedCommitNode(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r13
  unsigned __int64 *v10; // rax
  int v11; // r12d
  int v12; // r15d
  unsigned __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 **v18; // rax
  unsigned __int64 v19; // [rsp+68h] [rbp+10h]

  if ( (a2 & 1) != 0 )
  {
    v19 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
  }
  else
  {
    v6 = a2;
    if ( !MiIncludeSharedCommit(a1) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 || (*(_DWORD *)(v7 + 1740) & 0x10) != 0 )
      return;
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)a1;
  v10 = (unsigned __int64 *)(*(_QWORD *)a1 + 72LL);
  v11 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 1920, 0LL);
    v10 = (unsigned __int64 *)(v9 + 72);
  }
  v12 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
    v10 = (unsigned __int64 *)(v9 + 72);
  }
  v13 = (unsigned __int64 *)*v10;
  if ( *v10 )
  {
    do
    {
      v14 = v13[3];
      if ( a2 > v14 )
      {
        v13 = (unsigned __int64 *)v13[1];
      }
      else
      {
        if ( a2 >= v14 )
          break;
        v13 = (unsigned __int64 *)*v13;
      }
    }
    while ( v13 );
    v10 = (unsigned __int64 *)(v9 + 72);
  }
  if ( v13[4]-- == 1 )
  {
    RtlAvlRemoveNode(v10, v13);
    v16 = -MiGetCommittedPages((_QWORD *)a1);
    if ( v6 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1912), v16);
      v17 = v13[5];
      if ( *(unsigned __int64 **)(v17 + 8) != v13 + 5 || (v18 = (unsigned __int64 **)v13[6], *v18 != v13 + 5) )
        __fastfail(3u);
      *v18 = (unsigned __int64 *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v6 + 1740) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v6 + 944) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 1320), v16);
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v12 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 40));
    KeAbPostRelease(v9 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( !v11 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1920), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1920));
    KeAbPostRelease(v6 + 1920);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}

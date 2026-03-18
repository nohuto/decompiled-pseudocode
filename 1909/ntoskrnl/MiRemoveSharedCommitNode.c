/*
 * XREFs of MiRemoveSharedCommitNode @ 0x14060A200
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiSectionClose @ 0x14060A1A0 (MiSectionClose.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MmLinkJobProcess @ 0x140688B5C (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14089ABC0 (MiDeletePartialCloneVads.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
 *     MiIncludeSharedCommit @ 0x140071A00 (MiIncludeSharedCommit.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiRemoveSharedCommitNode(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  unsigned __int64 *v11; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 **v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v17; // [rsp+78h] [rbp+10h]
  unsigned __int64 v18; // [rsp+88h] [rbp+20h]

  if ( (a2 & 1) != 0 )
  {
    v18 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
    v6 = 0LL;
  }
  else
  {
    v6 = a2;
    if ( !(unsigned int)MiIncludeSharedCommit((__int64)a1)
      || (*(_DWORD *)(v7 + 56) & 0x20) != 0
      || (*(_DWORD *)(a2 + 1788) & 0x10) != 0 )
    {
      return;
    }
    v18 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *a1;
  v16 = *a1;
  v10 = (unsigned __int64 *)(*a1 + 72LL);
  v17 = v10;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v6 + 1968, 0LL);
    v9 = v16;
    v10 = v17;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
    v10 = v17;
  }
  v11 = (unsigned __int64 *)*v10;
  if ( *v10 )
  {
    do
    {
      if ( a2 > v11[3] )
      {
        v11 = (unsigned __int64 *)v11[1];
      }
      else
      {
        if ( a2 >= v11[3] )
          break;
        v11 = (unsigned __int64 *)*v11;
      }
    }
    while ( v11 );
  }
  if ( v11[4]-- == 1 )
  {
    RtlAvlRemoveNode(v10, v11);
    v13 = -MiGetCommittedPages(a1);
    if ( v6 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1960), v13);
      v14 = v11[5];
      if ( *(unsigned __int64 **)(v14 + 8) != v11 + 5 || (v15 = (unsigned __int64 **)v11[6], *v15 != v11 + 5) )
        __fastfail(3u);
      *v15 = (unsigned __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      if ( (a3 & 4) == 0 && (*(_DWORD *)(v6 + 1788) & 8) != 0 )
        MiRemoveSharedCommitNode(a1, *(_QWORD *)(v6 + 952) | 1LL, 3LL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 1320), v13);
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 40));
    KeAbPostRelease(v16 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1968), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1968));
    KeAbPostRelease(v6 + 1968);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
}

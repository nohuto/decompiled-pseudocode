/*
 * XREFs of MiInsertSharedCommitNode @ 0x14060A470
 * Callers:
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiSectionOpen @ 0x14060A1D0 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MmLinkJobProcess @ 0x140688B5C (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
 *     MiIncludeSharedCommit @ 0x140071A00 (MiIncludeSharedCommit.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(_QWORD *a1, unsigned __int64 a2, char a3)
{
  __int64 *v6; // rcx
  int inserted; // r13d
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _QWORD **v11; // rbx
  _QWORD *v12; // rbx
  bool v13; // bp
  _QWORD *PoolWithTag; // rax
  unsigned __int64 CommittedPages; // r8
  _QWORD *v16; // r9
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  volatile signed __int64 *v19; // rcx
  _QWORD *v21; // rax
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 *v25; // [rsp+40h] [rbp-38h]

  if ( !(unsigned int)MiIncludeSharedCommit((__int64)a1) || (v6[7] & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v8 = a2;
    if ( (*(_DWORD *)(a2 + 1788) & 0x10) == 0 )
    {
      v23 = 0LL;
      NumberOfBytes = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  NumberOfBytes = 40LL;
  v8 = 0LL;
  v23 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_6:
  v9 = *v6;
  CurrentThread = KeGetCurrentThread();
  v11 = (_QWORD **)(v9 + 72);
  v25 = (unsigned __int64 *)(v9 + 72);
  v24 = v9;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v8 + 1968, 0LL);
    v9 = v24;
  }
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
  }
  v12 = *v11;
  v13 = 0;
  if ( !v12 )
    goto LABEL_11;
  while ( a2 <= v12[3] )
  {
    if ( a2 >= v12[3] )
    {
      ++v12[4];
      goto LABEL_21;
    }
    v21 = (_QWORD *)*v12;
    if ( !*v12 )
    {
      v13 = 0;
      goto LABEL_11;
    }
LABEL_32:
    v12 = v21;
  }
  v21 = (_QWORD *)v12[1];
  if ( v21 )
    goto LABEL_32;
  v13 = 1;
LABEL_11:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 1LL;
    PoolWithTag[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v8 )
    {
      v16[7] = a1;
      v17 = *(_QWORD **)(v8 + 1984);
      v18 = v16 + 5;
      if ( *v17 != v8 + 1976 )
        __fastfail(3u);
      *v18 = v8 + 1976;
      v16[6] = v17;
      *v17 = v18;
      *(_QWORD *)(v8 + 1984) = v18;
      v19 = (volatile signed __int64 *)(v8 + 1960);
    }
    else
    {
      v19 = (volatile signed __int64 *)(v23 + 1320);
    }
    _InterlockedExchangeAdd64(v19, CommittedPages);
    RtlAvlInsertNodeEx(v25, (unsigned __int64)v12, v13, v16);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 1788) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v8 + 952) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode(a1, v8, a3 | 7);
      }
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_21:
  if ( (a3 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v24 + 40));
    KeAbPostRelease(v24 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1968), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 1968));
    KeAbPostRelease(v8 + 1968);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return (unsigned int)inserted;
}

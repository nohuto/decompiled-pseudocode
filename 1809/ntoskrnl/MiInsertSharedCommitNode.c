/*
 * XREFs of MiInsertSharedCommitNode @ 0x1405F18A0
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiSectionOpen @ 0x1405F1620 (MiSectionOpen.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MmLinkJobProcess @ 0x14060627C (MmLinkJobProcess.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiIncludeSharedCommit @ 0x140076770 (MiIncludeSharedCommit.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MiInsertSharedCommitNode(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  int inserted; // r15d
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v12; // rcx
  int v13; // r13d
  int v14; // r12d
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 CommittedPages; // rax
  _QWORD *v21; // r9
  _QWORD *v22; // r8
  _QWORD *v23; // rdx
  volatile signed __int64 *v24; // rcx
  unsigned __int64 *v25; // [rsp+20h] [rbp-58h]
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  bool v30; // [rsp+98h] [rbp+20h]

  if ( !MiIncludeSharedCommit((__int64)a1) || (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
    return 0LL;
  inserted = 0;
  if ( (a2 & 1) == 0 )
  {
    v9 = v6;
    if ( (*(_DWORD *)(v6 + 1740) & 0x10) == 0 )
    {
      v27 = 0LL;
      NumberOfBytes = 64LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  NumberOfBytes = 40LL;
  v9 = 0LL;
  v27 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_6:
  v10 = *a1;
  CurrentThread = KeGetCurrentThread();
  v12 = (unsigned __int64 *)(*a1 + 72LL);
  v25 = v12;
  v28 = *a1;
  v13 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 1920, 0LL);
    v10 = v28;
    v12 = v25;
  }
  v14 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
    v12 = v25;
  }
  v15 = (_QWORD *)*v12;
  v30 = 0;
  if ( !*v12 )
    goto LABEL_29;
  while ( 1 )
  {
    v16 = v15[3];
    if ( a2 > v16 )
      break;
    if ( a2 >= v16 )
    {
      ++v15[4];
      goto LABEL_19;
    }
    v17 = (_QWORD *)*v15;
    if ( !*v15 )
    {
      v30 = 0;
      goto LABEL_29;
    }
LABEL_16:
    v15 = v17;
  }
  v17 = (_QWORD *)v15[1];
  if ( v17 )
    goto LABEL_16;
  v30 = 1;
LABEL_29:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E53694Du);
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 1LL;
    PoolWithTag[3] = a2;
    CommittedPages = MiGetCommittedPages(a1);
    if ( v9 )
    {
      v21[7] = a1;
      v22 = *(_QWORD **)(v9 + 1936);
      v23 = v21 + 5;
      if ( *v22 != v9 + 1928 )
        __fastfail(3u);
      *v23 = v9 + 1928;
      v21[6] = v22;
      *v22 = v23;
      *(_QWORD *)(v9 + 1936) = v23;
      v24 = (volatile signed __int64 *)(v9 + 1912);
    }
    else
    {
      v24 = (volatile signed __int64 *)(v27 + 1320);
    }
    _InterlockedExchangeAdd64(v24, CommittedPages);
    RtlAvlInsertNodeEx(v25, (unsigned __int64)v15, v30, v21);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 1740) & 8) != 0 )
      {
        inserted = MiInsertSharedCommitNode(a1, *(_QWORD *)(v9 + 944) | 1LL, 3LL);
        if ( inserted < 0 )
          MiRemoveSharedCommitNode((__int64)a1, v9, a3 | 7);
      }
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_19:
  if ( !v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 40));
    KeAbPostRelease(v28 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( !v13 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1920), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 1920));
    KeAbPostRelease(v9 + 1920);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return (unsigned int)inserted;
}

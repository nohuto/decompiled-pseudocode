/*
 * XREFs of MiInsertPageFileInList @ 0x14077459C
 * Callers:
 *     MmStoreRegister @ 0x140773968 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiPartitionActive @ 0x14008EF80 (MiPartitionActive.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiNumberWsSwapPagefiles @ 0x1400DA8A4 (MiNumberWsSwapPagefiles.c)
 *     MiIncreaseCommitLimits @ 0x140193294 (MiIncreaseCommitLimits.c)
 *     MiUpdateReserveClusterInfo @ 0x140193554 (MiUpdateReserveClusterInfo.c)
 *     MiUpdatePageFileList @ 0x140193584 (MiUpdatePageFileList.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // r13
  _QWORD **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // r12d
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rbp
  __int16 v11; // ax
  char v12; // bl
  KPRIORITY v13; // edx
  BOOLEAN v14; // r8
  int SystemThread; // ebp
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+98h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 206) |= 1u;
  v3 = *(_QWORD *)a1;
  v18 = v1;
  v4 = (_QWORD **)(a1 + 64);
  v5 = 2LL;
  do
  {
    if ( *v4 )
      **v4 = 2575857425LL;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = *(_QWORD *)(a1 + 256);
  CurrentThread = KeGetCurrentThread();
  v8 = 16;
  if ( (ULONG_PTR *)v6 != &MiSystemPartition )
    v8 = 1;
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(v6 + 1032);
  ExAcquirePushLockExclusiveEx(v6 + 1032, 0LL);
  if ( dword_140465F04 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1032));
    KeAbPostRelease(v6 + 1032);
    SystemThread = -1073741558;
    goto LABEL_35;
  }
  if ( !*(_QWORD *)(v6 + 152) )
  {
    MiPartitionActive(v6);
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&v17,
                     0x1FFFFF,
                     0LL,
                     *(_QWORD *)(*(_QWORD *)(v6 + 168) + 112LL),
                     0LL,
                     (__int64)MiModifiedPageWriter,
                     v6,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1032));
      KeAbPostRelease(v6 + 1032);
      goto LABEL_35;
    }
    *(_QWORD *)(v6 + 152) = v17;
  }
  v10 = *(unsigned int *)(v6 + 7896);
  if ( (unsigned int)v10 >= v8 )
    goto LABEL_32;
  *(_WORD *)(a1 + 204) ^= (*(_WORD *)(a1 + 204) ^ v10) & 0xF;
  v11 = *(_WORD *)(a1 + 204);
  if ( (v11 & 0x50) == 0 )
  {
    if ( (unsigned int)MiIncreaseCommitLimits(v6, v3, v18, 0, a1) )
    {
      if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 1028) )
        *(_DWORD *)(v6 + 1028) = 1;
      goto LABEL_17;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1032));
    KeAbPostRelease(v6 + 1032);
    SystemThread = -1073741583;
LABEL_35:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)SystemThread;
  }
  if ( (v11 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v6) )
  {
LABEL_32:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1032));
    KeAbPostRelease(v6 + 1032);
    SystemThread = -1073741673;
    goto LABEL_35;
  }
  MiUpdatePageFileList(a1, 1);
  *(_QWORD *)(v6 + 8 * v10 + 7904) = a1;
  *(_DWORD *)(v6 + 7896) = v10 + 1;
LABEL_17:
  v12 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1032));
  KeAbPostRelease(v6 + 1032);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v6, 0LL, 0);
  KeSetEvent((PRKEVENT)(v6 + 872), v13, v14);
  return 0LL;
}

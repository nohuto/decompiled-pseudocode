/*
 * XREFs of MiInsertPageFileInList @ 0x14074DB00
 * Callers:
 *     MmStoreRegister @ 0x14074CF1C (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiNumberWsSwapPagefiles @ 0x1400F0508 (MiNumberWsSwapPagefiles.c)
 *     MiPartitionActive @ 0x14013DBF8 (MiPartitionActive.c)
 *     MiIncreaseCommitLimits @ 0x140187FC8 (MiIncreaseCommitLimits.c)
 *     MiUpdateReserveClusterInfo @ 0x140188268 (MiUpdateReserveClusterInfo.c)
 *     MiUpdatePageFileList @ 0x140188298 (MiUpdatePageFileList.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertPageFileInList(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // r13
  _QWORD **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // r12d
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r14
  __int16 v11; // ax
  char v12; // bl
  KPRIORITY v13; // edx
  BOOLEAN v14; // r8
  int SystemThread; // r14d
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
  v9 = (volatile signed __int64 *)(v6 + 1024);
  ExAcquirePushLockExclusiveEx(v6 + 1024, 0LL);
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
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
      KeAbPostRelease(v6 + 1024);
      goto LABEL_31;
    }
    *(_QWORD *)(v6 + 152) = v17;
  }
  v10 = *(unsigned int *)(v6 + 7128);
  if ( (unsigned int)v10 >= v8 )
    goto LABEL_28;
  *(_WORD *)(a1 + 204) ^= ((unsigned __int8)v10 ^ (unsigned __int8)*(_WORD *)(a1 + 204)) & 0xF;
  v11 = *(_WORD *)(a1 + 204);
  if ( (v11 & 0x50) == 0 )
  {
    if ( (unsigned int)MiIncreaseCommitLimits(v6, v3, v18, 0, a1) )
    {
      if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v6 + 1020) )
        *(_DWORD *)(v6 + 1020) = 1;
      goto LABEL_16;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
    KeAbPostRelease(v6 + 1024);
    SystemThread = -1073741583;
LABEL_31:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)SystemThread;
  }
  if ( (v11 & 0x10) != 0 && (unsigned int)MiNumberWsSwapPagefiles(v6) )
  {
LABEL_28:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
    KeAbPostRelease(v6 + 1024);
    SystemThread = -1073741673;
    goto LABEL_31;
  }
  MiUpdatePageFileList(a1, 1);
  *(_QWORD *)(v6 + 8 * v10 + 7136) = a1;
  *(_DWORD *)(v6 + 7128) = v10 + 1;
LABEL_16:
  v12 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1024));
  KeAbPostRelease(v6 + 1024);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUpdateReserveClusterInfo(v6, 0LL, 0);
  KeSetEvent((PRKEVENT)(v6 + 864), v13, v14);
  return 0LL;
}

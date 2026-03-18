/*
 * XREFs of MiInitializePartition @ 0x14074FC30
 * Callers:
 *     MmCreatePartition @ 0x14019A610 (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x1409F22D8 (MiCreatePfnDatabase.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     InitializeSListHead @ 0x1400E5520 (InitializeSListHead.c)
 *     KeInitializeGate @ 0x14013C3C4 (KeInitializeGate.c)
 *     MiInitializeSlabAllocator @ 0x140188898 (MiInitializeSlabAllocator.c)
 *     MiInitializePfnListHead @ 0x1401888F4 (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x14018891C (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x14019292C (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x140750118 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14075027C (MiInitializeNuma.c)
 *     MiInitializeLargePageNodeLists @ 0x140750408 (MiInitializeLargePageNodeLists.c)
 */

__int64 __fastcall MiInitializePartition(__int64 a1, __int16 a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 *v5; // rdi
  unsigned int v6; // r8d
  __int64 i; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdi
  unsigned int j; // ebp
  unsigned int v16; // r8d
  unsigned int v17; // edi
  __int64 k; // rbx
  __int64 v19; // rbx
  signed int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KEVENT *v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rcx
  struct _KEVENT *v28; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  char v30; // di

  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 305535296;
  v3 = 0;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    v3 = 32;
  *(_QWORD *)(a1 + 4864) = 0LL;
  *(_DWORD *)(a1 + 4) = v3;
  KeInitializeEvent((PRKEVENT)(a1 + 104), NotificationEvent, 0);
  v4 = 0;
  v5 = (__int64 *)(a1 + 2112);
  do
  {
    v6 = 0;
    for ( i = *v5; v6 < dword_140465AB4; i += 40LL )
    {
      *(_DWORD *)(i + 8) = v4;
      ++v6;
      *(_QWORD *)(i + 16) = 0xFFFFFFFFFLL;
      *(_QWORD *)(i + 24) = 0xFFFFFFFFFLL;
      *(_QWORD *)i = 0LL;
      *(_QWORD *)(i + 32) = 0LL;
    }
    ++v4;
    ++v5;
  }
  while ( v4 <= 1 );
  MiInitializePfnListHead(a1 + 2176, 0);
  MiInitializePfnListHead(a1 + 2240, 1);
  MiInitializePfnListHead(a1 + 2304, 2);
  MiInitializePfnListHead(a1 + 4096, 5);
  v8 = a1 + 2368;
  do
  {
    MiInitializePfnListHead(v8, 2);
    v8 = v11 + 40;
  }
  while ( v12 != 1 );
  *(_QWORD *)(a1 + 4152) = a1 + 2176;
  *(_QWORD *)(a1 + 4160) = v9;
  *(_QWORD *)(a1 + 4168) = v10;
  MiInitializeLargePageNodeLists(a1);
  v13 = 0;
  v14 = a1 + 6136;
  do
  {
    for ( j = 0; j < 4; ++j )
    {
      MiInitializeSlabAllocator(v14, v13, j);
      v14 += 120LL;
    }
    ++v13;
  }
  while ( v13 < 2 );
  v16 = dword_140465AB4;
  v17 = 0;
  for ( k = *(_QWORD *)(a1 + 4136); v17 < 2 * dword_140465AB4; ++v17 )
  {
    InitializeSListHead((PSLIST_HEADER)(k + 16LL * v17));
    v16 = dword_140465AB4;
  }
  v19 = 16LL;
  v20 = (unsigned int)(*(_QWORD *)(a1 + 7888) / 0x64uLL) / v16;
  if ( v20 < 4 )
    v20 = 4;
  if ( v20 > 16 )
    v20 = 16;
  *(_DWORD *)(a1 + 7324) = v20;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiInitializePfnListHead((__int64)&qword_1404646C0, 5);
  v21 = 3LL;
  MiInitializePfnListHead(a1 + 8448, 3);
  MiInitializePfnListHead(a1 + 8512, 4);
  MiInitializePfnListHead(a1 + 2688, 3);
  v22 = a1 + 2752;
  do
  {
    MiInitializePfnListHead(v22, 3);
    v22 = v23 + 40;
  }
  while ( v24 != 1 );
  v25 = (struct _KEVENT *)(a1 + 4344);
  v26 = a1 + 3392;
  do
  {
    MiInitializePfnListHead(v26, 3);
    KeInitializeEvent(v25, SynchronizationEvent, 0);
    v26 += 40LL;
    ++v25;
    --v19;
  }
  while ( v19 );
  MiInitializePfnListHead(a1 + 4032, 5);
  *(_QWORD *)(a1 + 4192) = v27;
  *(_QWORD *)(a1 + 4176) = a1 + 8448;
  *(_QWORD *)(a1 + 4184) = a1 + 8512;
  *(_QWORD *)(a1 + 4728) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4736) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4744) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4752) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 7296), NotificationEvent, 0);
  v28 = (struct _KEVENT *)(a1 + 4872);
  do
  {
    KeInitializeEvent(v28, NotificationEvent, 1u);
    v28 = (struct _KEVENT *)((char *)v28 + 32);
    --v21;
  }
  while ( v21 );
  *(_QWORD *)(a1 + 184) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 200), NotificationEvent, 0);
  memset64((void *)(a1 + 240), a1 + 200, 0xBuLL);
  *(_QWORD *)(a1 + 7816) = a1 + 7808;
  *(_QWORD *)(a1 + 7808) = a1 + 7808;
  KeInitializeEvent((PRKEVENT)(a1 + 784), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 728), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 752), NotificationEvent, 0);
  *(_DWORD *)(a1 + 712) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 688), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 872), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1000), NotificationEvent, 0);
  KeInitializeGate(a1 + 640);
  *(_QWORD *)(a1 + 632) = a1 + 624;
  *(_QWORD *)(a1 + 624) = a1 + 624;
  KeInitializeEvent((PRKEVENT)(a1 + 912), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 904) = a1 + 896;
  *(_QWORD *)(a1 + 896) = a1 + 896;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1120) = 0LL;
  *(_QWORD *)(a1 + 1096) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1104) = a1;
  *(_QWORD *)(a1 + 1080) = 0LL;
  *(_DWORD *)(a1 + 1140) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1184), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1232), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1216));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 7400));
  *(_QWORD *)(a1 + 1288) = 1LL;
  *(_QWORD *)(a1 + 1296) = 1LL;
  *(_QWORD *)(a1 + 1304) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140466148, 0LL);
  *(_DWORD *)(a1 + 4) |= 2u;
  v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466148, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v30 & 2) != 0 && (v30 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466148);
  KeAbPostRelease((ULONG_PTR)&qword_140466148);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}

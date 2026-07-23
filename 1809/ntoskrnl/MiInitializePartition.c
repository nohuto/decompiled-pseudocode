/*
 * XREFs of MiInitializePartition @ 0x14072BD18
 * Callers:
 *     MmCreatePartition @ 0x140190AB0 (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x1409BB550 (MiCreatePfnDatabase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     KeInitializeGate @ 0x14013A474 (KeInitializeGate.c)
 *     MiInitializePfnListHead @ 0x14017F014 (MiInitializePfnListHead.c)
 *     MiInitializeSlabAllocator @ 0x14017F03C (MiInitializeSlabAllocator.c)
 *     MiInitializeCombining @ 0x14017F074 (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x140187E40 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x14072C1F4 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14072C368 (MiInitializeNuma.c)
 *     MiInitializeLargePageNodeLists @ 0x14072C52C (MiInitializeLargePageNodeLists.c)
 */

__int64 __fastcall MiInitializePartition(__int64 a1, __int16 a2)
{
  int v3; // eax
  __int64 v4; // r14
  struct _KEVENT *v5; // rcx
  int v6; // ecx
  __int64 *v7; // rdi
  unsigned int v8; // r8d
  __int64 i; // rax
  int v10; // r11d
  int v11; // r12d
  int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // ebx
  _QWORD *v19; // rbp
  __int64 v20; // rdi
  unsigned int v21; // r8d
  unsigned int v22; // ebx
  __int64 j; // rbp
  signed int v24; // eax
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KEVENT *v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // rcx
  struct _KEVENT *v32; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  char v34; // di

  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 305535296;
  v3 = 0;
  v4 = 16LL;
  v5 = (struct _KEVENT *)(a1 + 104);
  *(_QWORD *)(a1 + 4864) = 0LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    v3 = 16;
  *(_DWORD *)(a1 + 4) = v3;
  KeInitializeEvent(v5, NotificationEvent, 0);
  v6 = 0;
  v7 = (__int64 *)(a1 + 2112);
  do
  {
    v8 = 0;
    for ( i = *v7; v8 < dword_14043B14C; i += 40LL )
    {
      *(_DWORD *)(i + 8) = v6;
      ++v8;
      *(_QWORD *)(i + 16) = 0xFFFFFFFFFLL;
      *(_QWORD *)(i + 24) = 0xFFFFFFFFFLL;
      *(_QWORD *)i = 0LL;
      *(_QWORD *)(i + 32) = 0LL;
    }
    ++v6;
    ++v7;
  }
  while ( v6 <= 1 );
  MiInitializePfnListHead(a1 + 2176, 0);
  MiInitializePfnListHead(a1 + 2240, 1);
  MiInitializePfnListHead(a1 + 2304, 2);
  v11 = v10 + 3;
  MiInitializePfnListHead(a1 + 4096, v10 + 3);
  v13 = a1 + 2368;
  do
  {
    MiInitializePfnListHead(v13, v12);
    v13 = v16 + 40;
  }
  while ( v17 != 1 );
  *(_QWORD *)(a1 + 4152) = a1 + 2176;
  *(_QWORD *)(a1 + 4160) = v14;
  *(_QWORD *)(a1 + 4168) = v15;
  MiInitializeLargePageNodeLists(a1);
  v18 = 0;
  v19 = (_QWORD *)(a1 + 6136);
  v20 = 3LL;
  do
  {
    MiInitializeSlabAllocator(v19, v18++);
    v19 += 9;
  }
  while ( v18 < 3 );
  v21 = dword_14043B14C;
  v22 = 0;
  for ( j = *(_QWORD *)(a1 + 4136); v22 < 2 * dword_14043B14C; ++v22 )
  {
    InitializeSListHead((PSLIST_HEADER)(j + 16LL * v22));
    v21 = dword_14043B14C;
  }
  v24 = (unsigned int)(*(_QWORD *)(a1 + 7120) / 0x64uLL) / v21;
  if ( v24 < 4 )
    v24 = 4;
  if ( v24 > 16 )
    v24 = 16;
  *(_DWORD *)(a1 + 6556) = v24;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiInitializePfnListHead((__int64)&qword_140439DC0, v11);
  MiInitializePfnListHead(a1 + 7680, 3);
  MiInitializePfnListHead(a1 + 7744, v25);
  MiInitializePfnListHead(a1 + 2688, 3);
  v26 = a1 + 2752;
  do
  {
    MiInitializePfnListHead(v26, 3);
    v26 = v27 + 40;
  }
  while ( v28 != 1 );
  v29 = (struct _KEVENT *)(a1 + 4344);
  v30 = a1 + 3392;
  do
  {
    MiInitializePfnListHead(v30, 3);
    KeInitializeEvent(v29, SynchronizationEvent, 0);
    v30 += 40LL;
    ++v29;
    --v4;
  }
  while ( v4 );
  MiInitializePfnListHead(a1 + 4032, 5);
  *(_QWORD *)(a1 + 4192) = v31;
  *(_QWORD *)(a1 + 4176) = a1 + 7680;
  *(_QWORD *)(a1 + 4184) = a1 + 7744;
  *(_QWORD *)(a1 + 4728) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4736) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4744) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4752) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 6528), NotificationEvent, 0);
  v32 = (struct _KEVENT *)(a1 + 4872);
  do
  {
    KeInitializeEvent(v32, NotificationEvent, 1u);
    v32 = (struct _KEVENT *)((char *)v32 + 32);
    --v20;
  }
  while ( v20 );
  *(_QWORD *)(a1 + 184) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 200), NotificationEvent, 0);
  memset64((void *)(a1 + 240), a1 + 200, 0xBuLL);
  *(_QWORD *)(a1 + 7040) = a1 + 7032;
  *(_QWORD *)(a1 + 7032) = a1 + 7032;
  KeInitializeEvent((PRKEVENT)(a1 + 776), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 720), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 744), NotificationEvent, 0);
  *(_DWORD *)(a1 + 704) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 680), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 864), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 992), NotificationEvent, 0);
  KeInitializeGate(a1 + 632);
  *(_QWORD *)(a1 + 624) = a1 + 616;
  *(_QWORD *)(a1 + 616) = a1 + 616;
  KeInitializeEvent((PRKEVENT)(a1 + 904), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 896) = a1 + 888;
  *(_QWORD *)(a1 + 888) = a1 + 888;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1112) = 0LL;
  *(_QWORD *)(a1 + 1088) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1096) = a1;
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_DWORD *)(a1 + 1140) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1184), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1232), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1216));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 6632));
  *(_QWORD *)(a1 + 1288) = 1LL;
  *(_QWORD *)(a1 + 1296) = 1LL;
  *(_QWORD *)(a1 + 1304) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B7C8, 0LL);
  *(_DWORD *)(a1 + 4) |= 2u;
  v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B7C8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v34 & 2) != 0 && (v34 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B7C8);
  KeAbPostRelease((ULONG_PTR)&qword_14043B7C8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}

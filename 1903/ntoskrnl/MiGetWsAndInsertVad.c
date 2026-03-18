/*
 * XREFs of MiGetWsAndInsertVad @ 0x1400729C0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiInsertProcessVads @ 0x14069241C (MiInsertProcessVads.c)
 *     MiInsertChildVads @ 0x14089B5B0 (MiInsertChildVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiIsVadLargePrivate @ 0x140072F8C (MiIsVadLargePrivate.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall MiGetWsAndInsertVad(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  KIRQL v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  struct _KTHREAD *v21; // rdi

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[6], a2);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v8 = v7;
  v9 = Process[1].ActiveProcessors.Bitmap[17];
  ++Process[2].Affinity.Bitmap[10];
  Process[2].Affinity.Bitmap[9] = a1;
  if ( v4 <= v9 >> 12 )
  {
    Process[1].Affinity.Bitmap[1] += ((v4 - v5) << 12) + 4096;
    v10 = Process[1].Affinity.Bitmap[1];
    if ( Process[1].Affinity.Bitmap[0] < v10 )
      Process[1].Affinity.Bitmap[0] = v10;
  }
  v11 = Process[2].Affinity.Bitmap[8];
  v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v13) = 0;
  if ( v11 )
  {
    while ( 1 )
    {
      if ( v12 > (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32))
        || v12 >= (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) )
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( !v13 )
        {
          LOBYTE(v13) = 1;
          break;
        }
      }
      else
      {
        v13 = *(_QWORD *)v11;
        if ( !*(_QWORD *)v11 )
          break;
      }
      v11 = v13;
    }
  }
  RtlAvlInsertNodeEx(&Process[2].Affinity.Bitmap[8], v11, (unsigned __int8)v13, a1);
  if ( (unsigned int)MiIsVadLargePrivate(a1)
    && (unsigned __int64)MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] >= 0x200 )
  {
    ++HIDWORD(Process[2].ActiveProcessors.Bitmap[0]);
  }
  LOBYTE(v14) = *(_DWORD *)(a1 + 48) & 0x70;
  if ( (_BYTE)v14 == 16 )
  {
    v14 = *(_QWORD *)&Process[1].IdealNode[14];
    ++*(_QWORD *)(v14 + 304);
  }
  if ( v8 != 17 )
    LOBYTE(v14) = MiUnlockWorkingSetExclusive(&Process[1].IdealNode[6], v8);
  if ( (*(_DWORD *)(a1 + 48) & 0x100000) == 0 )
  {
    v15 = *(__int64 **)(a1 + 72);
    *(_QWORD *)(a1 + 112) = (unsigned __int64)Process | 1;
    v16 = (_QWORD *)(a1 + 96);
    v17 = *v15;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v17 + 104, 0LL);
    if ( (*(_DWORD *)(v17 + 56) & 0x400) == 0 )
    {
      v19 = *(_QWORD *)(v17 + 8);
      v20 = (_QWORD *)(v17 + 8);
      if ( *(_QWORD *)(v19 + 8) != v17 + 8 )
        __fastfail(3u);
      *v16 = v19;
      v16[1] = v20;
      *(_QWORD *)(v19 + 8) = v16;
      *v20 = v16;
    }
    v21 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17 + 104);
    KeAbPostRelease(v17 + 104);
    LOBYTE(v14) = KiLeaveGuardedRegionUnsafe((__int64)v21);
  }
  return v14;
}

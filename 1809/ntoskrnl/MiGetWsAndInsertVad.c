/*
 * XREFs of MiGetWsAndInsertVad @ 0x140063E10
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x14067AD24 (MiInsertProcessVads.c)
 *     MiInsertChildVads @ 0x14085F950 (MiInsertChildVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiGetWsAndInsertVad(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  struct _KTHREAD *v22; // rdi

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12], a2);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v8 = v7;
  v9 = Process[1].ActiveProcessors.Bitmap[18];
  ++Process[2].Affinity.Bitmap[6];
  Process[2].Affinity.Bitmap[5] = a1;
  if ( v4 <= v9 >> 12 )
  {
    Process[1].Affinity.Bitmap[1] += ((v4 - v5) << 12) + 4096;
    v10 = Process[1].Affinity.Bitmap[1];
    if ( Process[1].Affinity.Bitmap[0] < v10 )
      Process[1].Affinity.Bitmap[0] = v10;
  }
  v11 = Process[2].Affinity.Bitmap[4];
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
  RtlAvlInsertNodeEx(&Process[2].Affinity.Bitmap[4], v11, (unsigned __int8)v13, a1);
  if ( (*(_BYTE *)(a1 + 48) & 7) == 5 || (unsigned int)MiVadMapsLargeImage(a1) )
    ++HIDWORD(Process[2].ReadyListHead.Flink);
  if ( (*(_DWORD *)(a1 + 48) & 7) == 1 )
    ++*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 240LL);
  if ( v8 != 17 )
    MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8, v14, v15);
  if ( (*(_DWORD *)(a1 + 48) & 0x4000) == 0 )
  {
    v16 = *(__int64 **)(a1 + 72);
    *(_QWORD *)(a1 + 112) = (unsigned __int64)Process | 1;
    v17 = (_QWORD *)(a1 + 96);
    v18 = *v16;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v18 + 104, 0LL);
    if ( (*(_DWORD *)(v18 + 56) & 0x400) == 0 )
    {
      v20 = *(_QWORD *)(v18 + 8);
      v21 = (_QWORD *)(v18 + 8);
      if ( *(_QWORD *)(v20 + 8) != v18 + 8 )
        __fastfail(3u);
      *v17 = v20;
      v17[1] = v21;
      *(_QWORD *)(v20 + 8) = v17;
      *v21 = v17;
    }
    v22 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v18 + 104);
    KeAbPostRelease(v18 + 104);
    KiLeaveGuardedRegionUnsafe((__int64)v22);
  }
}

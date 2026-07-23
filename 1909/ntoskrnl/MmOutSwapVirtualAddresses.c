/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x140143DDC
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140143D98 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiOutSwapWorkingSet @ 0x1400D987C (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400D9974 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400D99CC (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400D9C2C (MiFindBestOutswapPagefile.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x1405EA4C0 (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x140673710 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x140673F84 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406F8470 (MiReserveWorkingSetSwapSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14089B114 (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned __int64 v14; // r12
  int v15; // esi
  _QWORD *WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  PEPROCESS v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 *v20; // r15
  __int64 v21; // r14
  unsigned __int64 Address; // rax
  int v23; // ecx
  struct _KPROCESS *v24; // r15
  __int64 v25; // rdi
  struct _KTHREAD *v26; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v28; // r12
  unsigned int v29; // r8d
  bool v30; // zf
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  PEPROCESS Processa; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v41[4]; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v42; // [rsp+58h] [rbp-A8h]
  _QWORD *v43; // [rsp+60h] [rbp-A0h]
  _QWORD v44[23]; // [rsp+70h] [rbp-90h] BYREF

  Processa = Process;
  v43 = a4;
  memset(&v44[18], 0, 0x28uLL);
  CurrentThread = KeGetCurrentThread();
  v8 = *(unsigned __int16 *)&Process[1].Spare2[69];
  v42 = CurrentThread;
  v9 = *(_QWORD *)(qword_140465E88 + 8 * v8);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v41);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v44[18]) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v40);
  memset(v44, 0, 0x90uLL);
  --CurrentThread->SpecialApcDisable;
  v11 = v9 + 1120;
  ExAcquirePushLockExclusiveEx(v9 + 1120, 0LL);
  v13 = v41[0];
  v14 = (unsigned __int64)v40;
  while ( 1 )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, &v44[5], v12, BestOutswapPagefile, v13, v14);
    if ( v15 >= 0 )
      break;
    if ( v13 >= 0x10 )
      goto LABEL_49;
    v15 = MiExtendWorkingSetSwapPagefile(v9, v14, v13);
    if ( v15 < 0 )
      goto LABEL_49;
    BestOutswapPagefile = v13;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v14);
  v17 = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v15 = -1073741670;
LABEL_49:
    v24 = Processa;
    goto LABEL_21;
  }
  v18 = Processa;
  v19 = (__int64)v42;
  v44[0] = WorkingSetSwapSupport;
  v44[3] = v9;
  v44[2] = (char *)Processa + 1280;
  v40 = &Processa[1].IdealNode[6];
  --v42->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v18[1].Affinity.Bitmap[7], 0LL);
  *(_BYTE *)(v19 + 1768) |= 2u;
  v20 = &a2[2 * a3];
  if ( a2 < v20 )
  {
    v21 = (__int64)v40;
    do
    {
      Address = MiLocateAddress(*a2);
      if ( Address )
      {
        v23 = *(_DWORD *)(Address + 48);
        if ( (v23 & 0x70) == 0
          && ((v23 & 0x100000) == 0 || (v23 & 0x400000) == 0 && (v23 & 0xC0000u) < 0x80000)
          && (v23 & 0x100000) != 0
          && (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) >= (*a2 + a2[1] - 1) >> 12 )
        {
          MiOutSwapWorkingSet(v21, Address, *a2, *a2 + a2[1] - 1, (__int64)v44);
        }
      }
      a2 += 2;
    }
    while ( a2 < v20 );
    v11 = v9 + 1120;
  }
  v24 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v19, (__int64)Processa);
  if ( v17[2] < v14 )
  {
    v25 = MiReAllocateWorkingSetSwapSupport((__int64)v17);
    if ( v25 )
    {
      ExFreePoolWithTag(v17, 0);
      v17 = (_QWORD *)v25;
    }
  }
  v15 = 0;
  v40 = (unsigned __int16 *)v17[3];
  *v43 = v17;
LABEL_21:
  MiFreeReservationRuns(v9, &v44[5]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v11);
  v38 = 0;
  v26 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v26->ApcState.Process);
  else
    SessionId = -1;
  --v26->SpecialApcDisable;
  v28 = ++v26->AbAllocationRegionCount;
  v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v30 = !_BitScanReverse((unsigned int *)&v31, v29);
    v41[2] = v31;
    if ( v30 )
      break;
    v32 = 1 << v31;
    v33 = v31;
    v34 = &v26->LockEntries[v33];
    v29 &= ~v32;
    if ( (v34->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v34->LockState.0 & 1) == 0
      && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
      && v34->LockState.SessionId == SessionId )
    {
      v34->AcquiredByte &= ~1u;
      if ( v34->LockState.0 )
      {
        if ( v34 )
        {
          v34->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v34->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v26->LockEntries[v33].TreeNode);
          v38 = v34->BoostBitmap.AllFields & 0x1FFFF;
          v34->BoostBitmap.AllFields &= 0xFFFE0000;
          v34->ThreadLocalFlags &= ~1u;
          v34->LockState.0 = 0LL;
          v35 = ((char *)v34 - (char *)v26 - 800) / 96;
          if ( v28 == 1 )
            v26->AbEntrySummary |= 1 << v35;
          else
            _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v35);
          goto LABEL_37;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v26, v11, SessionId, 0LL);
LABEL_37:
  --v26->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v26, v11, &v38);
  v30 = v26->SpecialApcDisable++ == -1;
  if ( v30 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
    KiCheckForKernelApcDelivery(v36);
  KiLeaveGuardedRegionUnsafe((__int64)v42);
  v44[18] = v40;
  v44[19] = v44[15];
  v44[20] = v44[16];
  v44[21] = v44[17];
  LODWORD(v44[22]) = v15;
  EtwTraceWorkingSetSwap(v24);
  return (unsigned int)v15;
}

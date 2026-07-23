/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1402CBC80
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140309370 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiFindBestOutswapPagefile @ 0x1400E4E2C (MiFindBestOutswapPagefile.c)
 *     MiOutSwapWorkingSet @ 0x1400E5868 (MiOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400E595C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400E59B4 (MiAllocateWorkingSetSwapSupport.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x1405F7D18 (MiValidateMemoryRangeEntries.c)
 *     EtwTraceWorkingSetSwap @ 0x14066C988 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x1406BA0EC (MiFreeReservationRuns.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14085FC94 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14085FDAC (MiReserveWorkingSetSwapSpace.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 v9; // r13
  unsigned int BestOutswapPagefile; // esi
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned __int64 v15; // r12
  int v16; // esi
  unsigned __int64 *WorkingSetSwapSupport; // rax
  _QWORD *v18; // rbx
  struct _KPROCESS *v19; // r14
  struct _KTHREAD *v20; // rbx
  __int64 SessionId; // rdx
  PEPROCESS v22; // rcx
  __int64 v23; // rsi
  unsigned __int64 *v24; // r14
  __int64 v25; // r15
  unsigned __int64 Address; // rax
  __int64 v27; // rdi
  unsigned __int8 v28; // r12
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v31; // rcx
  _KLOCK_ENTRY *v32; // rdi
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  PEPROCESS Processa; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v39; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v40[4]; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD *v41; // [rsp+58h] [rbp-A8h]
  _QWORD *v42; // [rsp+60h] [rbp-A0h]
  _QWORD v43[18]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+120h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Processa = Process;
  v7 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 3);
  v42 = a4;
  v41 = CurrentThread;
  v9 = *(_QWORD *)(qword_14043B808 + 8 * v7);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v9, v40);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v44) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v39);
  memset(v43, 0, sizeof(v43));
  --CurrentThread->SpecialApcDisable;
  v12 = v9 + 1112;
  ExAcquirePushLockExclusiveEx(v9 + 1112, 0LL);
  v14 = v40[0];
  v15 = (unsigned __int64)v39;
  while ( 1 )
  {
    v16 = MiReserveWorkingSetSwapSpace(v9, &v43[5], v13, BestOutswapPagefile, v14, v15);
    if ( v16 >= 0 )
      break;
    if ( v14 >= 0x10 )
      goto LABEL_10;
    v16 = MiExtendWorkingSetSwapPagefile(v9, v15, v14);
    if ( v16 < 0 )
      goto LABEL_10;
    BestOutswapPagefile = v14;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v15);
  v18 = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v16 = -1073741670;
LABEL_10:
    v19 = Processa;
    goto LABEL_11;
  }
  v22 = Processa;
  v23 = (__int64)v41;
  v43[0] = WorkingSetSwapSupport;
  v43[3] = v9;
  v43[2] = (char *)Processa + 1280;
  v39 = &Processa[1].IdealNode[12];
  --v41->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&v22[1].Affinity.Bitmap[7], 0LL);
  *(_BYTE *)(v23 + 1752) |= 2u;
  v24 = &a2[2 * a3];
  if ( a2 < v24 )
  {
    v25 = (__int64)v39;
    do
    {
      Address = MiLocateAddress(*a2);
      if ( Address
        && (*(_DWORD *)(Address + 48) & 0x4007) == 0x4000
        && (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) >= (*a2 + a2[1] - 1) >> 12 )
      {
        MiOutSwapWorkingSet(v25, Address, *a2, *a2 + a2[1] - 1, (__int64)v43);
      }
      a2 += 2;
    }
    while ( a2 < v24 );
    v12 = v9 + 1112;
  }
  v19 = Processa;
  UNLOCK_ADDRESS_SPACE_SHARED(v23, (__int64)Processa);
  if ( v18[2] < v15 )
  {
    v27 = MiReAllocateWorkingSetSwapSupport((__int64)v18);
    if ( v27 )
    {
      ExFreePoolWithTag(v18, 0);
      v18 = (_QWORD *)v27;
    }
  }
  v16 = 0;
  v39 = (unsigned __int16 *)v18[3];
  *v42 = v18;
LABEL_11:
  MiFreeReservationRuns(v9, &v43[5]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v12);
  v37 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v20->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v20->SpecialApcDisable;
  v28 = ++v20->AbAllocationRegionCount;
  v29 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v33 = !_BitScanReverse((unsigned int *)&v34, v29);
    v40[2] = v34;
    if ( v33 )
      goto LABEL_35;
    v30 = 1 << v34;
    v31 = v34;
    v32 = &v20->LockEntries[v31];
    v29 &= ~v30;
    if ( (v32->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v32->LockState.0 & 1) == 0
      && (*(_QWORD *)&v32->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
      && v32->LockState.SessionId == (_DWORD)SessionId )
    {
      v32->AcquiredByte &= ~1u;
      if ( v32->LockState.0 )
        break;
    }
  }
  if ( !v32 )
  {
LABEL_35:
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v12, (unsigned int)SessionId, 0LL);
    goto LABEL_42;
  }
  v32->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v32->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v20->LockEntries[v31].TreeNode, SessionId);
  v37 = 0;
  v37 = v32->BoostBitmap.AllFields & 0x1FFFF;
  v32->BoostBitmap.AllFields &= 0xFFFE0000;
  v32->ThreadLocalFlags &= ~1u;
  v32->LockState.0 = 0LL;
  v35 = ((char *)v32 - (char *)v20 - 800) / 96;
  if ( v28 == 1 )
    v20->AbEntrySummary |= 1 << v35;
  else
    _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v35);
LABEL_42:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v12, (__int64)&v37);
  v33 = v20->SpecialApcDisable++ == -1;
  if ( v33 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v36);
  KiLeaveGuardedRegionUnsafe((__int64)v41);
  v44 = v39;
  v45 = v43[15];
  v46 = v43[16];
  v47 = v43[17];
  v48 = v16;
  EtwTraceWorkingSetSwap(v19);
  return (unsigned int)v16;
}

/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     MiPageFileLargestBitmapsRun @ 0x140124908 (MiPageFileLargestBitmapsRun.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1401B8A10 (ZwFsControlFile.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402B8AE8 (MiQueueSyncModifiedWriterApc.c)
 *     MiContractWsSwapPageFile @ 0x14066C944 (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r12
  unsigned int v5; // eax
  unsigned int SessionId; // r13d
  unsigned int v7; // edi
  __int64 *v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned __int64 updated; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  int Blink_high; // ebx
  struct _KTHREAD *v16; // rdi
  int v17; // edx
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  signed __int32 v26[8]; // [rsp+8h] [rbp-100h] BYREF
  int v27; // [rsp+58h] [rbp-B0h]
  int v28; // [rsp+5Ch] [rbp-ACh] BYREF
  NTSTATUS Status; // [rsp+60h] [rbp-A8h]
  unsigned int v30; // [rsp+64h] [rbp-A4h]
  unsigned int v31; // [rsp+68h] [rbp-A0h]
  struct _KEVENT Event[2]; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+A4h] [rbp-64h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *v35; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  int v37[24]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD InputBuffer[3]; // [rsp+128h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v3 = MiSwizzleInvalidPte(0LL);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936)) )
  {
    --CurrentThread->SpecialApcDisable;
    v4 = a1 + 1112;
    ExAcquirePushLockExclusiveEx(a1 + 1112, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v5 = *(_DWORD *)(a1 + 7128);
    SessionId = -1;
    v30 = v5;
    v7 = 0;
    v31 = 0;
    if ( v5 )
    {
      v8 = (__int64 *)(a1 + 7136);
      v9 = v5;
      v34 = a1 + 7136;
      do
      {
        v10 = *v8;
        if ( (*(_BYTE *)(*v8 + 204) & 0x50) == 0x10 )
        {
          memset(Event, 0, sizeof(Event));
          LOWORD(Event[0].Header.Lock) = 0;
          Event[0].Header.WaitListHead.Blink = &Event[0].Header.WaitListHead;
          Event[0].Header.Size = 6;
          Event[0].Header.WaitListHead.Flink = &Event[0].Header.WaitListHead;
          Event[0].Header.SignalState = 0;
          Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v7 | 0x200000000000LL);
          *(_QWORD *)&Event[1].Header.Lock = a1;
          v11 = MiPageFileLargestBitmapsRun(v10);
          if ( v11 >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v37,
                (__int64)MiTrimUnusedPageFileRegionsApc,
                (__int64)Event,
                Event);
              if ( !HIDWORD(Event[1].Header.WaitListHead.Blink) )
                break;
              InputBuffer[0] = 0x100000000LL;
              InputBuffer[1] = (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) << 12;
              InputBuffer[2] = (unsigned __int64)HIDWORD(Event[1].Header.WaitListHead.Blink) << 12;
              KeResetEvent(Event);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v10 + 224),
                         0LL,
                         (PIO_APC_ROUTINE)MiIrpCompletionApcRoutine,
                         Event,
                         &IoStatusBlock,
                         0x98208u,
                         InputBuffer,
                         0x18u,
                         0LL,
                         0);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
              updated = MiTransferSoftwarePte(v3, v10, (unsigned int)Event[1].Header.WaitListHead.Blink);
              v13 = updated;
              if ( qword_14043B180 )
              {
                if ( (updated & 0x10) != 0 )
                  v13 = updated & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v13 = updated & ~qword_14043B180;
              }
              v14 = HIDWORD(v13);
              if ( HIDWORD(Event[1].Header.WaitListHead.Blink) )
              {
                Blink_high = HIDWORD(Event[1].Header.WaitListHead.Blink);
                do
                {
                  MiReleasePageFileInfo((struct _KEVENT *)a1, updated, 2);
                  updated = MiUpdatePageFileHighInPte(updated, ++v14);
                  --Blink_high;
                }
                while ( Blink_high );
              }
              if ( Status < 0 )
                break;
              KeResetEvent(Event);
              Event[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(unsigned int)(HIDWORD(Event[1].Header.WaitListHead.Blink)
                                                                                      + LODWORD(Event[1].Header.WaitListHead.Blink));
            }
            while ( (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) < *(_QWORD *)v10 );
            v7 = v31;
            v8 = (__int64 *)v34;
            v9 = v30;
          }
        }
        ++v7;
        ++v8;
        v31 = v7;
        v34 = (__int64)v8;
      }
      while ( v7 < v9 );
      CurrentThread = v35;
      v4 = a1 + 1112;
      SessionId = -1;
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    v28 = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    --v16->SpecialApcDisable;
    ++v16->AbAllocationRegionCount;
    v17 = (char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary;
    LOBYTE(v27) = v16->AbAllocationRegionCount;
    LODWORD(v18) = v17 ^ 0x3F;
    while ( 1 )
    {
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      v33 = v20;
      if ( v19 )
        break;
      v21 = 1 << v20;
      v22 = v20;
      v23 = &v16->LockEntries[v22];
      v18 = ~v21 & (unsigned int)v18;
      if ( (v23->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v23->LockState.0 & 1) == 0
        && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
        && v23->LockState.SessionId == SessionId )
      {
        v23->AcquiredByte &= ~1u;
        if ( v23->LockState.0 )
        {
          if ( v23 )
          {
            v23->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v23->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v16->LockEntries[v22].TreeNode, v18);
            v28 = 0;
            v28 = v23->BoostBitmap.AllFields & 0x1FFFF;
            v23->BoostBitmap.AllFields &= 0xFFFE0000;
            v23->ThreadLocalFlags &= ~1u;
            v23->LockState.0 = 0LL;
            v24 = ((char *)v23 - (char *)v16 - 800) / 96;
            if ( (_BYTE)v27 == 1 )
              v16->AbEntrySummary |= 1 << v24;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v24);
            goto LABEL_38;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v4, SessionId, 0LL);
LABEL_38:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, v4, (__int64)&v28);
    v19 = v16->SpecialApcDisable++ == -1;
    if ( v19 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v25);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936));
    *(_QWORD *)(a1 + 1064) = KiQueryUnbiasedInterruptTime();
    _InterlockedOr(v26, 0);
    *(_QWORD *)(a1 + 1056) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 168));
}

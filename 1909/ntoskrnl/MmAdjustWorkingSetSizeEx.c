/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14012DF0C
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x14018A1B0 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140324FA8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140325388 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     PsReturnProcessQuota @ 0x14008E8B8 (PsReturnProcessQuota.c)
 *     PsChargeProcessQuota @ 0x14008F048 (PsChargeProcessQuota.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400D9FBC (MiGetCurrentMultiplexedVm.c)
 *     MiCheckWsLimits @ 0x14012E1C4 (MiCheckWsLimits.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A9F8 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r13
  __int64 CurrentMultiplexedVm; // rdi
  __int64 v11; // r15
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r10
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29; // ecx
  unsigned __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+60h] [rbp-20h] BYREF
  KIRQL v35; // [rsp+D0h] [rbp+50h]
  __int16 v37; // [rsp+E8h] [rbp+68h]

  Process = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v34, 0, sizeof(v34));
  *a6 = 0;
  if ( !a3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].IdealNode[6];
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0LL, 0LL, -1LL);
    v11 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
    SharedVm = MiGetSharedVm(CurrentMultiplexedVm);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v35 = v13;
    v34.LockQueue.Next = 0LL;
    v34.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(CurrentMultiplexedVm) + 16);
    KxAcquireQueuedSpinLock((__int64)&v34, (volatile __int64 *)v34.LockQueue.Lock);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v17 = -1073741558;
      goto LABEL_29;
    }
    if ( a1 )
      v14 = a1 >> 12;
    else
      v14 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v30 = v14;
    if ( a2 )
      v15 = a2 >> 12;
    else
      v15 = *(_QWORD *)(CurrentMultiplexedVm + 152);
    v31 = v15;
    v17 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v30, (unsigned int)&v31, a5, 0);
    if ( (v17 & 0xC0000000) == 0xC0000000 )
      goto LABEL_29;
    v18 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v19 = v30;
    v20 = *(_QWORD *)(CurrentMultiplexedVm + 16);
    v32 = v20;
    if ( v30 > v18 )
    {
      v21 = v30 - v18;
      *a6 = 1;
      if ( !a4 )
      {
        v17 = -1073741727;
        goto LABEL_29;
      }
      if ( !a3 )
      {
        v17 = PsChargeProcessQuota(Process, v16, v21);
        if ( v17 < 0 )
          goto LABEL_29;
      }
      if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v11, v21, 512LL) )
      {
        if ( !a3 )
          PsReturnProcessQuota((ULONG_PTR)Process, v16, v21);
        v17 = -1073741670;
        goto LABEL_29;
      }
      v20 = v32;
    }
    else
    {
      v21 = v18 - v30;
      if ( v30 < *(_QWORD *)(v20 + 32) )
      {
        v17 = -1073741748;
        goto LABEL_29;
      }
    }
    v22 = v31;
    v32 = v31;
    if ( v31 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
    {
      if ( *(_QWORD *)(v20 + 32) + 6LL >= v31 )
      {
        v17 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
            PsReturnProcessQuota((ULONG_PTR)Process, v16, v21);
          if ( (ULONG_PTR *)v11 == &MiSystemPartition )
            MiReturnResidentAvailable(v21);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8128), v21);
        }
        goto LABEL_29;
      }
      *(_BYTE *)(CurrentMultiplexedVm + 187) |= 0x10u;
    }
    if ( !*a6 && v21 )
    {
      if ( !a3 )
        PsReturnProcessQuota((ULONG_PTR)Process, v16, v21);
      if ( (ULONG_PTR *)v11 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(v21);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8128), v21);
        v19 = v30;
        v22 = v31;
      }
    }
    *(_QWORD *)(CurrentMultiplexedVm + 112) = v19;
    *(_QWORD *)(CurrentMultiplexedVm + 152) = v22;
    if ( !a5 )
    {
LABEL_29:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
      LOBYTE(v25) = v35;
      MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v25, v26, v27);
      return (unsigned int)v17;
    }
    v23 = 0;
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
    v24 = *(_DWORD *)(CurrentMultiplexedVm + 184);
    v37 = v24;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v24) = v24 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v24) = v24 & 0x7F;
    }
    v23 = 1;
    LOBYTE(v37) = v24;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v37) = v24 | 0x40;
    }
    else
    {
      if ( (a5 & 2) != 0 )
      {
        v23 = 1;
        LOBYTE(v37) = v24 & 0xBF;
      }
      if ( !v23 )
        goto LABEL_28;
    }
    *(_WORD *)(CurrentMultiplexedVm + 184) = v37;
LABEL_28:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_29;
  }
  if ( a3 == 2 )
  {
    CurrentMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( CurrentMultiplexedVm )
      goto LABEL_3;
  }
  else
  {
    v29 = a3 - 3;
    if ( a3 == 3 )
    {
      v29 = 2;
LABEL_43:
      CurrentMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v29);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_43;
  }
  return 3221225713LL;
}

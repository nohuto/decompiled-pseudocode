/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x1C0048B18
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x1C00449D0 (RaUnitResetBusSrb.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 *     StorAllocateContiguousIoResources @ 0x1C00064CC (StorAllocateContiguousIoResources.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidUnitStartDeviceBusy @ 0x1C00093C4 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000B5D4 (RaidZeroXrb.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00432C0 (RaidNtStatusToSrbStatus.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, IRP *a2)
{
  int v4; // edx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 ContiguousIoResources; // rax
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int64 v10; // r8
  KSPIN_LOCK *v11; // rcx
  _QWORD *Pool; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  KIRQL v15; // bl
  unsigned int v16; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v19[2]; // [rsp+58h] [rbp-28h] BYREF

  memset(v19, 0, sizeof(v19));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  CurrentStackLocation->Control |= 1u;
  LOBYTE(CurrentStackLocation) = BYTE2(SecurityContext->SecurityQos);
  BYTE3(SecurityContext->SecurityQos) = 0;
  if ( (_BYTE)CurrentStackLocation == 40 )
    LODWORD(CurrentStackLocation) = SecurityContext->FullCreateOptions;
  else
    LODWORD(CurrentStackLocation) = (unsigned __int8)CurrentStackLocation;
  if ( (_DWORD)CurrentStackLocation == 16 )
  {
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1088,
                              v4,
                              *(_QWORD *)(a1 + 24));
    if ( ContiguousIoResources )
    {
      *(_QWORD *)&v19[1] = ContiguousIoResources + 32;
      *((_QWORD *)&v19[1] + 1) = ContiguousIoResources + 832;
      *((_QWORD *)&v19[0] + 1) = ContiguousIoResources + 1088;
      RaidZeroXrb(ContiguousIoResources + 32, ContiguousIoResources + 832, 0, 0LL);
      LODWORD(v19[0]) = -1;
      goto LABEL_9;
    }
LABEL_24:
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(-1073741670);
    a2->IoStatus.Information = 0LL;
    RaidCompleteRequestEx(a2, 0, v16);
    return 259LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1472), 1, 0) )
    goto LABEL_24;
  v8 = *(_OWORD *)(a1 + 1456);
  v19[0] = *(_OWORD *)(a1 + 1440);
  v19[1] = v8;
LABEL_9:
  if ( (qword_1C00612B0 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 161) & 1) != 0 || *(char *)(a1 + 160) < 0 )
    goto LABEL_23;
  v9 = a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    v10 = 1LL;
LABEL_22:
    RaidUnitStartDeviceBusy(v9, (__int64)a2, v10);
    goto LABEL_23;
  }
  if ( !RaidUnitCheckAndAcquirePoFx(a1) )
  {
LABEL_23:
    v15 = KfRaiseIrql(2u);
    RaUnitStartResetIo(*(_QWORD *)(a1 + 8), a2, (__int64)v19);
    KeLowerIrql(v15);
    return 259LL;
  }
  v11 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1488) + 88LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 2) != 0
    || (Pool = RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x4F506152u, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    v10 = 0LL;
    v9 = a1;
    goto LABEL_22;
  }
  Pool[2] = a2;
  v13 = *(_QWORD *)(a1 + 1488) + 72LL;
  v14 = *(_QWORD *)v13;
  if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
    __fastfail(3u);
  *Pool = v14;
  Pool[1] = v13;
  *(_QWORD *)(v14 + 8) = Pool;
  *(_QWORD *)v13 = Pool;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidUnitStartDeviceBusy(a1, (__int64)a2, 0LL);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  return 259LL;
}

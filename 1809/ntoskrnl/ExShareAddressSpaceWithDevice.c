/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x14031D550
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MmEnableProcessSvm @ 0x1402A56F0 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x14031DD68 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14031E0E0 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14031E3E0 (ExpSvmDereferenceDevice.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoQueryInterface @ 0x140756C90 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x1408D83AC (ExpAssignPasid.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r13
  int v8; // esi
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rdi
  unsigned int Asid; // edi
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  _RTL_BALANCED_NODE *v15; // rax
  signed __int8 v16; // cf
  _RTL_BALANCED_NODE *v17; // rdi
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  unsigned __int64 *PoolWithTag; // rax
  __int64 v22; // r8
  char v23; // si
  unsigned __int8 v24; // di
  unsigned __int64 *v25; // rcx
  unsigned __int64 *i; // rdx
  unsigned __int64 v27; // rax
  struct _KPRCB *v28; // rcx
  __int64 v29; // r8
  unsigned __int8 v30; // di
  unsigned __int64 v31; // rcx
  unsigned __int64 **v32; // rax
  struct _KPRCB *v33; // rcx
  unsigned __int64 v34; // [rsp+40h] [rbp-59h] BYREF
  PVOID P; // [rsp+48h] [rbp-51h] BYREF
  volatile signed __int64 *v36; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 *v37; // [rsp+58h] [rbp-41h]
  struct _KTHREAD *v38; // [rsp+68h] [rbp-31h]
  char v39[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v40; // [rsp+78h] [rbp-21h]
  void (__fastcall *v41)(__int64); // [rsp+88h] [rbp-11h]
  int v43; // [rsp+110h] [rbp+77h]
  int Interface; // [rsp+118h] [rbp+7Fh]

  *a2 = -1;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v38 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 72, 1, a1, v39);
  v8 = Interface;
  if ( Interface < 0 )
    goto LABEL_91;
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3], 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[3], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &Process[2].ActiveProcessors.Bitmap[3],
      v9,
      (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
  if ( v10 )
    BYTE2(v10[1].Left) |= 1u;
  Asid = Process[2].ActiveProcessors.Bitmap[1];
  if ( !Asid )
  {
    Asid = ExpAllocateAsid();
    if ( !Asid )
    {
      v8 = -1073741709;
      goto LABEL_73;
    }
    if ( !(unsigned int)ExpAssignPasid(Process) )
      Asid = Process[2].ActiveProcessors.Bitmap[1];
  }
  v43 = --Asid;
  v34 = Process[2].ActiveProcessors.Bitmap[2];
  if ( v34 )
  {
    v8 = Interface;
  }
  else
  {
    Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))HalIommuDispatch[2])(Asid, 0LL, &v34);
    v8 = Interface;
    if ( Interface < 0 )
      goto LABEL_73;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v36 = 0LL;
    v37 = &Process[2].ActiveProcessors.Bitmap[4];
    KxAcquireQueuedSpinLock((__int64)&v36, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4], v12);
    if ( Process[2].ActiveProcessors.Bitmap[2] )
    {
      v3 = v34;
      v34 = Process[2].ActiveProcessors.Bitmap[2];
    }
    else
    {
      Process[2].ActiveProcessors.Bitmap[2] = v34;
    }
    KxReleaseQueuedSpinLock(&v36);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( v3 )
      ((void (__fastcall *)(unsigned __int64))HalIommuDispatch[8])(v3);
  }
  v15 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v16 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v17 = v15;
  if ( v16 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v15, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v17 )
    BYTE2(v17[1].Left) |= 1u;
  v18 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
    goto LABEL_45;
  do
  {
    v19 = v18;
    v20 = v18;
    P = v18;
    if ( v18[2] == a1 )
      break;
    v18 = (__int64 *)*v18;
  }
  while ( v18 != &ExpSvmDevices );
  if ( v20[2] != a1 )
  {
    v20 = 0LL;
    P = 0LL;
    v19 = 0LL;
  }
  if ( !v19 )
  {
LABEL_45:
    v8 = ExpPrepareNewSvmDevice(a1, v34, v39, &P);
    Interface = v8;
  }
  else
  {
    ++*((_DWORD *)v20 + 6);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v8 < 0 )
  {
    Asid = v43;
    goto LABEL_73;
  }
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    v23 = 0;
    PoolWithTag[2] = (unsigned __int64)P;
    v24 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v36 = 0LL;
    v37 = &Process[2].ActiveProcessors.Bitmap[4];
    KxAcquireQueuedSpinLock((__int64)&v36, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4], v22);
    v25 = &Process[2].ActiveProcessors.Bitmap[5];
    for ( i = (unsigned __int64 *)Process[2].ActiveProcessors.Bitmap[5]; i != v25; i = (unsigned __int64 *)*i )
    {
      if ( *(_QWORD *)(i[2] + 16) == a1 )
      {
        v23 = 1;
        goto LABEL_62;
      }
    }
    v27 = *v25;
    if ( *(unsigned __int64 **)(*v25 + 8) != v25 )
      goto LABEL_89;
    *v2 = v27;
    v2[1] = (unsigned __int64)v25;
    *(_QWORD *)(v27 + 8) = v2;
    *v25 = (unsigned __int64)v2;
LABEL_62:
    KxReleaseQueuedSpinLock(&v36);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v28);
    }
    __writecr8(v24);
    if ( v23 )
    {
      ExFreePoolWithTag(v2, 0);
      Asid = v43;
      v2 = 0LL;
      v8 = Interface;
      goto LABEL_73;
    }
    MmEnableProcessSvm();
    v8 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))HalIommuDispatch[4])(v34, *((_QWORD *)P + 14));
    if ( v8 >= 0 )
      v8 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))HalIommuDispatch[5])(
             v34,
             Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v8 = -1073741670;
  }
  Asid = v43;
LABEL_73:
  v41(v40);
  if ( v8 < 0 )
  {
    if ( P )
      ExpSvmDereferenceDevice(P);
    if ( !v2 )
      goto LABEL_91;
    v30 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v36 = 0LL;
    v37 = &Process[2].ActiveProcessors.Bitmap[4];
    KxAcquireQueuedSpinLock((__int64)&v36, (volatile __int64 *)&Process[2].ActiveProcessors.Bitmap[4], v29);
    v31 = *v2;
    v32 = (unsigned __int64 **)v2[1];
    if ( *(unsigned __int64 **)(*v2 + 8) == v2 && *v32 == v2 )
    {
      *v32 = (unsigned __int64 *)v31;
      *(_QWORD *)(v31 + 8) = v32;
      KxReleaseQueuedSpinLock(&v36);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
      {
        v33 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v33);
      }
      __writecr8(v30);
      ExFreePoolWithTag(v2, 0);
      goto LABEL_91;
    }
LABEL_89:
    __fastfail(3u);
  }
  *a2 = Asid;
LABEL_91:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3]);
  KeAbPostRelease((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
  KiLeaveGuardedRegionUnsafe((__int64)v38);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return (unsigned int)v8;
}

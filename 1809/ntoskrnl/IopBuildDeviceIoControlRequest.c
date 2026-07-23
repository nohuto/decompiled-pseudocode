/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x1400DDD70
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x1400DDD10 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14015FD30 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopAssignBootDriveLetter @ 0x1409D75AC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1409FB08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FB274 (SbpStartLanman.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     IopProbeAndLockPages @ 0x1400E10EC (IopProbeAndLockPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  SIZE_T v10; // r14
  int v12; // r13d
  __int64 Irp; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  SIZE_T v18; // rdx
  PVOID v19; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int *p_SystemCallNumber; // rdi
  _QWORD *v22; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v24; // r14
  __int64 v25; // rax
  PVOID Pool_0; // rax
  int v28; // eax
  int v29; // r14d
  PMDL Mdl; // rax
  int v31; // edx
  struct _KPRCB *CurrentPrcb; // rcx

  v10 = a4;
  v12 = a2;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL, a10);
  v15 = Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v16 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v16 - 64) = Length;
  *(_DWORD *)(v16 - 56) = v10;
  *(_DWORD *)(v16 - 48) = a1;
  v17 = a1 & 3;
  if ( v17 )
  {
    if ( v17 > 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v16 - 40) = a3;
      goto LABEL_12;
    }
    if ( a3 )
    {
      Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, v10);
      *(_QWORD *)(v15 + 24) = Pool_0;
      if ( !Pool_0 )
        goto LABEL_30;
      memmove(Pool_0, a3, v10);
      v28 = 48;
      v29 = 0;
    }
    else
    {
      v29 = 0;
      v28 = 0;
    }
    *(_DWORD *)(v15 + 16) = v28;
    if ( !VirtualAddress )
      goto LABEL_12;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v15 + 8) = Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v29 = 1;
      IopProbeAndLockPages((_DWORD)Mdl, v31, v29, v12, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_12;
    }
    if ( a3 )
      ExFreePoolWithTag(*(PVOID *)(v15 + 24), 0);
LABEL_30:
    IoFreeIrp((PIRP)v15);
    return 0LL;
  }
  if ( (_DWORD)v10 || Length )
  {
    v18 = (unsigned int)v10;
    if ( (unsigned int)v10 <= Length )
      v18 = Length;
    v19 = IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, v18);
    *(_QWORD *)(v15 + 24) = v19;
    if ( v19 )
    {
      if ( a3 )
        memmove(v19, a3, v10);
      *(_DWORD *)(v15 + 16) = 48;
      *(_QWORD *)(v15 + 112) = VirtualAddress;
      if ( VirtualAddress )
        *(_DWORD *)(v15 + 16) = 112;
      goto LABEL_12;
    }
    goto LABEL_30;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_12:
  *(_QWORD *)(v15 + 72) = a9;
  *(_QWORD *)(v15 + 80) = a8;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v15 + 152) = CurrentThread;
  p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
  v22 = (_QWORD *)(v15 + 32);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v24 = (KSPIN_LOCK *)&CurrentThread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  v25 = *(_QWORD *)p_SystemCallNumber;
  if ( *(unsigned int **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber )
    __fastfail(3u);
  *v22 = v25;
  *(_QWORD *)(v15 + 40) = p_SystemCallNumber;
  *(_QWORD *)(v25 + 8) = v22;
  *(_QWORD *)p_SystemCallNumber = v22;
  KxReleaseSpinLock(v24);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(v15 + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(v15 + 152))
                                                               + 1) << 17);
  return v15;
}

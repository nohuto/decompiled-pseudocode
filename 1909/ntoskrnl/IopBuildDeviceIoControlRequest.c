/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x14009AF50
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140175DE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopCreateArcNamesCd @ 0x1409F5108 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1409F594C (IopAssignBootDriveLetter.c)
 * Callees:
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     IopProbeAndLockPages_0 @ 0x140127E30 (IopProbeAndLockPages_0.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildDeviceIoControlRequest(
        int a1,
        int a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        __int64 a8,
        __int64 a9)
{
  SIZE_T v9; // r14
  __int64 Irp; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // esi
  SIZE_T v17; // rdx
  PVOID v18; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int *p_SystemCallNumber; // rdi
  _QWORD *v21; // rsi
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v23; // r14
  __int64 v24; // rax
  PVOID Pool_0; // rax
  int v27; // r14d
  PMDL Mdl; // rax
  int v29; // edx
  struct _KPRCB *CurrentPrcb; // rcx

  v9 = a4;
  Irp = IopAllocateIrpExReturn();
  v14 = Irp;
  if ( !Irp )
    return 0LL;
  v15 = *(_QWORD *)(Irp + 184);
  if ( a7 )
    *(_BYTE *)(v15 - 72) = 15;
  else
    *(_BYTE *)(v15 - 72) = 14;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v9;
  *(_DWORD *)(v15 - 48) = a1;
  v16 = a1 & 3;
  if ( v16 )
  {
    if ( v16 > 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v15 - 40) = a3;
      goto LABEL_14;
    }
    if ( a3 )
    {
      Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, v9);
      *(_QWORD *)(v14 + 24) = Pool_0;
      if ( !Pool_0 )
        goto LABEL_34;
      memmove(Pool_0, a3, v9);
      *(_DWORD *)(v14 + 16) = 48;
      v27 = 0;
    }
    else
    {
      v27 = 0;
      *(_DWORD *)(Irp + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_14;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v14 + 8) = Mdl;
    if ( Mdl )
    {
      if ( v16 != 1 )
        v27 = 1;
      IopProbeAndLockPages_0((_DWORD)Mdl, v29, v27, a2, *(unsigned __int8 *)(v15 - 72));
      goto LABEL_14;
    }
    if ( a3 )
      ExFreePoolWithTag(*(PVOID *)(v14 + 24), 0);
LABEL_34:
    IoFreeIrp((PIRP)v14);
    return 0LL;
  }
  if ( (_DWORD)v9 || Length )
  {
    v17 = (unsigned int)v9;
    if ( (unsigned int)v9 <= Length )
      v17 = Length;
    v18 = IopVerifierExAllocatePool_0(NonPagedPoolNxCacheAligned, v17);
    *(_QWORD *)(v14 + 24) = v18;
    if ( v18 )
    {
      if ( a3 )
        memmove(v18, a3, v9);
      *(_DWORD *)(v14 + 16) = 48;
      *(_QWORD *)(v14 + 112) = VirtualAddress;
      if ( VirtualAddress )
        *(_DWORD *)(v14 + 16) = 112;
      goto LABEL_14;
    }
    goto LABEL_34;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_14:
  *(_QWORD *)(v14 + 72) = a9;
  *(_QWORD *)(v14 + 80) = a8;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v14 + 152) = CurrentThread;
  p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
  v21 = (_QWORD *)(v14 + 32);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v23 = (KSPIN_LOCK *)&CurrentThread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  v24 = *(_QWORD *)p_SystemCallNumber;
  if ( *(unsigned int **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber )
    __fastfail(3u);
  *v21 = v24;
  *(_QWORD *)(v14 + 40) = p_SystemCallNumber;
  *(_QWORD *)(v24 + 8) = v21;
  *(_QWORD *)p_SystemCallNumber = v21;
  KxReleaseSpinLock(v23);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  *(_DWORD *)(v14 + 16) = *(_DWORD *)(v14 + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(v14 + 152))
                                                               + 1) << 17);
  return v14;
}

/*
 * XREFs of IopQueueThreadIrp @ 0x1400BC360
 * Callers:
 *     IoPageReadEx @ 0x1400DE720 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA00 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140134FF4 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x140160DF0 (IoQueueThreadIrp.c)
 *     IopSynchronousCall @ 0x1405A2CE0 (IopSynchronousCall.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140661930 (IopGetFileInformation.c)
 *     IopBuildSynchronousFsdRequest @ 0x140662ED0 (IopBuildSynchronousFsdRequest.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     IopFilterResourceRequirementsCall @ 0x1406FBB10 (IopFilterResourceRequirementsCall.c)
 *     IoSetInformation @ 0x1407012A0 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x14081BDE0 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x14081C400 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x14081CBD0 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x14082291C (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14008CFD0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140290D28 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140290E38 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  __int64 result; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 152);
  v4 = (_QWORD *)(a1 + 32);
  v5 = (__int64 *)(v3 + 1648);
  v6 = (volatile signed __int32 *)(v3 + 1856);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v6);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v6, 0LL) )
    {
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = v14[5] - 1;
          v14[5] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v6, a2, a3);
    }
  }
  v10 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *v4 = v10;
  v4[1] = v5;
  *(_QWORD *)(v10 + 8) = v4;
  *v5 = (__int64)v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v6, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v17 = v12[5] - 1;
      v12[5] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

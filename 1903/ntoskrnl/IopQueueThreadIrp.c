/*
 * XREFs of IopQueueThreadIrp @ 0x14003BA80
 * Callers:
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x14015CA40 (IoQueueThreadIrp.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopGetFileInformation @ 0x140627E84 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406D0C80 (IopBuildSynchronousFsdRequest.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     IopFilterResourceRequirementsCall @ 0x140722700 (IopFilterResourceRequirementsCall.c)
 *     IoCancelFileOpen @ 0x140855E20 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x1408564B0 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x140856C30 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x14085CBD4 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A7878 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  __int64 *v4; // rdi
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  __int64 result; // rax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 152);
  v3 = (_QWORD *)(a1 + 32);
  v4 = (__int64 *)(v2 + 1664);
  v5 = (volatile signed __int32 *)(v2 + 1872);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v5);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = SchedulerAssist[5];
        SchedulerAssist[5] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v5, 0LL) )
    {
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v13[5] - 1;
          v13[5] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v5, a2);
    }
  }
  v9 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *v3 = v9;
  v3[1] = v4;
  *(_QWORD *)(v9 + 8) = v3;
  *v4 = (__int64)v3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v5, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v16 = v11[5] - 1;
      v11[5] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

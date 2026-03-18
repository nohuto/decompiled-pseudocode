/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1405D0200
 * Callers:
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140128F54 (ExCpuSetResourceManagerAccessCheck.c)
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     NtOpenProcessTokenEx @ 0x1405CFA00 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x140645340 (AlpcpCheckConnectionSecurity.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140665B8C (EtwpCheckProviderLoggingAccess.c)
 *     SeCreateAccessStateEx @ 0x140672F30 (SeCreateAccessStateEx.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140680A48 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140680BEC (ObpCaptureBoundaryDescriptor.c)
 *     CmpVEExecuteParseLogic @ 0x1406AD5E0 (CmpVEExecuteParseLogic.c)
 *     CmpIsSystemEntity @ 0x1406AD9C4 (CmpIsSystemEntity.c)
 *     ExpCheckWakeTimerAccess @ 0x140745EA8 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // r14
  unsigned __int64 *v7; // r14
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v10; // r15
  signed __int64 *p_Lock; // rsi

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v6 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v6);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
      }
      else
      {
        v6 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  SubjectContext->ClientToken = v6;
  v7 = &Process[1].Affinity.Bitmap[5];
  v8 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v8 )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v8 = (_QWORD *)ObFastReferenceObjectLocked(v7);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v10);
  }
  SubjectContext->PrimaryToken = v8;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}

/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1405D0700
 * Callers:
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140129974 (ExCpuSetResourceManagerAccessCheck.c)
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     NtOpenProcessTokenEx @ 0x1405CFF00 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x1405D0200 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     EtwpAccessCheck @ 0x1405D0FFC (EtwpAccessCheck.c)
 *     SeCreateAccessState @ 0x1405D3E00 (SeCreateAccessState.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x140658E90 (AlpcpCheckConnectionSecurity.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     SeCreateAccessStateEx @ 0x140678640 (SeCreateAccessStateEx.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140692FA0 (EtwpCheckProviderLoggingAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14069EFA8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14069F14C (ObpCaptureBoundaryDescriptor.c)
 *     CmpVEExecuteParseLogic @ 0x1406A3F90 (CmpVEExecuteParseLogic.c)
 *     CmpIsSystemEntity @ 0x1406A4374 (CmpIsSystemEntity.c)
 *     ExpCheckWakeTimerAccess @ 0x140747DA8 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
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

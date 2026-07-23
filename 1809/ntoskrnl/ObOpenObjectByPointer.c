/*
 * XREFs of ObOpenObjectByPointer @ 0x1406480E0
 * Callers:
 *     ExGetNextProcess @ 0x1405B3188 (ExGetNextProcess.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1405B87C0 (CmConvertHandleToKernelHandle.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PspCombineSecurityDomains @ 0x14061204C (PspCombineSecurityDomains.c)
 *     PsOpenThread @ 0x140612DF0 (PsOpenThread.c)
 *     PspCreateObjectHandle @ 0x140622C88 (PspCreateObjectHandle.c)
 *     PsOpenProcess @ 0x1406477E0 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x140647F20 (NtOpenProcessTokenEx.c)
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtCreateWorkerFactory @ 0x14068B3B0 (NtCreateWorkerFactory.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8754 (PiCMDuplicateRegistryHandle.c)
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7BE4 (PspOneDirectionSecurityDomainCombine.c)
 *     NtOpenPrivateNamespace @ 0x1406C3870 (NtOpenPrivateNamespace.c)
 *     EtwpOpenConsumer @ 0x1406C42D0 (EtwpOpenConsumer.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 *     IopInvalidateVolumesForDevice @ 0x1407061EC (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x14071A010 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407584BC (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x14075B090 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x14075FFE4 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140762124 (MmManagePartitionGetMemoryEvents.c)
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x14080F598 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x14080FD70 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1408625C0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x14087FD3C (TtmiOpenDefaultTerminal.c)
 *     NtGetNextThread @ 0x14088FBF0 (NtGetNextThread.c)
 *     SmKmFileInfoDuplicate @ 0x1408ADC48 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408BD358 (EtwpCapturePreviousRegistryData.c)
 *     sub_1408E23E8 @ 0x1408E23E8 (sub_1408E23E8.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400CB210 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  POBJECT_TYPE v9; // rdi
  void *v10; // r12
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *p_Lock; // r13
  _QWORD *v15; // r12
  ULONG_PTR v16; // rbx
  NTSTATUS v17; // ebx
  NTSTATUS v18; // edi
  signed __int64 *v19; // r13
  signed __int64 *BugCheckParameter2; // [rsp+68h] [rbp-210h]
  struct _KTHREAD *v22; // [rsp+70h] [rbp-208h]
  struct _KTHREAD *v23; // [rsp+70h] [rbp-208h]
  __int128 v24; // [rsp+78h] [rbp-200h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-1F0h]
  signed __int64 v26; // [rsp+90h] [rbp-1E8h]
  _QWORD v27[20]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v28[28]; // [rsp+140h] [rbp-138h] BYREF

  v9 = ObjectType;
  v10 = 0LL;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v9 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v9->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    else
    {
      if ( !PassedAccessState )
      {
        CurrentThread = KeGetCurrentThread();
        p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
        v26 = p_Lock[92];
        if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          BugCheckParameter2 = (signed __int64 *)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v10 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v10);
            DWORD2(v24) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          }
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegionThread((__int64)v22);
        }
        *(_QWORD *)&v24 = v10;
        v15 = p_Lock + 107;
        v16 = ObFastReferenceObject(p_Lock + 107);
        if ( !v16 )
        {
          v23 = KeGetCurrentThread();
          --v23->KernelApcDisable;
          v19 = p_Lock + 91;
          ExAcquirePushLockSharedEx((ULONG_PTR)v19, 0LL);
          v16 = ObFastReferenceObjectLocked(v15);
          if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v19);
          KeAbPostRelease((ULONG_PTR)v19);
          KeLeaveCriticalRegionThread((__int64)v23);
        }
        v25 = v16;
        if ( SeTokenLeakTracking )
        {
          if ( v16 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 1144) + 284LL));
            if ( v16 == SepTokenLeakToken )
              __debugbreak();
          }
          if ( (_QWORD)v24 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 1144) + 284LL));
            if ( (_QWORD)v24 == SepTokenLeakToken )
              __debugbreak();
          }
        }
        v17 = SepCreateAccessStateFromSubjectContext(&v24, v27, v28, DesiredAccess, &v9->TypeInfo.GenericMapping);
        if ( v17 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v17;
        }
        PassedAccessState = (PACCESS_STATE)v27;
      }
      v18 = ObpCreateHandle(
              1,
              (char *)Object,
              0,
              PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0,
              0LL,
              (unsigned __int64 *)Handle);
      if ( v18 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v27 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v18;
    }
  }
  return result;
}

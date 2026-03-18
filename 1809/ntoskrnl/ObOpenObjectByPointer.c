/*
 * XREFs of ObOpenObjectByPointer @ 0x1406470E0
 * Callers:
 *     ExGetNextProcess @ 0x1405B2188 (ExGetNextProcess.c)
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1405B77C0 (CmConvertHandleToKernelHandle.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PspCombineSecurityDomains @ 0x14061104C (PspCombineSecurityDomains.c)
 *     PsOpenThread @ 0x140611DF0 (PsOpenThread.c)
 *     PspCreateObjectHandle @ 0x140621C88 (PspCreateObjectHandle.c)
 *     PsOpenProcess @ 0x1406467E0 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x140646F20 (NtOpenProcessTokenEx.c)
 *     NtOpenThreadTokenEx @ 0x1406488A0 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtCreateWorkerFactory @ 0x14068A210 (NtCreateWorkerFactory.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A74D4 (PiCMDuplicateRegistryHandle.c)
 *     WmipIoControl @ 0x1406A9E00 (WmipIoControl.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B6964 (PspOneDirectionSecurityDomainCombine.c)
 *     NtOpenPrivateNamespace @ 0x1406C25F0 (NtOpenPrivateNamespace.c)
 *     EtwpOpenConsumer @ 0x1406C3050 (EtwpOpenConsumer.c)
 *     ObpSetDeviceMap @ 0x1406C699C (ObpSetDeviceMap.c)
 *     IopInvalidateVolumesForDevice @ 0x140704F6C (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x140718D90 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407572EC (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x140759EC0 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x14075EE14 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140760F54 (MmManagePartitionGetMemoryEvents.c)
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x14080E3B8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x14080EB90 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x140861380 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x14087EAFC (TtmiOpenDefaultTerminal.c)
 *     NtGetNextThread @ 0x14088E9B0 (NtGetNextThread.c)
 *     SmKmFileInfoDuplicate @ 0x1408ACA08 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408BC0B8 (EtwpCapturePreviousRegistryData.c)
 *     sub_1408E1148 @ 0x1408E1148 (sub_1408E1148.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004D710 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400CB110 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
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

/*
 * XREFs of ObOpenObjectByPointer @ 0x1405D0890
 * Callers:
 *     PsOpenProcess @ 0x1405D0200 (PsOpenProcess.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     PspCreateObjectHandle @ 0x1405E9D9C (PspCreateObjectHandle.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     ExGetNextProcess @ 0x1406391C8 (ExGetNextProcess.c)
 *     CmLoadDifferencingKey @ 0x14063BC6C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14063D520 (CmConvertHandleToKernelHandle.c)
 *     PsOpenThread @ 0x140678030 (PsOpenThread.c)
 *     PspCombineSecurityDomains @ 0x140679448 (PspCombineSecurityDomains.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 *     WmipIoControl @ 0x140695760 (WmipIoControl.c)
 *     NtOpenPrivateNamespace @ 0x14069FD90 (NtOpenPrivateNamespace.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B8720 (PspOneDirectionSecurityDomainCombine.c)
 *     EtwpOpenConsumer @ 0x1406CB40C (EtwpOpenConsumer.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406CD4CC (PiCMDuplicateRegistryHandle.c)
 *     NtGetNextThread @ 0x1406E2EF0 (NtGetNextThread.c)
 *     ObpSetDeviceMap @ 0x1406EB608 (ObpSetDeviceMap.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407584C4 (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x140782F9C (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x140788EB0 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x14078A508 (MmManagePartitionGetMemoryEvents.c)
 *     VrpPostEnumerateKey @ 0x140843678 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x1408472F8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140847B28 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x1408498A0 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x14089D610 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1408BBED0 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x1408E9210 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408F86AC (EtwpCapturePreviousRegistryData.c)
 *     sub_14091DCAC @ 0x14091DCAC (sub_14091DCAC.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1400063F0 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14003ABA0 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
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
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  NTSTATUS v14; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-1F8h] BYREF
  _QWORD v16[20]; // [rsp+80h] [rbp-1D8h] BYREF
  _QWORD v17[28]; // [rsp+120h] [rbp-138h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  v11 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v11 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v11->TypeInfo.InvalidAttributes) != 0
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
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
        v14 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v16,
                v17,
                DesiredAccess,
                &v11->TypeInfo.GenericMapping);
        if ( v14 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v14;
        }
        PassedAccessState = (PACCESS_STATE)v16;
      }
      v13 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, AccessMode, 0LL, 0, 0LL, Handle);
      if ( v13 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v16 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v13;
    }
  }
  return result;
}

/*
 * XREFs of ObOpenObjectByPointer @ 0x1405D0390
 * Callers:
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     NtOpenThreadTokenEx @ 0x1405D5B10 (NtOpenThreadTokenEx.c)
 *     PspCreateObjectHandle @ 0x1405E95CC (PspCreateObjectHandle.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     ExGetNextProcess @ 0x140635F68 (ExGetNextProcess.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14063A490 (CmConvertHandleToKernelHandle.c)
 *     WmipIoControl @ 0x140668340 (WmipIoControl.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406722F4 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenThread @ 0x140672920 (PsOpenThread.c)
 *     PspCombineSecurityDomains @ 0x140673D38 (PspCombineSecurityDomains.c)
 *     NtOpenPrivateNamespace @ 0x140681830 (NtOpenPrivateNamespace.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     EtwpOpenConsumer @ 0x1406CC5DC (EtwpOpenConsumer.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406CE72C (PiCMDuplicateRegistryHandle.c)
 *     NtGetNextThread @ 0x1406E1870 (NtGetNextThread.c)
 *     ObpSetDeviceMap @ 0x1406EA410 (ObpSetDeviceMap.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x140741EC0 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x140780C34 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x140786B50 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407880A8 (MmManagePartitionGetMemoryEvents.c)
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x140847BF0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140848428 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x14089DDF0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1408BC600 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x1408E9908 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408F8CC8 (EtwpCapturePreviousRegistryData.c)
 *     sub_14091E24C @ 0x14091E24C (sub_14091E24C.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x140006360 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14003AE60 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
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

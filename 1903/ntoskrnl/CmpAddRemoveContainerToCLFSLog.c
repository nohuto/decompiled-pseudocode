/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x1406984FC
 * Callers:
 *     CmpStartCLFSLog @ 0x140698B48 (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x14083212C (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401A5EB0 (sprintf_s.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsDisableImpersonation @ 0x1405D6070 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1405D61A0 (PsRestoreImpersonation.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall CmpAddRemoveContainerToCLFSLog(
        PLOG_FILE_OBJECT plfoLog,
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a3,
        PCUNICODE_STRING a4,
        PCUNICODE_STRING Sourcea,
        int a6,
        PULONGLONG pcbContainer)
{
  NTSTATUS v11; // edi
  BOOLEAN v12; // bl
  UNICODE_STRING Destination; // [rsp+20h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  _STRING SourceString; // [rsp+40h] [rbp-69h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+50h] [rbp-59h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-49h] BYREF
  char DstBuf[16]; // [rsp+90h] [rbp-19h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ImpersonationState.Token = 0LL;
  *(_QWORD *)&ImpersonationState.CopyOnOpen = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  RtlInitUnicodeString(&DestinationString, 0LL);
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + Sourcea->Length + 34;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v11 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v11 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v12 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    v11 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    KeUnstackDetachProcess(&ApcState);
    if ( v12 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v11;
}

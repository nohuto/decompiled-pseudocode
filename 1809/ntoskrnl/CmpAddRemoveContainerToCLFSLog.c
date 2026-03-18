/*
 * XREFs of CmpAddRemoveContainerToCLFSLog @ 0x140706594
 * Callers:
 *     CmpStartCLFSLog @ 0x14070E7AC (CmpStartCLFSLog.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407F8C58 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EED70 (RtlInitAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F51B0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     sprintf_s @ 0x14019B620 (sprintf_s.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     PsRestoreImpersonation @ 0x140648D30 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x140648E90 (PsDisableImpersonation.c)
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
  __int16 v11; // cx
  NTSTATUS v12; // edi
  BOOLEAN v13; // bl
  UNICODE_STRING Destination; // [rsp+20h] [rbp-91h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-81h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-71h] BYREF
  struct _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+50h] [rbp-61h] BYREF
  char v19[48]; // [rsp+60h] [rbp-51h] BYREF
  char DstBuf[16]; // [rsp+90h] [rbp-21h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = Sourcea->Length + 34;
  Destination.Length = 0;
  Destination.MaximumLength = Source->Length + a3->Length + a4->Length + v11;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a3);
  RtlAppendUnicodeStringToString(&Destination, a4);
  sprintf_s(DstBuf, 0x10uLL, ".%u", a6);
  RtlInitAnsiString(&SourceString, DstBuf);
  v12 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
  if ( v12 >= 0 && DestinationString.Length <= 0x20u )
  {
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, Sourcea);
    v13 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v19);
    v12 = ClfsAddLogContainer(plfoLog, pcbContainer, &Destination);
    KiUnstackDetachProcess((__int64)v19, 0LL);
    if ( v13 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  }
  RtlFreeAnsiString(&DestinationString);
  ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v12;
}

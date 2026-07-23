/*
 * XREFs of CmpStartCLFSLog @ 0x140698B48
 * Callers:
 *     CmpStartRMLog @ 0x1406993A0 (CmpStartRMLog.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsDisableImpersonation @ 0x1405D6070 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1405D61A0 (PsRestoreImpersonation.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 */

__int64 __fastcall CmpStartCLFSLog(
        PCUNICODE_STRING Source,
        PCUNICODE_STRING a2,
        __int64 a3,
        void *a4,
        int a5,
        unsigned __int64 *a6,
        int *a7,
        FILE_OBJECT **a8,
        PVOID *a9)
{
  BOOLEAN v12; // r13
  NTSTATUS LogFileInformation; // ebx
  int TotalContainers; // edi
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v17; // rsi
  FILE_OBJECT *pplfoLog; // [rsp+60h] [rbp-79h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-71h] BYREF
  ULONG pcbInfoBuffer; // [rsp+78h] [rbp-61h] BYREF
  PVOID ppvMarshalContext; // [rsp+80h] [rbp-59h] BYREF
  PULONGLONG pcbContainer; // [rsp+88h] [rbp-51h]
  int *v23; // [rsp+90h] [rbp-49h]
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-31h] BYREF

  pcbContainer = a6;
  v23 = a7;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  ImpersonationState.Token = 0LL;
  *(_QWORD *)&ImpersonationState.CopyOnOpen = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *a8 = 0LL;
  *a9 = 0LL;
  Destination.MaximumLength = Source->Length + 26 + a2->Length;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20204D43u);
  if ( !Destination.Buffer )
    return 3221225626LL;
  *a8 = 0LL;
  *a9 = 0LL;
  RtlAppendUnicodeStringToString(&Destination, &CmpLogPrefix);
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeStringToString(&Destination, a2);
  RtlAppendUnicodeStringToString(&Destination, &CmpLogExt);
  pplfoLog = 0LL;
  ppvMarshalContext = 0LL;
  v12 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 1u, 8u, 0, 0x200u, 0LL, 0);
  if ( LogFileInformation >= 0 )
  {
    pcbInfoBuffer = 120;
    PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      LogFileInformation = ClfsGetLogFileInformation(pplfoLog, PoolWithTag, &pcbInfoBuffer);
      if ( LogFileInformation < 0 )
      {
        ExFreePoolWithTag(v17, 0);
      }
      else
      {
        TotalContainers = v17->TotalContainers;
        ExFreePoolWithTag(v17, 0);
LABEL_8:
        LogFileInformation = ClfsCreateMarshallingArea(
                               pplfoLog,
                               PagedPool,
                               0LL,
                               0LL,
                               0x1000u,
                               2u,
                               0x14u,
                               &ppvMarshalContext);
        if ( LogFileInformation >= 0 )
        {
          *v23 = TotalContainers;
          *a8 = pplfoLog;
          *a9 = ppvMarshalContext;
        }
      }
    }
    else
    {
      LogFileInformation = -1073741670;
    }
  }
  else if ( LogFileInformation == -1073741772 )
  {
    LogFileInformation = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0010000, 0, a4, 2u, 8u, 0, 0x200u, 0LL, 0);
    if ( LogFileInformation >= 0 )
    {
      TotalContainers = 0;
      while ( 1 )
      {
        LogFileInformation = CmpAddRemoveContainerToCLFSLog(
                               pplfoLog,
                               Source,
                               a2,
                               &CmpLogExt,
                               &CmpContainerSuffix,
                               TotalContainers,
                               pcbContainer);
        if ( LogFileInformation < 0 )
          break;
        if ( (unsigned int)++TotalContainers >= 3 )
          goto LABEL_8;
      }
    }
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v12 )
    PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( LogFileInformation < 0 )
  {
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
  }
  return (unsigned int)LogFileInformation;
}

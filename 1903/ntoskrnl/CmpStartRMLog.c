/*
 * XREFs of CmpStartRMLog @ 0x1406993A0
 * Callers:
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x14069A0B0 (CmpStartRMLogs.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x1406986B8 (CmpQueryNameString.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1406987C4 (CmpQueryFileSecurityDescriptor.c)
 *     CmpStartCLFSLog @ 0x140698B48 (CmpStartCLFSLog.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     CmpRmAnalysisPhase @ 0x1408324AC (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x1408326E0 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x1408328AC (CmpRmUnDoPhase.c)
 */

__int64 __fastcall CmpStartRMLog(char *a1, _OWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  CLFS_INFORMATION *PoolWithTag; // r15
  bool v7; // zf
  int started; // ebx
  __int64 v9; // rax
  unsigned __int64 *v10; // r12
  __int64 v11; // r8
  PVOID *v12; // r14
  FILE_OBJECT **v13; // r13
  int *v14; // rax
  CLFS_INFORMATION *v15; // rax
  CLFS_INFORMATION *v16; // rbx
  FILE_OBJECT *v17; // rcx
  PVOID v18; // rcx
  NTSTATUS v19; // eax
  PVOID v21; // rcx
  NTSTATUS v22; // ecx
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v24; // rbx
  FILE_OBJECT *v25; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn1; // [rsp+50h] [rbp-79h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-71h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-61h] BYREF
  ULONG pcbInfoBuffer; // [rsp+78h] [rbp-51h] BYREF
  ULONG pcbRestartBuffer; // [rsp+7Ch] [rbp-4Dh] BYREF
  ULONG pcbReadBuffer; // [rsp+80h] [rbp-49h] BYREF
  PVOID pvReadContext; // [rsp+88h] [rbp-41h] BYREF
  PCUNICODE_STRING Source; // [rsp+90h] [rbp-39h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-31h] BYREF
  CLFS_LSN plsn; // [rsp+A8h] [rbp-21h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+B0h] [rbp-19h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+B8h] [rbp-11h] BYREF
  CLFS_LSN plsnRecord; // [rsp+C0h] [rbp-9h] BYREF
  CLS_LSN pvRestartBuffer; // [rsp+C8h] [rbp-1h] BYREF
  PVOID ppvRestartBuffer; // [rsp+D0h] [rbp+7h] BYREF
  CLFS_LSN plsnFirst; // [rsp+D8h] [rbp+Fh] BYREF
  PVOID ppvReadBuffer[8]; // [rsp+E0h] [rbp+17h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+130h] [rbp+67h] BYREF
  char v46; // [rsp+140h] [rbp+77h]
  ULONG pcbWritten; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0;
  v46 = 1;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn1.ullOffset = 0LL;
  pvRestartBuffer.ullOffset = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  --CurrentThread->KernelApcDisable;
  GuidString.Buffer = 0LL;
  P = 0LL;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)a1 + 16), 1u);
  if ( (*((_DWORD *)a1 + 26) & 1) != 0 )
    goto LABEL_47;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  if ( !PoolWithTag )
  {
    v2 = -1073741670;
LABEL_47:
    ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v2;
  }
  *((_DWORD *)a1 + 26) |= 2u;
  v7 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v7 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_140424FF0 + 64) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(qword_140424FF0 + 64) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_27;
    v10 = (unsigned __int64 *)(a1 + 72);
    *((_QWORD *)a1 + 9) = 5242880LL;
    v9 = qword_140424FF0;
  }
  else
  {
    started = CmpQueryNameString(*(void **)(*((_QWORD *)a1 + 10) + 1536LL), &UnicodeString);
    if ( started < 0 )
      goto LABEL_27;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
    started = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL), &GuidString, 1u);
    if ( started < 0 )
      goto LABEL_27;
    v9 = *((_QWORD *)a1 + 10);
    v10 = (unsigned __int64 *)(a1 + 72);
    *((_QWORD *)a1 + 9) = 0x100000LL;
  }
  started = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v9 + 1536), &P);
  if ( started < 0 )
  {
    P = 0LL;
  }
  else
  {
    v12 = (PVOID *)(a1 + 96);
    v13 = (FILE_OBJECT **)(a1 + 88);
    v14 = (int *)(a1 + 68);
    while ( 1 )
    {
      started = CmpStartCLFSLog(Source, &GuidString, v11, P, ppvReadContext, v10, v14, v13, (PVOID *)a1 + 12);
      if ( started < 0 )
        break;
      pcbInfoBuffer = 120;
      v15 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
      v16 = v15;
      if ( v15 )
      {
        ClfsGetLogFileInformation(*v13, v15, &pcbInfoBuffer);
        ExFreePoolWithTag(v16, 0);
      }
      v17 = *v13;
      pcbWritten = 120;
      started = ClfsGetLogFileInformation(v17, PoolWithTag, &pcbWritten);
      *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
      if ( started < 0 )
        break;
      if ( ClfsReadRestartArea(*v12, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
        || !ppvRestartBuffer )
      {
        plsn1 = PoolWithTag->BaseLsn;
      }
      else
      {
        plsn1 = *(CLFS_LSN *)ppvRestartBuffer;
        if ( ClfsLsnEqual(&plsn, &plsn1) )
        {
          v21 = *v12;
          plsnFirst = plsn1;
          pvReadContext = 0LL;
          plsnUndoNext.ullOffset = 0LL;
          plsnPrevious.ullOffset = 0LL;
          plsnRecord.ullOffset = 0LL;
          peRecordType = 0;
          if ( ClfsReadLogRecord(
                 v21,
                 &plsnFirst,
                 ClfsContextForward,
                 ppvReadBuffer,
                 &pcbReadBuffer,
                 &peRecordType,
                 &plsnUndoNext,
                 &plsnPrevious,
                 &pvReadContext) >= 0 )
          {
            peRecordType = 1;
            v22 = ClfsReadNextLogRecord(
                    pvReadContext,
                    ppvReadBuffer,
                    &pcbReadBuffer,
                    &peRecordType,
                    0LL,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &plsnRecord);
            if ( v22 == -1073741807 )
            {
              LastLsn = PoolWithTag->LastLsn;
            }
            else
            {
              LastLsn = plsn1;
              if ( v22 >= 0 )
                LastLsn = plsnRecord;
            }
            plsn1 = LastLsn;
          }
          if ( pvReadContext )
            ClfsTerminateReadLog(pvReadContext);
        }
      }
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      if ( !ClfsLsnEqual(&plsn1, &PoolWithTag->LastLsn) && (*((_DWORD *)a1 + 26) & 4) != 0 )
      {
        v24 = plsn1;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn1.ullOffset) >= 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v24.ullOffset);
          CmpRmUnDoPhase(a1);
        }
        *((_DWORD *)a1 + 26) &= ~4u;
      }
      v18 = *v12;
      pvRestartBuffer = PoolWithTag->LastLsn;
      v19 = ClfsWriteRestartArea(v18, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
      started = v19;
      if ( !v46 || v19 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
        break;
      v46 = 0;
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      v13 = (FILE_OBJECT **)(a1 + 88);
      ClfsDeleteLogByPointer(*((PLOG_FILE_OBJECT *)a1 + 11));
      ClfsDeleteMarshallingArea(*v12);
      v25 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
      *v12 = 0LL;
      ClfsCloseLogFileObject(v25);
      v14 = (int *)(a1 + 68);
      *((_QWORD *)a1 + 11) = 0LL;
      *((_DWORD *)a1 + 17) = 0;
    }
    if ( pvCursorContext )
      ClfsTerminateReadLog(pvCursorContext);
    if ( started < 0 )
    {
      if ( *v12 )
        *v12 = 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 26) = *((_DWORD *)a1 + 26) & 0xFFFFFFFC | 1;
    }
  }
LABEL_27:
  ExReleaseResourceLite(*((PERESOURCE *)a1 + 16));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)started;
}

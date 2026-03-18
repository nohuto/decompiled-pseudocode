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
  __int64 v6; // r8
  CLFS_INFORMATION *PoolWithTag; // r15
  bool v8; // zf
  int started; // ebx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 *v12; // r12
  __int64 v13; // r8
  PVOID *v14; // r14
  FILE_OBJECT **v15; // r13
  int *v16; // rax
  CLFS_INFORMATION *v17; // rax
  CLFS_INFORMATION *v18; // rbx
  FILE_OBJECT *v19; // rcx
  PVOID v20; // rcx
  NTSTATUS v21; // eax
  PVOID v23; // rcx
  NTSTATUS v24; // ecx
  CLFS_LSN LastLsn; // rax
  CLFS_LSN v26; // rbx
  FILE_OBJECT *v27; // rcx
  int ppvReadContext; // [rsp+20h] [rbp-A9h]
  CLFS_LSN plsn1; // [rsp+50h] [rbp-79h] BYREF
  PVOID pvCursorContext; // [rsp+58h] [rbp-71h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING v32; // [rsp+68h] [rbp-61h] BYREF
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
  char v48; // [rsp+140h] [rbp+77h]
  ULONG pcbWritten; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0;
  v48 = 1;
  pcbRestartBuffer = 0;
  plsn.ullOffset = 0LL;
  pvCursorContext = 0LL;
  plsn1.ullOffset = 0LL;
  pvRestartBuffer.ullOffset = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v32.Length = 0LL;
  --CurrentThread->KernelApcDisable;
  v32.Buffer = 0LL;
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
  v8 = a1 == CmRmSystem;
  *((_QWORD *)a1 + 15) = CLFS_LSN_INVALID_EXT;
  if ( v8 )
  {
    Source = &CmpLogPath;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(qword_140424FF0 + 64) + 128LL) = *a2;
    LOBYTE(v6) = 1;
    started = RtlStringFromGUIDEx(*(_QWORD *)(qword_140424FF0 + 64) + 128LL, &v32, v6);
    if ( started < 0 )
      goto LABEL_27;
    v12 = (unsigned __int64 *)(a1 + 72);
    *((_QWORD *)a1 + 9) = 5242880LL;
    v11 = qword_140424FF0;
  }
  else
  {
    started = CmpQueryNameString(*(void **)(*((_QWORD *)a1 + 10) + 1536LL), &UnicodeString);
    if ( started < 0 )
      goto LABEL_27;
    Source = &UnicodeString;
    if ( a2 )
      *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL) = *a2;
    LOBYTE(v10) = 1;
    started = RtlStringFromGUIDEx(*(_QWORD *)(*((_QWORD *)a1 + 10) + 64LL) + 128LL, &v32, v10);
    if ( started < 0 )
      goto LABEL_27;
    v11 = *((_QWORD *)a1 + 10);
    v12 = (unsigned __int64 *)(a1 + 72);
    *((_QWORD *)a1 + 9) = 0x100000LL;
  }
  started = CmpQueryFileSecurityDescriptor(*(HANDLE *)(v11 + 1536), &P);
  if ( started < 0 )
  {
    P = 0LL;
  }
  else
  {
    v14 = (PVOID *)(a1 + 96);
    v15 = (FILE_OBJECT **)(a1 + 88);
    v16 = (int *)(a1 + 68);
    while ( 1 )
    {
      started = CmpStartCLFSLog(Source, &v32, v13, P, ppvReadContext, v12, v16, v15, (PVOID *)a1 + 12);
      if ( started < 0 )
        break;
      pcbInfoBuffer = 120;
      v17 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
      v18 = v17;
      if ( v17 )
      {
        ClfsGetLogFileInformation(*v15, v17, &pcbInfoBuffer);
        ExFreePoolWithTag(v18, 0);
      }
      v19 = *v15;
      pcbWritten = 120;
      started = ClfsGetLogFileInformation(v19, PoolWithTag, &pcbWritten);
      *((_QWORD *)a1 + 15) = PoolWithTag->BaseLsn.ullOffset;
      if ( started < 0 )
        break;
      if ( ClfsReadRestartArea(*v14, &ppvRestartBuffer, &pcbRestartBuffer, &plsn, &pvCursorContext) == 1075445772
        || !ppvRestartBuffer )
      {
        plsn1 = PoolWithTag->BaseLsn;
      }
      else
      {
        plsn1 = *(CLFS_LSN *)ppvRestartBuffer;
        if ( ClfsLsnEqual(&plsn, &plsn1) )
        {
          v23 = *v14;
          plsnFirst = plsn1;
          pvReadContext = 0LL;
          plsnUndoNext.ullOffset = 0LL;
          plsnPrevious.ullOffset = 0LL;
          plsnRecord.ullOffset = 0LL;
          peRecordType = 0;
          if ( ClfsReadLogRecord(
                 v23,
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
            v24 = ClfsReadNextLogRecord(
                    pvReadContext,
                    ppvReadBuffer,
                    &pcbReadBuffer,
                    &peRecordType,
                    0LL,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &plsnRecord);
            if ( v24 == -1073741807 )
            {
              LastLsn = PoolWithTag->LastLsn;
            }
            else
            {
              LastLsn = plsn1;
              if ( v24 >= 0 )
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
        v26 = plsn1;
        if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))CmpRmAnalysisPhase)(a1, (CLFS_LSN)plsn1.ullOffset) >= 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD))CmpRmReDoPhase)(a1, (CLFS_LSN)v26.ullOffset);
          CmpRmUnDoPhase(a1);
        }
        *((_DWORD *)a1 + 26) &= ~4u;
      }
      v20 = *v14;
      pvRestartBuffer = PoolWithTag->LastLsn;
      v21 = ClfsWriteRestartArea(v20, &pvRestartBuffer, 8u, 0LL, 0, &pcbWritten, 0LL);
      started = v21;
      if ( !v48 || v21 != -1072037859 && *((_DWORD *)a1 + 17) <= 0xAu )
        break;
      v48 = 0;
      if ( pvCursorContext )
      {
        ClfsTerminateReadLog(pvCursorContext);
        pvCursorContext = 0LL;
      }
      v15 = (FILE_OBJECT **)(a1 + 88);
      ClfsDeleteLogByPointer(*((PLOG_FILE_OBJECT *)a1 + 11));
      ClfsDeleteMarshallingArea(*v14);
      v27 = (FILE_OBJECT *)*((_QWORD *)a1 + 11);
      *v14 = 0LL;
      ClfsCloseLogFileObject(v27);
      v16 = (int *)(a1 + 68);
      *((_QWORD *)a1 + 11) = 0LL;
      *((_DWORD *)a1 + 17) = 0;
    }
    if ( pvCursorContext )
      ClfsTerminateReadLog(pvCursorContext);
    if ( started < 0 )
    {
      if ( *v14 )
        *v14 = 0LL;
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
  if ( v32.Buffer )
    RtlFreeAnsiString(&v32);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)started;
}

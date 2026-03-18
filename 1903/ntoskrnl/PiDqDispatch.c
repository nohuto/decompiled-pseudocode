/*
 * XREFs of PiDqDispatch @ 0x1405B6520
 * Callers:
 *     PiDaDispatch @ 0x1406D19E0 (PiDaDispatch.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140002270 (IoIs32bitProcess.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     wcscmp @ 0x1401A1F50 (wcscmp.c)
 *     PiDqIrpQueryGetResult @ 0x1405B58F4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1405B5F1C (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqQueryRelease @ 0x1405B5F90 (PiDqQueryRelease.c)
 *     PiDqQueryGetObjectManager @ 0x1405B6174 (PiDqQueryGetObjectManager.c)
 *     PiDqQueryUnlock @ 0x1405B66FC (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x1405B6724 (PiDqQueryLock.c)
 *     PiDqQueryCreate @ 0x1405B6750 (PiDqQueryCreate.c)
 *     PiDqIrpQueryCreate @ 0x1405B69F8 (PiDqIrpQueryCreate.c)
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 */

__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // edi
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  __int64 FsContext2; // rbx
  unsigned int LowPart; // eax
  const wchar_t *Buffer; // rbx
  __int64 v13; // rcx
  IRP *v14; // rdi
  struct _ERESOURCE *ObjectManager; // rbp
  __int64 v16; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = (__int64)FileObject->FsContext2;
  if ( CurrentStackLocation->MajorFunction )
  {
    if ( MajorFunction != 14 )
    {
      if ( MajorFunction == 2 )
      {
        if ( FsContext2 )
        {
          PiDqQueryRelease(FileObject->FsContext2);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
      }
      else
      {
        if ( MajorFunction != 18 )
          return Status;
        if ( FsContext2 )
        {
          v14 = 0LL;
          ObjectManager = 0LL;
          PiDqQueryLock(FileObject->FsContext2);
          if ( (*(_DWORD *)(FsContext2 + 216) & 4) != 0 )
            ObjectManager = PiDqQueryGetObjectManager(FsContext2);
          PiDqQueryUnlock(FsContext2);
          if ( ObjectManager )
            PiDqObjectManagerUnregisterQuery((__int64)ObjectManager, (__int64 *)FsContext2);
          PiDqQueryLock(FsContext2);
          v16 = *(_QWORD *)(FsContext2 + 176);
          *(_DWORD *)(FsContext2 + 216) |= 8u;
          if ( v16 && _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL) )
          {
            v14 = *(IRP **)(FsContext2 + 176);
            *(_QWORD *)(FsContext2 + 176) = 0LL;
          }
          PiDqQueryUnlock(FsContext2);
          if ( v14 )
          {
            v14->IoStatus.Information = 0LL;
            v14->IoStatus.Status = -1073741536;
            IofCompleteRequest(v14, 0);
          }
        }
      }
      Status = 0;
      a2->IoStatus.Status = 0;
      goto LABEL_7;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 4653056 )
      return (unsigned int)PiDqIrpQueryCreate(a2);
    if ( LowPart > 0x470006 )
    {
      if ( LowPart <= 0x470008 )
        return (unsigned int)PiDqIrpQueryGetResult((__int64)a2);
      if ( LowPart == 4653068 )
        return (unsigned int)PiDqIrpPropertySet(a2);
    }
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
  }
  else
  {
    Buffer = FileObject->FileName.Buffer;
    Status = 0;
    if ( !wcscmp(L"\\Dev\\Query", Buffer) )
    {
      LOBYTE(v13) = IoIs32bitProcess(a2) == 0;
      Status = PiDqQueryCreate(v13, p_FsContext2);
    }
    else if ( !wcscmp(L"\\Dev\\NoState", Buffer) )
    {
      *p_FsContext2 = 0LL;
    }
    else
    {
      Status = -1073741811;
    }
    a2->IoStatus.Status = Status;
  }
LABEL_7:
  IofCompleteRequest(a2, 0);
  return Status;
}

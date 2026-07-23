/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x140815CE0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x14001C5F0 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x14001C610 (IoGetTopLevelIrp.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CcZeroData @ 0x1400E0CA0 (CcZeroData.c)
 *     CcPrepareMdlWrite @ 0x1400E1AC0 (CcPrepareMdlWrite.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v7; // r12
  char v9; // r13
  bool v10; // di
  char *FsContext; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r9
  char v15; // dl
  LARGE_INTEGER v16; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  LONGLONG v19; // rcx
  struct _ERESOURCE *v20; // rcx
  LONGLONG v21; // rax
  struct _ERESOURCE *v22; // rcx
  struct _ERESOURCE *v23; // rcx
  BOOLEAN v24; // [rsp+50h] [rbp-68h]
  bool v25; // [rsp+51h] [rbp-67h]
  LONGLONG v26; // [rsp+58h] [rbp-60h]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h]
  __int64 v29; // [rsp+70h] [rbp-48h]
  char *v30; // [rsp+78h] [rbp-40h]

  v7 = Length;
  v28 = 0LL;
  v29 = 0LL;
  v24 = 1;
  v9 = 0;
  v10 = FileOffset->QuadPart == -1;
  v25 = v10;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, v7, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !(_DWORD)v7 )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v30 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v10 || v7 + FileOffset->QuadPart > *((_QWORD *)FsContext + 5) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 1;
  }
  if ( v10 )
    v16 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v16 = *FileOffset;
  v17 = v16.QuadPart + v7;
  v26 = v16.QuadPart + v7;
  EndOffset = v16;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_48;
  v18 = FsContext[5];
  if ( !v18 || 0x7FFFFFFFFFFFFFFFLL - v16.QuadPart < v7 || v17 > *((_QWORD *)FsContext + 3) )
    goto LABEL_48;
  if ( v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v25 )
    {
      v16 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v16;
      v17 = v16.QuadPart + v7;
      v26 = v16.QuadPart + v7;
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_48;
    v18 = FsContext[5];
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_48;
  }
  if ( v18 == 2 )
  {
    LOBYTE(v14) = 1;
    if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, _BYTE, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
            FileObject,
            FileOffset,
            Length,
            v14,
            LockKey,
            0,
            IoStatus,
            DeviceObject) )
    {
LABEL_48:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 0;
    }
  }
  v19 = *((_QWORD *)FsContext + 4);
  if ( v17 > v19 )
  {
    v9 = 1;
    v28 = *((_QWORD *)FsContext + 4);
    v29 = *((_QWORD *)FsContext + 5);
    if ( HIDWORD(v19) == HIDWORD(v26) || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v20, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v16.QuadPart > *((_QWORD *)FsContext + 5) )
    v24 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v24 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v24 )
  {
    v21 = *((_QWORD *)FsContext + 5);
    if ( v17 > v21 )
    {
      if ( HIDWORD(v21) == HIDWORD(v26) || (v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v22, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v9 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v9 )
  {
    v23 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v23 )
    {
      ExAcquireResourceExclusiveLite(v23, 1u);
      *((_QWORD *)FsContext + 4) = v28;
      *((_QWORD *)FsContext + 5) = v29;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v28;
      *((_QWORD *)FsContext + 5) = v29;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v24;
}

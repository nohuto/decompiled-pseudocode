/*
 * XREFs of FsRtlCopyWrite @ 0x1408152D0
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
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x14010F590 (CcCopyWriteWontFlush.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CcCopyWrite @ 0x140269940 (CcCopyWrite.c)
 */

BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rbx
  LARGE_INTEGER *v10; // r12
  BOOLEAN v12; // r14
  char v13; // di
  char *FsContext; // rsi
  signed __int64 v15; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r9
  char v19; // r8
  LARGE_INTEGER v20; // rdi
  signed __int64 v21; // rbx
  char v22; // cl
  signed __int64 v23; // rdx
  ULONG v24; // r13d
  signed __int64 v25; // rcx
  struct _ERESOURCE *v26; // rcx
  signed __int64 v27; // rax
  struct _ERESOURCE *v28; // rcx
  struct _ERESOURCE *v29; // rcx
  BOOLEAN v30; // [rsp+50h] [rbp-78h]
  char v31; // [rsp+51h] [rbp-77h]
  LONGLONG v32; // [rsp+58h] [rbp-70h]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-68h] BYREF
  __int64 v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  char *v36; // [rsp+78h] [rbp-50h]
  char v37[72]; // [rsp+80h] [rbp-48h] BYREF
  char v38; // [rsp+D8h] [rbp+10h]

  v9 = Length;
  v10 = FileOffset;
  v12 = 0;
  v30 = 1;
  v38 = 0;
  if ( FileOffset->QuadPart == -1 )
  {
    v13 = 1;
    v31 = 1;
  }
  else
  {
    v13 = 0;
    v31 = 0;
  }
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v36 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, v10, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  v15 = v9;
  IoStatus->Information = v9;
  if ( (_DWORD)v9 )
  {
    v34 = 0LL;
    v35 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( v13 || (signed __int64)(v9 + v10->QuadPart) > *((_QWORD *)FsContext + 5) )
    {
      if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
        goto LABEL_12;
      v19 = 0;
    }
    else
    {
      if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
      {
LABEL_12:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return 0;
      }
      v19 = 1;
    }
    if ( v13 )
      v20 = *(LARGE_INTEGER *)(FsContext + 32);
    else
      v20 = *v10;
    v21 = v20.QuadPart + v9;
    HIDWORD(v32) = HIDWORD(v21);
    EndOffset = v20;
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_33;
    v22 = FsContext[5];
    if ( !v22 )
      goto LABEL_33;
    v23 = *((_QWORD *)FsContext + 5);
    if ( v20.QuadPart >= v23 + 0x2000 || 0x7FFFFFFFFFFFFFFFLL - v20.QuadPart < v15 || v21 > *((_QWORD *)FsContext + 3) )
      goto LABEL_33;
    if ( v19 && v21 > v23 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
        goto LABEL_12;
      if ( v31 )
      {
        v20 = *(LARGE_INTEGER *)(FsContext + 32);
        EndOffset = v20;
        v21 = v20.QuadPart + v15;
        v32 = v20.QuadPart + v15;
      }
      if ( !FileObject->PrivateCacheMap || (v22 = FsContext[5]) == 0 || v21 > *((_QWORD *)FsContext + 3) )
      {
LABEL_33:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        goto LABEL_12;
      }
    }
    if ( v22 == 2 )
    {
      if ( v10->QuadPart == -1 )
        v10 = (LARGE_INTEGER *)(FsContext + 32);
      LOBYTE(v17) = Wait;
      v24 = Length;
      if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, LARGE_INTEGER *, _QWORD, __int64, ULONG, _BYTE, char *, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
              FileObject,
              v10,
              Length,
              v17,
              LockKey,
              0,
              v37,
              DeviceObject) )
      {
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
LABEL_63:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return v12;
      }
    }
    else
    {
      v24 = Length;
    }
    v25 = *((_QWORD *)FsContext + 4);
    if ( v21 > v25 )
    {
      v38 = 1;
      v34 = *((_QWORD *)FsContext + 4);
      v35 = *((_QWORD *)FsContext + 5);
      if ( HIDWORD(v25) == HIDWORD(v32) || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v21;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v26, 1u);
        *((_QWORD *)FsContext + 4) = v21;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v20.QuadPart > *((_QWORD *)FsContext + 5) )
      v30 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v30 )
      v30 = CcCopyWrite(FileObject, &EndOffset, v24, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v30 )
    {
      v27 = *((_QWORD *)FsContext + 5);
      if ( v21 > v27 )
      {
        if ( HIDWORD(v27) == HIDWORD(v32) || (v28 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v21;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v28, 1u);
          *((_QWORD *)FsContext + 5) = v21;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v38 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v21;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v24 + v20.QuadPart;
    }
    else if ( v38 )
    {
      v29 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v29 )
      {
        ExAcquireResourceExclusiveLite(v29, 1u);
        *((_QWORD *)FsContext + 4) = v34;
        *((_QWORD *)FsContext + 5) = v35;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v34;
        *((_QWORD *)FsContext + 5) = v35;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v12 = v30;
    goto LABEL_63;
  }
  return 1;
}

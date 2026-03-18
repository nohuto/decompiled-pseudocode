/*
 * XREFs of FsRtlCopyWrite @ 0x14084D230
 * Callers:
 *     <none>
 * Callees:
 *     IoGetTopLevelIrp @ 0x14000A2A0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x14000A2C0 (IoSetTopLevelIrp.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     CcZeroData @ 0x1400FE7B0 (CcZeroData.c)
 *     CcCopyWriteWontFlush @ 0x1401095F0 (CcCopyWriteWontFlush.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F840 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CcCopyWrite @ 0x14027CEF0 (CcCopyWrite.c)
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
  signed __int64 v9; // r13
  LARGE_INTEGER *v10; // r12
  BOOLEAN v12; // r14
  char v13; // di
  char *FsContext; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r9
  char v18; // r9
  LARGE_INTEGER v19; // rdi
  LONGLONG v20; // rbx
  char v21; // cl
  LONGLONG v22; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  char v24; // r12
  struct _ERESOURCE *v25; // rcx
  struct _ERESOURCE *v26; // rcx
  struct _ERESOURCE *v27; // rcx
  BOOLEAN v28; // [rsp+50h] [rbp-78h]
  char v29; // [rsp+51h] [rbp-77h]
  LARGE_INTEGER EndOffset; // [rsp+58h] [rbp-70h] BYREF
  LONGLONG v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  char *v34; // [rsp+78h] [rbp-50h]
  _QWORD v35[9]; // [rsp+80h] [rbp-48h] BYREF

  v9 = Length;
  v10 = FileOffset;
  v12 = 0;
  v28 = 1;
  if ( FileOffset->QuadPart == -1 )
  {
    v13 = 1;
    v29 = 1;
  }
  else
  {
    v13 = 0;
    v29 = 0;
  }
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v34 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, v10, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v32 = 0LL;
  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v13 || v9 + v10->QuadPart > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v18 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
    {
LABEL_12:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 0;
    }
    v18 = 1;
  }
  if ( v13 )
    v19 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v19 = *v10;
  v20 = v19.QuadPart + v9;
  v31 = v19.QuadPart + v9;
  EndOffset = v19;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_33;
  v21 = FsContext[5];
  if ( !v21 )
    goto LABEL_33;
  v22 = *((_QWORD *)FsContext + 5);
  if ( v19.QuadPart >= v22 + 0x2000 || 0x7FFFFFFFFFFFFFFFLL - v19.QuadPart < v9 || v20 > *((_QWORD *)FsContext + 3) )
    goto LABEL_33;
  if ( v18 && v20 > v22 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    if ( v29 )
    {
      v19 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v19;
      v20 = v19.QuadPart + v9;
      v31 = v19.QuadPart + v9;
    }
    if ( !FileObject->PrivateCacheMap || (v21 = FsContext[5]) == 0 || v20 > *((_QWORD *)FsContext + 3) )
    {
LABEL_33:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      goto LABEL_12;
    }
  }
  if ( v21 != 2 )
    goto LABEL_39;
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v35[0] = 0LL;
  v35[1] = 0LL;
  if ( v10->QuadPart == -1 )
    v10 = (LARGE_INTEGER *)(FsContext + 32);
  LOBYTE(v16) = Wait;
  if ( ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, LARGE_INTEGER *, _QWORD, __int64, ULONG, _BYTE, _QWORD *, PDEVICE_OBJECT))FastIoDispatch->FastIoCheckIfPossible)(
         FileObject,
         v10,
         (unsigned int)v9,
         v16,
         LockKey,
         0,
         v35,
         DeviceObject) )
  {
LABEL_39:
    if ( v20 <= *((_QWORD *)FsContext + 4) )
    {
      v24 = 0;
    }
    else
    {
      v24 = 1;
      v32 = *((_QWORD *)FsContext + 4);
      v33 = *((_QWORD *)FsContext + 5);
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v31) || (v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v20;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v25, 1u);
        *((_QWORD *)FsContext + 4) = v20;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v19.QuadPart > *((_QWORD *)FsContext + 5) )
      v28 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v28 )
      v28 = CcCopyWrite(FileObject, &EndOffset, v9, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v28 )
    {
      if ( v20 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v31)
          || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v20;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v26, 1u);
          *((_QWORD *)FsContext + 5) = v20;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v24 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v20;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v19.QuadPart + (unsigned int)v9;
    }
    else if ( v24 )
    {
      v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v27 )
      {
        ExAcquireResourceExclusiveLite(v27, 1u);
        *((_QWORD *)FsContext + 4) = v32;
        *((_QWORD *)FsContext + 5) = v33;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v32;
        *((_QWORD *)FsContext + 5) = v33;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v12 = v28;
  }
  else
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}

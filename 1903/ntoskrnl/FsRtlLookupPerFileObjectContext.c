/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x1400FFBE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  _QWORD *FileObjectExtension; // rax
  ULONG_PTR v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v9; // rbp
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rax
  ULONG_PTR v11; // rcx
  struct _KTHREAD *v12; // rdx
  $6EAC78A6FCFADE0A5FA44F358736B38F *v14; // rcx

  if ( !FileObject )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  if ( FileObjectExtension == IopRevocationExtension )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v7, 0LL);
  Flink = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
  v11 = v7 + 8;
  if ( InstanceId )
  {
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v11 )
    {
      while ( Flink->OwnerId != OwnerId || Flink->InstanceId != InstanceId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v11 )
          goto LABEL_11;
      }
      goto LABEL_10;
    }
  }
  else
  {
    if ( !OwnerId )
    {
      if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v11 )
        v9 = *(struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 8);
      goto LABEL_11;
    }
    if ( Flink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v11 )
    {
      while ( Flink->OwnerId != OwnerId )
      {
        Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Flink->Links.Flink;
        if ( Flink == (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v11 )
          goto LABEL_11;
      }
LABEL_10:
      v9 = Flink;
    }
  }
LABEL_11:
  ExReleasePushLockEx(v7, 0LL);
  v12 = KeGetCurrentThread();
  if ( v12->KernelApcDisable++ == -1 )
  {
    v14 = &v12->152;
    if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v14->ApcState.ApcListHead[0].Flink != v14 && !v12->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v14);
  }
  return v9;
}

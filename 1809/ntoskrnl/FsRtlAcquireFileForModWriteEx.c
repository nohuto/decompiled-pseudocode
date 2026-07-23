/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x14001B150
 * Callers:
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14001C650 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14001C6E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14001C9B0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14001CA40 (IoGetBaseFileSystemDeviceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x140121020 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140165F80 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     FsFilterFreeCompletionStack @ 0x140270748 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, _QWORD *a2, struct _ERESOURCE **a3)
{
  unsigned int v3; // ebx
  PFILE_OBJECT v4; // r15
  char v5; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  int v7; // edx
  int v8; // r9d
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r12
  struct _ERESOURCE **v17; // r13
  int v18; // eax
  char v19; // r12
  __int64 (__fastcall *v20)(PFILE_OBJECT, _QWORD *, struct _ERESOURCE **, _QWORD *); // rax
  __int64 v21; // rax
  PVOID FsContext; // rdi
  char v23; // dl
  __int64 v24; // rcx
  struct _ERESOURCE *v25; // rbx
  char v26; // si
  BOOLEAN v27; // al
  char v28; // cl
  struct _ERESOURCE *v29; // rcx
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v31; // [rsp+38h] [rbp-C8h]
  struct _ERESOURCE **v32; // [rsp+40h] [rbp-C0h]
  char *v33; // [rsp+48h] [rbp-B8h]
  char v34[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v36; // [rsp+60h] [rbp-A0h]
  _QWORD *v37; // [rsp+68h] [rbp-98h]
  struct _ERESOURCE **v38; // [rsp+70h] [rbp-90h]
  char v39; // [rsp+90h] [rbp-70h]

  v32 = a3;
  v3 = 0;
  v33 = v34;
  v30 = 0;
  v4 = FileObject;
  v5 = 0;
  v31 = a2;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  v10 = BaseFileSystemDeviceObject[1];
  v11 = *(_QWORD *)(v10 + 80);
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 48) + 48LL);
  if ( v12 && (*(_DWORD *)v12 >= 0x50u && *(_QWORD *)(v12 + 72) || *(_DWORD *)v12 >= 0x58u && *(_QWORD *)(v12 + 80)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v17 = v32;
    v33 = 0LL;
    v19 = 0;
LABEL_12:
    if ( !v12
      || (*(_DWORD *)v12 < 0x50u || !*(_QWORD *)(v12 + 72)) && (*(_DWORD *)v12 < 0x58u || !*(_QWORD *)(v12 + 80)) )
    {
      if ( v11
        && *(_DWORD *)v11 >= 0x80u
        && (v20 = *(__int64 (__fastcall **)(PFILE_OBJECT, _QWORD *, struct _ERESOURCE **, _QWORD *))(v11 + 120)) != 0LL )
      {
        v3 = v20(v4, v31, v17, BaseFileSystemDeviceObject);
      }
      else
      {
        v3 = -1073741808;
      }
      v30 |= 1u;
    }
    if ( v19 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    v16 = v31;
    goto LABEL_25;
  }
  LOBYTE(v7) = -3;
  result = FsFilterCtrlInit((unsigned int)v34, v7, (_DWORD)RelatedDeviceObject, v8, (__int64)v4, 1);
  if ( (int)result < 0 )
    return result;
  v16 = v31;
  v17 = v32;
  LOBYTE(v15) = 1;
  v37 = v31;
  LOBYTE(v14) = 1;
  v38 = v32;
  v18 = FsFilterPerformCallbacks(v34, v14, v15, &v30);
  v3 = v18;
  if ( v18 >= 0 )
  {
    if ( v18 )
    {
      v3 = 0;
      if ( v18 != 294 )
        v3 = v18;
      goto LABEL_25;
    }
    v4 = v36;
    if ( (v39 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v35, 0x746C6644u);
      v19 = 1;
      v21 = BaseFileSystemDeviceObject[1];
      v11 = *(_QWORD *)(v21 + 80);
      v12 = *(_QWORD *)(*(_QWORD *)(v21 + 48) + 48LL);
    }
    else
    {
      v19 = 0;
    }
    goto LABEL_12;
  }
LABEL_25:
  if ( v3 == -1073741808 && (v30 & 1) != 0 )
  {
    FsContext = v4->FsContext;
    if ( *((_QWORD *)FsContext + 1) )
    {
      v23 = *((_BYTE *)FsContext + 4);
      if ( (v23 & 8) != 0 || (v24 = *((_QWORD *)FsContext + 5), *v16 > v24) && v24 != *((_QWORD *)FsContext + 4) )
      {
        v26 = 1;
      }
      else
      {
        if ( (v23 & 0x10) == 0 )
        {
          v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
          if ( v25 )
          {
            v26 = 0;
            goto LABEL_56;
          }
        }
        v26 = 0;
      }
      v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      while ( 1 )
      {
LABEL_56:
        if ( v26 )
          v27 = ExAcquireResourceExclusiveLite(v25, 0);
        else
          v27 = ExAcquireSharedWaitForExclusive(v25, 0);
        if ( !v27 )
          goto LABEL_73;
        v28 = *((_BYTE *)FsContext + 4);
        if ( (v28 & 8) != 0 || *v16 > *((_QWORD *)FsContext + 5) )
        {
          if ( v26 )
            goto LABEL_45;
        }
        else
        {
          if ( (v28 & 0x10) == 0 )
          {
            v29 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
            if ( !v29 || v25 == v29 )
            {
              if ( v26 )
LABEL_44:
                ExConvertExclusiveToSharedLite(v25);
            }
            else
            {
              v25 = 0LL;
              if ( ExAcquireSharedWaitForExclusive(v29, 0) )
                v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              if ( !v25 )
              {
LABEL_73:
                v3 = -1073741608;
                goto LABEL_26;
              }
            }
LABEL_45:
            *v17 = v25;
            goto LABEL_46;
          }
          if ( v26 )
            goto LABEL_44;
          if ( v25 == *((struct _ERESOURCE **)FsContext + 1) )
            goto LABEL_45;
        }
        ExReleaseResourceLite(v25);
        v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        v26 = 1;
      }
    }
    *v17 = 0LL;
LABEL_46:
    v3 = 0;
  }
LABEL_26:
  if ( v33 )
  {
    if ( *((_WORD *)v33 + 37) )
      FsFilterPerformCompletionCallbacks(v34, v3);
    if ( (v39 & 1) != 0 )
      FsFilterFreeCompletionStack(v34);
  }
  return v3;
}

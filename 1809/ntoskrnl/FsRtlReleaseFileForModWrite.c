/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x14001AF98
 * Callers:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140002E2C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14001C650 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14001C6E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14001C9B0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14001CA40 (IoGetBaseFileSystemDeviceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     FsFilterFreeCompletionStack @ 0x140270748 (FsFilterFreeCompletionStack.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v2; // ebx
  _BYTE *v3; // r15
  struct _FILE_OBJECT *v4; // r13
  char v5; // r12
  int v6; // edx
  int v7; // r9d
  _QWORD *BaseFileSystemDeviceObject; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // r12
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  __int64 (__fastcall *v16)(struct _FILE_OBJECT *, struct _ERESOURCE *, _QWORD *); // rax
  __int64 v17; // rax
  char v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C0h]
  _BYTE v22[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  struct _FILE_OBJECT *v24; // [rsp+58h] [rbp-A8h]
  PERESOURCE v25; // [rsp+60h] [rbp-A0h]
  char v26; // [rsp+88h] [rbp-78h]

  v2 = 0;
  Resource = a2;
  v19 = 0;
  v3 = v22;
  v18 = 0;
  v4 = FileObject;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v4);
  v9 = BaseFileSystemDeviceObject[1];
  v10 = *(_QWORD *)(v9 + 80);
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 48LL);
  if ( v11 && (*(_DWORD *)v11 >= 0x60u && *(_QWORD *)(v11 + 88) || *(_DWORD *)v11 >= 0x68u && *(_QWORD *)(v11 + 96)) )
    v5 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v5 )
  {
    v12 = Resource;
    v3 = 0LL;
    goto LABEL_11;
  }
  LOBYTE(v6) = -4;
  FsFilterCtrlInit((unsigned int)v22, v6, (_DWORD)RelatedDeviceObject, v7, (__int64)v4, 0);
  v12 = Resource;
  LOBYTE(v13) = 1;
  v25 = Resource;
  v14 = FsFilterPerformCallbacks(v22, 0LL, v13, &v19);
  v15 = 0;
  v2 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 )
    {
      if ( v14 != 294 )
        v15 = v14;
      v2 = v15;
LABEL_23:
      if ( v2 >= 0 )
        goto LABEL_24;
      goto LABEL_36;
    }
    v4 = v24;
    if ( (v26 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag(v23, 0x746C6644u);
      v18 = 1;
      v17 = BaseFileSystemDeviceObject[1];
      v10 = *(_QWORD *)(v17 + 80);
      v11 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 48LL);
    }
LABEL_11:
    if ( !v11
      || (*(_DWORD *)v11 < 0x60u || !*(_QWORD *)(v11 + 88)) && (*(_DWORD *)v11 < 0x68u || !*(_QWORD *)(v11 + 96)) )
    {
      if ( v10
        && *(_DWORD *)v10 >= 0xD0u
        && (v16 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, struct _ERESOURCE *, _QWORD *))(v10 + 200)) != 0LL )
      {
        v2 = v16(v4, v12, BaseFileSystemDeviceObject);
      }
      else
      {
        v2 = -1073741808;
      }
      v19 |= 1u;
    }
    if ( v18 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_23;
  }
LABEL_36:
  if ( (v19 & 1) != 0 )
  {
    ExReleaseResourceLite(v12);
    v2 = 0;
  }
LABEL_24:
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks(v22, (unsigned int)v2);
    if ( (v26 & 1) != 0 )
      FsFilterFreeCompletionStack(v22);
  }
}

/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C012A864
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C012ABB4 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C012ABD8 (-GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z.c)
 *     ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C015BC98 (-GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  __int64 v4; // rbx
  const struct _UNICODE_STRING *UMDFileName; // rax
  bool v7; // zf
  const struct _UNICODE_STRING *v8; // rsi
  size_t v9; // rax
  unsigned __int64 MaximumLength; // rcx
  __int16 v11; // bx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int16 v20; // ax
  unsigned __int64 v21; // rbx
  wchar_t *v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  FileHandle = 0LL;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v25 + 24) = 3732LL;
    WdLogEvent5_WdAssertion(v25);
  }
  LODWORD(v4) = 0;
  if ( this[63].QuadPart != -1 )
    goto LABEL_4;
  while ( 1 )
  {
    UMDFileName = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, (enum _KMTUMDVERSION)v4);
    if ( !(unsigned int)IsNullUmdDriver(UMDFileName) )
      break;
    v7 = (_DWORD)v4 == 4;
    if ( (unsigned int)v4 >= 4 )
      goto LABEL_12;
    LODWORD(v4) = v4 + 1;
  }
  v7 = (_DWORD)v4 == 4;
LABEL_12:
  if ( v7 )
  {
    LODWORD(v4) = -1073741811;
    goto LABEL_5;
  }
  v8 = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, (enum _KMTUMDVERSION)v4);
  v9 = wcsnlen(v8->Buffer, (unsigned __int64)v8->MaximumLength >> 1);
  MaximumLength = v8->MaximumLength;
  v11 = 2 * v9;
  if ( 2 * v9 >= MaximumLength )
  {
    v26 = WdLogNewEntry5_WdAssertion(MaximumLength);
    *(_QWORD *)(v26 + 24) = 3767LL;
    WdLogEvent5_WdAssertion(v26);
  }
  Destination.Length = 0;
  Destination.MaximumLength = v11 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v11 + 12), 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
    goto LABEL_35;
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, v8->Buffer);
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
  {
LABEL_29:
    LODWORD(v4) = ADAPTER_RENDER::GetFileVersion((ADAPTER_RENDER *)this, FileHandle, &ObjectAttributes, this + 63);
    goto LABEL_30;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = 3809LL;
  v17 = wcsnlen(v8->Buffer, (unsigned __int64)v8->MaximumLength >> 1);
  v18 = v8->MaximumLength;
  v19 = 2 * v17;
  if ( 2 * v17 >= v18 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v28 + 24) = 3815LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v20 = v19 + 56;
  Destination.Length = 0;
  Destination.MaximumLength = v19 + 56;
  if ( Destination.Buffer )
  {
    operator delete(Destination.Buffer);
    v20 = Destination.MaximumLength;
    Destination.Buffer = 0LL;
  }
  Destination.Buffer = (wchar_t *)operator new[](v20, 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
  {
LABEL_35:
    LODWORD(v4) = -1073741801;
    v27 = WdLogNewEntry5_WdLowResource(v12);
    *(union _LARGE_INTEGER *)(v27 + 24) = this[2];
    WdLogEvent5_WdLowResource(v27);
    goto LABEL_5;
  }
  RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
  RtlAppendUnicodeToString(&Destination, v8->Buffer);
  v21 = v19 >> 1;
  if ( v21 )
  {
    v22 = &v8->Buffer[v21 - 1];
    do
    {
      if ( *v22 == 46 )
        break;
      --v22;
      --v21;
    }
    while ( v21 );
  }
  if ( !v21 )
    RtlAppendUnicodeToString(&Destination, L".DLL");
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v23 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v4 = v23;
  if ( v23 >= 0 )
    goto LABEL_29;
  v29 = WdLogNewEntry5_WdError(v24);
  *(union _LARGE_INTEGER *)(v29 + 24) = this[2];
  *(_QWORD *)(v29 + 32) = v4;
  WdLogEvent5_WdError(v29);
LABEL_30:
  if ( (int)v4 >= 0 )
LABEL_4:
    *a2 = this[63];
LABEL_5:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Destination.Buffer )
    operator delete(Destination.Buffer);
  return (unsigned int)v4;
}

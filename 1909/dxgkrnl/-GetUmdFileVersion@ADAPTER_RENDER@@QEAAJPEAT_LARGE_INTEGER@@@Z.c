/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00EBFB0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C00EBE3C (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C00EBE60 (-GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z.c)
 *     ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C017FFC0 (-GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  const struct _UNICODE_STRING *UMDFileName; // rax
  const struct _UNICODE_STRING *v9; // rsi
  size_t v10; // rax
  __int64 v11; // rdx
  unsigned __int64 MaximumLength; // rcx
  __int16 v13; // bx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  size_t v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int16 v24; // ax
  unsigned __int64 v25; // rbx
  wchar_t *v26; // rcx
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle = 0LL;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v31 + 24) = 3758LL;
    WdLogEvent5_WdAssertion(v31);
  }
  LODWORD(v6) = 0;
  if ( this[63].QuadPart != -1 )
    goto LABEL_4;
  do
  {
    UMDFileName = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, (unsigned int)v6);
    if ( !(unsigned int)IsNullUmdDriver(UMDFileName) )
      break;
    LODWORD(v6) = v6 + 1;
  }
  while ( (unsigned int)v6 < 4 );
  if ( (_DWORD)v6 == 4 )
  {
    LODWORD(v6) = -1073741811;
    goto LABEL_5;
  }
  v9 = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, (unsigned int)v6);
  v10 = wcsnlen(v9->Buffer, (unsigned __int64)v9->MaximumLength >> 1);
  MaximumLength = v9->MaximumLength;
  v13 = 2 * v10;
  if ( 2 * v10 >= MaximumLength )
  {
    v32 = WdLogNewEntry5_WdAssertion(MaximumLength, v11);
    *(_QWORD *)(v32 + 24) = 3793LL;
    WdLogEvent5_WdAssertion(v32);
  }
  Destination.Length = 0;
  Destination.MaximumLength = v13 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v13 + 12), 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
    goto LABEL_34;
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, v9->Buffer);
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
  {
LABEL_28:
    LODWORD(v6) = ADAPTER_RENDER::GetFileVersion((ADAPTER_RENDER *)this, FileHandle, &ObjectAttributes, this + 63);
    goto LABEL_29;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = 3835LL;
  v20 = wcsnlen(v9->Buffer, (unsigned __int64)v9->MaximumLength >> 1);
  v22 = v9->MaximumLength;
  v23 = 2 * v20;
  if ( 2 * v20 >= v22 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v34 + 24) = 3841LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v24 = v23 + 56;
  Destination.Length = 0;
  Destination.MaximumLength = v23 + 56;
  if ( Destination.Buffer )
  {
    operator delete(Destination.Buffer);
    v24 = Destination.MaximumLength;
    Destination.Buffer = 0LL;
  }
  Destination.Buffer = (wchar_t *)operator new[](v24, 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
  {
LABEL_34:
    LODWORD(v6) = -1073741801;
    v33 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    *(union _LARGE_INTEGER *)(v33 + 24) = this[2];
    WdLogEvent5_WdLowResource(v33);
    goto LABEL_5;
  }
  RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
  RtlAppendUnicodeToString(&Destination, v9->Buffer);
  v25 = v23 >> 1;
  if ( v25 )
  {
    v26 = &v9->Buffer[v25 - 1];
    do
    {
      if ( *v26 == 46 )
        break;
      --v26;
      --v25;
    }
    while ( v25 );
  }
  if ( !v25 )
    RtlAppendUnicodeToString(&Destination, L".DLL");
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v27 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v6 = v27;
  if ( v27 >= 0 )
    goto LABEL_28;
  v35 = WdLogNewEntry5_WdError(v29, v28, v30);
  *(union _LARGE_INTEGER *)(v35 + 24) = this[2];
  *(_QWORD *)(v35 + 32) = v6;
  WdLogEvent5_WdError(v35);
LABEL_29:
  if ( (int)v6 >= 0 )
LABEL_4:
    *a2 = this[63];
LABEL_5:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Destination.Buffer )
    operator delete(Destination.Buffer);
  return (unsigned int)v6;
}

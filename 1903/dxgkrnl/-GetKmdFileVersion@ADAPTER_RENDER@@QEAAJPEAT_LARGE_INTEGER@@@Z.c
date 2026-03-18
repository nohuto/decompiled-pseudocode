/*
 * XREFs of ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C017C06C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015BE84 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C017C1D0 (-GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetKmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  void *v4; // rdi
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  IoStatusBlock.Pointer = 0LL;
  v4 = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v5 = this[64].QuadPart == -1;
  v14 = 0LL;
  P = 0LL;
  if ( !v5 )
  {
    LODWORD(v10) = 0;
LABEL_6:
    *a2 = this[64];
    goto LABEL_7;
  }
  v6 = IoQueryFullDriverPath(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].QuadPart + 192) + 64LL) + 40LL) + 32LL),
         &v14);
  v10 = v6;
  if ( v6 < 0
    || (ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v11 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u),
        v10 = v11,
        v11 < 0) )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(union _LARGE_INTEGER *)(v13 + 24) = this[2];
    *(_QWORD *)(v13 + 32) = v10;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    LODWORD(v10) = ADAPTER_RENDER::GetFileVersion((ADAPTER_RENDER *)this, FileHandle, &ObjectAttributes, this + 64);
  }
  v4 = FileHandle;
  if ( (int)v10 >= 0 )
    goto LABEL_6;
LABEL_7:
  if ( v4 )
    ZwClose(v4);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v10;
}

/*
 * XREFs of ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015BB5C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C015BC98 (-GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetKmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  void *v3; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  FileHandle = 0LL;
  P = 0LL;
  if ( this[64].QuadPart != -1 )
  {
    LODWORD(v7) = 0;
LABEL_6:
    *a2 = this[64];
    goto LABEL_7;
  }
  v5 = IoQueryFullDriverPath(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].QuadPart + 192) + 64LL) + 40LL) + 32LL),
         &v11);
  v7 = v5;
  if ( v5 < 0
    || (ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v8 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u),
        v7 = v8,
        v8 < 0) )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(union _LARGE_INTEGER *)(v10 + 24) = this[2];
    *(_QWORD *)(v10 + 32) = v7;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    LODWORD(v7) = ADAPTER_RENDER::GetFileVersion((ADAPTER_RENDER *)this, FileHandle, &ObjectAttributes, this + 64);
  }
  v3 = FileHandle;
  if ( (int)v7 >= 0 )
    goto LABEL_6;
LABEL_7:
  if ( v3 )
    ZwClose(v3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}

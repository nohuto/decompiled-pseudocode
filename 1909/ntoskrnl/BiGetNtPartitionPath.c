/*
 * XREFs of BiGetNtPartitionPath @ 0x14073DD94
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14073DC24 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     swprintf_s @ 0x1401A52F0 (swprintf_s.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x1401C1750 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401C33F0 (ZwQueryDirectoryObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiIsValidDiskDevice @ 0x14073E170 (BiIsValidDiskDevice.c)
 *     BiTranslateSymbolicLink @ 0x14073E204 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14073E384 (BiGetDriveLayoutBlock.c)
 *     BiGetPartitionVhdFilePath @ 0x140740AC4 (BiGetPartitionVhdFilePath.c)
 *     BiVerifyBootPartition @ 0x140740ECC (BiVerifyBootPartition.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v3; // r15
  wchar_t **v4; // r14
  int v5; // eax
  wchar_t *v6; // r13
  NTSTATUS v7; // ebx
  PVOID PoolWithTag; // rdi
  ULONG v9; // esi
  PVOID v10; // rax
  char v11; // r12
  NTSTATUS v12; // eax
  wchar_t **v13; // rbx
  bool v14; // r14
  unsigned __int64 v15; // rcx
  _DWORD *v16; // r13
  int v17; // eax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // eax
  bool v22; // zf
  const wchar_t *PartitionVhdFilePath; // rax
  __int64 v25; // rcx
  const wchar_t *v26; // rax
  BOOLEAN RestartScan[8]; // [rsp+20h] [rbp-E0h]
  bool v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+40h] [rbp-C0h]
  wchar_t **v30; // [rsp+48h] [rbp-B8h]
  wchar_t *Str1; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Context; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  _DWORD *v37; // [rsp+78h] [rbp-88h] BYREF
  PVOID v38; // [rsp+80h] [rbp-80h]
  void *v39; // [rsp+88h] [rbp-78h]
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v42; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v44; // [rsp+B8h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES v47; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v48[10]; // [rsp+138h] [rbp+38h] BYREF

  v42 = a2;
  memset(v48, 0, sizeof(v48));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&v47, 0, sizeof(v47));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&v44.Length = 0LL;
  v44.Buffer = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v39 = 0LL;
  Str1 = 0LL;
  v5 = BiVerifyBootPartition(a1, (unsigned int)&v34, (unsigned int)&v37, (unsigned int)&v35, (__int64)&Str1, 0LL);
  v6 = Str1;
  v7 = v5;
  if ( v5 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4B444342u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v28 = 0;
    if ( v6 && !v34 )
      v28 = v37 == 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Device");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
    if ( v7 < 0 )
      goto LABEL_80;
    v9 = 4096;
    v10 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4B444342u);
    v11 = 0;
    while ( 1 )
    {
      v38 = v10;
      v4 = (wchar_t **)v10;
      if ( !v10 )
      {
        v7 = -1073741801;
        goto LABEL_80;
      }
      Context = 0;
      v12 = ZwQueryDirectoryObject(DirectoryHandle, v10, v9, 0, 1u, &Context, 0LL);
      v7 = v12;
      if ( v12 != 261 )
        break;
      ExFreePoolWithTag(v4, 0x4B444342u);
      v9 += 4096;
      v10 = ExAllocatePoolWithTag(PagedPool, v9, 0x4B444342u);
    }
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147483622 )
      goto LABEL_39;
    if ( !*(_WORD *)v4 )
    {
LABEL_79:
      v7 = -1073741811;
LABEL_80:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
LABEL_40:
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4B444342u);
      goto LABEL_42;
    }
    v13 = v4 + 1;
    v14 = v28;
    v30 = v13;
    while ( 1 )
    {
      if ( !(unsigned __int8)BiIsValidDiskDevice(*v13, v13[2]) )
        goto LABEL_14;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v13, 0LL);
      if ( (int)BiGetDriveLayoutBlock((PCWSTR)PoolWithTag) < 0 )
        goto LABEL_14;
      if ( !v6 )
      {
        v15 = *(_QWORD *)(v35 + 4) - *(_QWORD *)&v48[1];
        if ( !v15 )
        {
          v15 = *(_QWORD *)(v35 + 12) - *(_QWORD *)&v48[3];
          if ( !v15 )
            v15 = *(unsigned int *)(v35 + 20) - (unsigned __int64)v48[5];
        }
        if ( v15 )
        {
          ExFreePoolWithTag(P, 0x4B444342u);
          goto LABEL_14;
        }
      }
      v16 = P;
      v17 = *(_DWORD *)(v35 + 4);
      v33 = v17;
      if ( v37 )
        break;
      if ( v17 != 1 )
        goto LABEL_56;
LABEL_24:
      v18 = 0LL;
      if ( !v17 )
      {
        if ( v37 )
        {
          v18 = v37;
        }
        else if ( v34 )
        {
          v18 = v34;
        }
      }
      v19 = 0LL;
      v29 = 0;
      if ( *((_DWORD *)P + 1) )
      {
        do
        {
          v20 = 36 * v19;
          v21 = v16[36 * v19 + 18];
          if ( v21 )
          {
            *(_DWORD *)RestartScan = v21;
            swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v30, *(_QWORD *)RestartScan);
            if ( v14 )
            {
              PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
              v3 = (wchar_t *)PartitionVhdFilePath;
              if ( PartitionVhdFilePath )
              {
                if ( !wcsicmp(Str1, PartitionVhdFilePath) )
                {
LABEL_32:
                  v11 = 1;
                  break;
                }
                ExFreePoolWithTag(v3, 0x4B444342u);
                v3 = 0LL;
              }
            }
            if ( v33 == 1 )
            {
              if ( !v34 )
                goto LABEL_70;
              v22 = *v34 == *(_QWORD *)&v16[v20 + 14];
            }
            else
            {
              if ( !v18 )
                goto LABEL_70;
              v25 = *v18 - *(_QWORD *)&v16[v20 + 24];
              if ( *v18 == *(_QWORD *)&v16[v20 + 24] )
                v25 = v18[1] - *(_QWORD *)&v16[v20 + 26];
              v22 = v25 == 0;
            }
            if ( v22 )
              goto LABEL_32;
          }
LABEL_70:
          v19 = (unsigned int)(v29 + 1);
          v29 = v19;
        }
        while ( (unsigned int)v19 < v16[1] );
      }
      v13 = v30;
LABEL_34:
      ExFreePoolWithTag(v16, 0x4B444342u);
      v6 = Str1;
      if ( !Str1 )
        goto LABEL_35;
      if ( v11 )
      {
        if ( v14 )
          goto LABEL_35;
        v26 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
        v3 = (wchar_t *)v26;
        if ( v26 )
        {
          if ( !wcsicmp(v6, v26) )
          {
LABEL_35:
            v4 = (wchar_t **)v38;
            if ( v11 )
            {
              if ( (int)BiTranslateSymbolicLink((PCWSTR)PoolWithTag) >= 0 )
              {
                ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
                PoolWithTag = v39;
              }
              v7 = 0;
              *v42 = PoolWithTag;
LABEL_39:
              if ( v7 >= 0 )
                goto LABEL_40;
              goto LABEL_80;
            }
            goto LABEL_79;
          }
          ExFreePoolWithTag(v3, 0x4B444342u);
          v3 = 0LL;
        }
        v11 = 0;
      }
LABEL_14:
      v13 += 4;
      v30 = v13;
      if ( !*((_WORD *)v13 - 4) )
        goto LABEL_35;
    }
    if ( v17 == 1 )
    {
      *(_DWORD *)RestartScan = *v37;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v13, *(_QWORD *)RestartScan);
      RtlInitUnicodeString(&v44, (PCWSTR)PoolWithTag);
      v47.ObjectName = &v44;
      v47.Length = 48;
      v47.RootDirectory = 0LL;
      v47.Attributes = 576;
      *(_OWORD *)&v47.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(&FileHandle, 0x80000000, &v47, &IoStatusBlock, 3u, 0) >= 0 )
      {
        ZwClose(FileHandle);
        v11 = 1;
      }
      goto LABEL_34;
    }
LABEL_56:
    if ( v17 )
      goto LABEL_34;
    goto LABEL_24;
  }
LABEL_42:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v7;
}

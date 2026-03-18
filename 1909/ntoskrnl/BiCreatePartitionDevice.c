/*
 * XREFs of BiCreatePartitionDevice @ 0x1407406CC
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x14074060C (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     wcschr @ 0x1401A2640 (wcschr.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14074060C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionInformation @ 0x1407409AC (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePath @ 0x140740AC4 (BiGetPartitionVhdFilePath.c)
 *     BiGetDriveLayoutInformation @ 0x140740C2C (BiGetDriveLayoutInformation.c)
 *     BiCreateFileDeviceElement @ 0x14092EE84 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x14092F030 (BiGetPhysicalDriveName.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  WCHAR *v5; // r15
  WCHAR *v6; // rsi
  const wchar_t *PartitionVhdFilePath; // rax
  int PhysicalDriveName; // ebx
  __int128 v9; // xmm6
  SIZE_T v10; // rdx
  _OWORD *PoolWithTag; // r14
  size_t v12; // r8
  int v13; // ecx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _DWORD *v16; // rcx
  wchar_t *v18; // rax
  wchar_t *v19; // rbx
  void *v20; // rax
  unsigned int Size; // [rsp+38h] [rbp-D0h]
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceStringa; // [rsp+60h] [rbp-A8h]
  WCHAR *v25; // [rsp+68h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v27; // [rsp+78h] [rbp-90h]
  _DWORD *v28; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v32[14]; // [rsp+D8h] [rbp-30h] BYREF

  LODWORD(v23) = a2;
  v27 = a3;
  v28 = a4;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(v32, 0, 216);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  FileHandle = 0LL;
  v5 = 0LL;
  Src = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  Size = 0;
  SourceStringa = 0LL;
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString);
    if ( PhysicalDriveName < 0 )
      goto LABEL_22;
    PhysicalDriveName = BiGetDriveLayoutInformation(SourceStringa);
    if ( PhysicalDriveName < 0 )
      goto LABEL_22;
  }
  if ( (v23 & 0x40) == 0 )
  {
    PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath(SourceString);
    v6 = (WCHAR *)PartitionVhdFilePath;
    if ( PartitionVhdFilePath )
    {
      if ( !wcsnicmp(PartitionVhdFilePath, L"\\Device\\HarddiskVolume", 0x16uLL) )
      {
        v18 = wcschr(v6 + 22, 0x5Cu);
        v19 = v18;
        if ( v18 )
        {
          *v18 = 0;
          v20 = (void *)BiGetPartitionVhdFilePath(v6);
          *v19 = 92;
          if ( v20 )
          {
            ExFreePoolWithTag(v20, 0x4B444342u);
            PhysicalDriveName = -1073741637;
            goto LABEL_22;
          }
        }
      }
      v5 = v25;
      PhysicalDriveName = BiCreateFileDeviceElement(v6);
      if ( PhysicalDriveName < 0 )
        goto LABEL_20;
      PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(v25, 0, 0, &Src);
      if ( PhysicalDriveName < 0 )
        goto LABEL_20;
      LODWORD(v32[11]) = 6;
      Size = *((_DWORD *)Src + 2);
    }
  }
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_46:
      PhysicalDriveName = -1073741811;
      goto LABEL_20;
    }
    DWORD1(v32[11]) = 0;
    *(_OWORD *)((char *)&v32[11] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v32[11]) = MEMORY[8];
    DWORD1(v32[11]) = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PhysicalDriveName = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !LODWORD(v32[0]) )
      {
        *(_QWORD *)&v32[10] = *((_QWORD *)&v32[0] + 1);
        v9 = v32[10];
LABEL_10:
        v10 = Size + 56;
        if ( Size + 56 <= 0x48 )
          v10 = 72LL;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
        if ( PoolWithTag )
        {
          v12 = 72LL;
          if ( Size + 56 > 0x48 )
            v12 = Size + 56;
          memset(PoolWithTag, 0, v12);
          v13 = 72;
          v14 = v32[12];
          LODWORD(v32[9]) = 6;
          if ( Size + 56 > 0x48 )
            v13 = Size + 56;
          DWORD2(v32[9]) = v13;
          *PoolWithTag = v32[9];
          v15 = v32[11];
          PoolWithTag[1] = v9;
          PoolWithTag[2] = v15;
          *(_QWORD *)&v15 = *(_QWORD *)&v32[13];
          PoolWithTag[3] = v14;
          *((_QWORD *)PoolWithTag + 8) = v15;
          if ( v6 )
            memmove((char *)PoolWithTag + 56, Src, Size);
          v16 = v28;
          *v27 = PoolWithTag;
          *v16 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_20;
      }
      if ( LODWORD(v32[0]) == 1 )
      {
        v9 = v32[3];
        goto LABEL_10;
      }
      goto LABEL_46;
    }
  }
LABEL_20:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_22:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}

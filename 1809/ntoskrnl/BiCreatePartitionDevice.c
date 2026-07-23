/*
 * XREFs of BiCreatePartitionDevice @ 0x14071565C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071559C (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071559C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140715920 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x140715A44 (BiGetPartitionInformation.c)
 *     BiGetDriveLayoutInformation @ 0x140715B2C (BiGetDriveLayoutInformation.c)
 *     BiCreateFileDeviceElement @ 0x1408F2A40 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1408F2BEC (BiGetPhysicalDriveName.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  WCHAR *v5; // r15
  WCHAR *v6; // rsi
  unsigned int v7; // r13d
  const wchar_t *v8; // rax
  int PhysicalDriveName; // ebx
  __int128 v10; // xmm6
  unsigned int v11; // eax
  size_t v12; // r13
  SIZE_T v13; // rdx
  _OWORD *PoolWithTag; // r14
  size_t v15; // r8
  int v16; // edx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _DWORD *v19; // rcx
  wchar_t *v21; // rax
  wchar_t *v22; // rbx
  void *PartitionVhdFilePathFromUnicodeString; // rax
  unsigned int Size; // [rsp+38h] [rbp-D0h]
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h]
  WCHAR *v27; // [rsp+60h] [rbp-A8h]
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v30; // [rsp+80h] [rbp-88h]
  _DWORD *v31; // [rsp+88h] [rbp-80h]
  UNICODE_STRING v32; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v33; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  int v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  __int128 v38; // [rsp+128h] [rbp+20h]
  _OWORD v39[5]; // [rsp+188h] [rbp+80h] BYREF

  v30 = a3;
  LODWORD(v26) = a2;
  v31 = a4;
  FileHandle = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v7 = 0;
  Size = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  memset(v39, 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
    PhysicalDriveName = BiGetDriveLayoutInformation(*(PCWSTR *)&DestinationString.Length);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
  }
  if ( (v26 & 0x40) == 0
    && (RtlInitUnicodeString(&DestinationString, SourceString),
        v8 = (const wchar_t *)BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString),
        (v6 = (WCHAR *)v8) != 0LL) )
  {
    if ( !wcsnicmp(v8, L"\\Device\\HarddiskVolume", 0x16uLL) )
    {
      v21 = wcschr(v6 + 22, 0x5Cu);
      v22 = v21;
      if ( v21 )
      {
        *v21 = 0;
        RtlInitUnicodeString(&v32, v6);
        PartitionVhdFilePathFromUnicodeString = (void *)BiGetPartitionVhdFilePathFromUnicodeString(&v32);
        *v22 = 92;
        if ( PartitionVhdFilePathFromUnicodeString )
        {
          ExFreePoolWithTag(PartitionVhdFilePathFromUnicodeString, 0x4B444342u);
          PhysicalDriveName = -1073741637;
          goto LABEL_23;
        }
      }
    }
    v5 = v27;
    PhysicalDriveName = BiCreateFileDeviceElement(v6);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(v27, 0, 0, &Src);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    LODWORD(v39[2]) = 6;
    v7 = *((_DWORD *)Src + 2);
    Size = v7;
  }
  else
  {
    LODWORD(v39[2]) = 0;
  }
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_46:
      PhysicalDriveName = -1073741811;
      goto LABEL_21;
    }
    DWORD1(v39[2]) = 0;
    *(_OWORD *)((char *)&v39[2] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v39[2]) = MEMORY[8];
    DWORD1(v39[2]) = 1;
  }
  RtlInitUnicodeString(&v33, SourceString);
  ObjectAttributes.ObjectName = &v33;
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
      if ( !v36 )
      {
        *(_QWORD *)&v39[1] = v37;
        v10 = v39[1];
LABEL_11:
        v11 = v7 + 56;
        v12 = v11;
        v13 = v11;
        if ( v11 <= 0x48 )
          v13 = 72LL;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x4B444342u);
        if ( PoolWithTag )
        {
          v15 = 72LL;
          if ( Size + 56 > 0x48 )
            v15 = v12;
          memset(PoolWithTag, 0, v15);
          v16 = 72;
          v17 = v39[3];
          LODWORD(v39[0]) = 6;
          if ( Size + 56 > 0x48 )
            v16 = Size + 56;
          DWORD2(v39[0]) = v16;
          *PoolWithTag = v39[0];
          v18 = v39[2];
          PoolWithTag[1] = v10;
          PoolWithTag[2] = v18;
          *(_QWORD *)&v18 = *(_QWORD *)&v39[4];
          PoolWithTag[3] = v17;
          *((_QWORD *)PoolWithTag + 8) = v18;
          if ( v6 )
            memmove((char *)PoolWithTag + 56, Src, Size);
          v19 = v31;
          *v30 = PoolWithTag;
          *v19 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_21;
      }
      if ( v36 == 1 )
      {
        v10 = v38;
        goto LABEL_11;
      }
      goto LABEL_46;
    }
  }
LABEL_21:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_23:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}

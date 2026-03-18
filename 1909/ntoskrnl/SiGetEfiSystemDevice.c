/*
 * XREFs of SiGetEfiSystemDevice @ 0x1409329A0
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x1406D2630 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x14072C940 (SiGetSystemDisk.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1401C1750 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401C33F0 (ZwQueryDirectoryObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SiGetDriveLayoutInformation @ 0x14072C80C (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14093277C (SiIssueSynchronousIoctl.c)
 *     SiDisambiguateSystemDevice @ 0x1409328D8 (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140932D8C (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140933100 (SiIsValidDiskDevice.c)
 */

__int64 __fastcall SiGetEfiSystemDevice(int a1, __int64 a2, wchar_t **a3)
{
  wchar_t **v3; // r15
  wchar_t **v4; // r14
  PVOID v5; // rdi
  unsigned int v6; // r12d
  wchar_t *v7; // rbx
  int v8; // r13d
  wchar_t *PoolWithTag; // rsi
  __int64 v10; // r8
  ULONG v11; // r9d
  NTSTATUS EspFromFirmware; // ebx
  ULONG v13; // r15d
  SIZE_T i; // rdx
  NTSTATUS v15; // eax
  wchar_t **v16; // rbx
  __int64 v17; // rdx
  bool v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r9
  int DriveLayoutInformation; // eax
  unsigned int v22; // eax
  char *v23; // rcx
  __int64 v24; // rax
  bool v25; // cf
  NTSTATUS v26; // eax
  BOOLEAN RestartScan[8]; // [rsp+28h] [rbp-A9h]
  int v29; // [rsp+48h] [rbp-89h] BYREF
  int v30; // [rsp+4Ch] [rbp-85h]
  unsigned int v31; // [rsp+50h] [rbp-81h] BYREF
  PVOID P; // [rsp+58h] [rbp-79h] BYREF
  ULONG Context; // [rsp+60h] [rbp-71h] BYREF
  HANDLE DirectoryHandle; // [rsp+68h] [rbp-69h] BYREF
  PVOID v35; // [rsp+70h] [rbp-61h]
  wchar_t *v36; // [rsp+78h] [rbp-59h]
  wchar_t **v37; // [rsp+80h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-39h] BYREF
  _QWORD v40[2]; // [rsp+C8h] [rbp-9h] BYREF
  _BYTE v41[32]; // [rsp+D8h] [rbp+7h] BYREF

  v37 = a3;
  v3 = a3;
  v30 = a1;
  memset(v41, 0, sizeof(v41));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v40, 0, 12);
  v4 = 0LL;
  v5 = 0LL;
  DirectoryHandle = 0LL;
  v6 = 0;
  P = 0LL;
  v36 = 0LL;
  v7 = 0LL;
  v31 = 0;
  v29 = 0;
  v8 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x6AuLL, 0x4B505953u);
  if ( !PoolWithTag )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_55;
  }
  if ( (int)SiDisambiguateSystemDevice(&v31, &v29, v10, v11) >= 0 )
    goto LABEL_44;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EspFromFirmware = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( EspFromFirmware < 0 )
    goto LABEL_49;
  v13 = 4096;
  for ( i = 4096LL; ; i = v13 )
  {
    v4 = (wchar_t **)ExAllocatePoolWithTag(PagedPool, i, 0x4B505953u);
    v35 = v4;
    if ( !v4 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_49;
    }
    Context = 0;
    v15 = ZwQueryDirectoryObject(DirectoryHandle, v4, v13, 0, 1u, &Context, 0LL);
    EspFromFirmware = v15;
    if ( v15 != 261 )
      break;
    ExFreePoolWithTag(v4, 0);
    v13 += 4096;
  }
  if ( (int)(v15 + 0x80000000) >= 0 && v15 != -2147483622 )
  {
LABEL_42:
    if ( EspFromFirmware < 0 )
      goto LABEL_49;
    v7 = v36;
    v3 = v37;
LABEL_44:
    v25 = v30 != 0;
    v30 = -v30;
    *(_DWORD *)RestartScan = v25 ? v29 : 0;
    if ( v7 )
      v26 = RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v7, *(_QWORD *)RestartScan);
    else
      v26 = RtlStringCbPrintfW(
              PoolWithTag,
              0x6AuLL,
              L"\\Device\\Harddisk%lu\\Partition%lu",
              v31,
              *(_QWORD *)RestartScan);
    EspFromFirmware = v26;
    if ( v26 >= 0 )
    {
      *v3 = PoolWithTag;
      goto LABEL_51;
    }
LABEL_49:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_51;
  }
  if ( !*(_WORD *)v4 )
  {
LABEL_46:
    EspFromFirmware = -1073740718;
    goto LABEL_49;
  }
  v16 = v4 + 1;
  do
  {
    if ( !(unsigned __int8)SiIsValidDiskDevice(*v16, v16[2]) )
      goto LABEL_34;
    RtlStringCbPrintfW(PoolWithTag, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *v16, 0LL);
    *(_QWORD *)((char *)v40 + 4) = 0LL;
    memset(v41, 0, sizeof(v41));
    LODWORD(v40[0]) = 1;
    v18 = 0;
    if ( (int)SiIssueSynchronousIoctl(PoolWithTag, v19, v40, v20, v41, 0x20u) >= 0 )
    {
      if ( v41[24] == 15 )
        goto LABEL_34;
      v18 = v41[24] == 16;
    }
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      P = 0LL;
    }
    DriveLayoutInformation = SiGetDriveLayoutInformation(PoolWithTag, &P);
    v5 = P;
    if ( DriveLayoutInformation >= 0 && *(_DWORD *)P == 1 )
    {
      v22 = *((_DWORD *)P + 1);
      if ( v22 )
      {
        v23 = (char *)P + 72;
        v17 = v22;
        do
        {
          v24 = *((_QWORD *)v23 + 1) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
          if ( !v24 )
            v24 = *((_QWORD *)v23 + 2) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
          if ( !v24 )
          {
            if ( !v6 || !v8 && v18 )
            {
              v36 = *v16;
              v29 = *(_DWORD *)v23;
            }
            ++v6;
            if ( v18 )
              ++v8;
          }
          v23 += 144;
          --v17;
        }
        while ( v17 );
      }
    }
LABEL_34:
    v16 += 4;
  }
  while ( *((_WORD *)v16 - 4) );
  v4 = (wchar_t **)v35;
  if ( !v6 )
    goto LABEL_46;
  if ( v6 <= 1 || v8 == 1 )
  {
    EspFromFirmware = 0;
    goto LABEL_42;
  }
  EspFromFirmware = SiGetEspFromFirmware(PoolWithTag, v17, 0LL, 1LL);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_49;
  }
  *v37 = PoolWithTag;
LABEL_51:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_55:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)EspFromFirmware;
}

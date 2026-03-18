/*
 * XREFs of IopCreateArcNamesDisk @ 0x1409F509C
 * Callers:
 *     IopCreateArcNames @ 0x1409F5418 (IopCreateArcNames.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x140661AF0 (IoGetDeviceObjectPointer.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     IoGetConfigurationInformation @ 0x14073B230 (IoGetConfigurationInformation.c)
 *     IopFetchConfigurationInformation @ 0x1409F5368 (IopFetchConfigurationInformation.c)
 */

__int64 IopCreateArcNamesDisk()
{
  ULONG DiskCount; // esi
  int ConfigurationInformation; // eax
  const WCHAR *v2; // rbx
  bool v3; // r12
  ULONG i; // edi
  int v5; // r15d
  __int64 v6; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-79h] BYREF
  PCWSTR SourceString; // [rsp+30h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-69h] BYREF
  PFILE_OBJECT FileObject[2]; // [rsp+48h] [rbp-59h] BYREF
  wchar_t pszDest[64]; // [rsp+58h] [rbp-49h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  SourceString = 0LL;
  LODWORD(DeviceObject) = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  *(GUID *)FileObject = GUID_DEVINTERFACE_DISK;
  ConfigurationInformation = IopFetchConfigurationInformation((PZZWSTR *)&SourceString, (GUID *)FileObject);
  v2 = SourceString;
  v3 = ConfigurationInformation < 0;
  if ( ConfigurationInformation < 0 )
    DiskCount += 20;
  for ( i = 0; i < DiskCount; ++i )
  {
    if ( v2 && *v2 )
    {
      v5 = -1;
      RtlInitUnicodeString(&DestinationString, v2);
      v6 = -1LL;
      do
        ++v6;
      while ( v2[v6] );
      v2 += v6 + 1;
      if ( v3 && !*v2 )
        DiskCount = i + 20;
    }
    else
    {
      v5 = i;
      RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition0", i, DeviceObject);
      RtlInitUnicodeString(&DestinationString, pszDest);
    }
    if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, FileObject, &DeviceObject) >= 0 )
    {
      IopCreateArcName(DeviceObject, v5);
      ObfDereferenceObjectWithTag(FileObject[0], 0x746C6644u);
    }
  }
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  return 0LL;
}

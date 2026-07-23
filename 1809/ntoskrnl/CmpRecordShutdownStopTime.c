/*
 * XREFs of CmpRecordShutdownStopTime @ 0x1407EE298
 * Callers:
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     RtlGetPersistedStateLocation @ 0x140613450 (RtlGetPersistedStateLocation.c)
 *     CmpReadBuildLab @ 0x1407EE134 (CmpReadBuildLab.c)
 */

__int64 CmpRecordShutdownStopTime()
{
  struct _PRIVILEGE_SET *v0; // rdi
  WCHAR *TargetPath; // rax
  WCHAR *v2; // rsi
  int PersistedStateLocation; // ebx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  ULONG DataSize; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID v10; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Data; // [rsp+D8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v0 = 0LL;
  DataSize = 0;
  v10 = 0LL;
  TargetPath = (WCHAR *)CmpAllocateTransientPoolWithTag(PagedPool, 0x410uLL, 0x30384D43u);
  v2 = TargetPath;
  if ( TargetPath )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ShutdownPath",
                               0LL,
                               L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS\\CURRENTVERSION\\SHUTDOWN",
                               LocationTypeRegistry,
                               TargetPath,
                               0x410u,
                               0LL);
    if ( PersistedStateLocation >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v2);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      PersistedStateLocation = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( PersistedStateLocation >= 0 )
      {
        Data = KeQueryPerformanceCounter(&PerformanceFrequency);
        RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounter");
        PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
        if ( PersistedStateLocation >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"LastBootPerfCounterFrequency");
          PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &PerformanceFrequency, 8u);
          if ( PersistedStateLocation >= 0 )
          {
            PersistedStateLocation = CmpReadBuildLab(&v10, &DataSize);
            if ( PersistedStateLocation < 0 )
            {
              v0 = (struct _PRIVILEGE_SET *)v10;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterBuildLab");
              v0 = (struct _PRIVILEGE_SET *)v10;
              PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v10, DataSize);
            }
          }
        }
      }
    }
    CmSiFreeMemory((PPRIVILEGE_SET)v2);
  }
  else
  {
    PersistedStateLocation = -1073741670;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v0 )
    CmSiFreeMemory(v0);
  return (unsigned int)PersistedStateLocation;
}

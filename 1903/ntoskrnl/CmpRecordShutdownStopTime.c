/*
 * XREFs of CmpRecordShutdownStopTime @ 0x140827B30
 * Callers:
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlGetPersistedStateLocation @ 0x1405C0E20 (RtlGetPersistedStateLocation.c)
 *     CmpReadBuildLab @ 0x1408279B8 (CmpReadBuildLab.c)
 */

__int64 CmpRecordShutdownStopTime()
{
  struct _PRIVILEGE_SET *v0; // rdi
  PLOOKASIDE_LIST_EX v1; // r9
  WCHAR *TargetPath; // rax
  WCHAR *v3; // rsi
  int PersistedStateLocation; // ebx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  ULONG DataSize; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID v11; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER Data; // [rsp+D8h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  Data.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v0 = 0LL;
  DataSize = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v11 = 0LL;
  TargetPath = (WCHAR *)CmpAllocateTransientPoolWithTag(PagedPool, 0x410uLL, 0x30384D43u, v1);
  v3 = TargetPath;
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
      RtlInitUnicodeString(&DestinationString, v3);
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
            PersistedStateLocation = CmpReadBuildLab(&v11, &DataSize);
            if ( PersistedStateLocation < 0 )
            {
              v0 = (struct _PRIVILEGE_SET *)v11;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterBuildLab");
              v0 = (struct _PRIVILEGE_SET *)v11;
              PersistedStateLocation = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v11, DataSize);
            }
          }
        }
      }
    }
    CmSiFreeMemory((PPRIVILEGE_SET)v3);
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

/*
 * XREFs of DlpLoadDxgkrnl @ 0x1C0141FE8
 * Callers:
 *     InitializeGraphicsInfrastructure @ 0x1C00C9854 (InitializeGraphicsInfrastructure.c)
 * Callees:
 *     DlpGetServiceNameInSystemSpace @ 0x1C0141F64 (DlpGetServiceNameInSystemSpace.c)
 */

__int64 __fastcall DlpLoadDxgkrnl(__int64 a1, union _LARGE_INTEGER a2)
{
  int v2; // esi
  const WCHAR *ServiceNameInSystemSpace; // rax
  WCHAR *v4; // rdi
  unsigned int DeviceObjectPointer; // ebx
  bool v6; // di
  const WCHAR *v7; // rax
  WCHAR *v8; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DriverServiceName; // [rsp+40h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp+10h] BYREF

  Interval = a2;
  v2 = 10;
  ServiceNameInSystemSpace = (const WCHAR *)DlpGetServiceNameInSystemSpace();
  v4 = (WCHAR *)ServiceNameInSystemSpace;
  if ( ServiceNameInSystemSpace )
  {
    RtlInitUnicodeString(&DestinationString, ServiceNameInSystemSpace);
    DeviceObjectPointer = ZwLoadDriver(&DestinationString);
    ExFreePoolWithTag(v4, 0);
    if ( (int)(DeviceObjectPointer + 0x80000000) < 0 || DeviceObjectPointer == -1073741554 )
    {
      v6 = DeviceObjectPointer != -1073741554;
      RtlInitUnicodeString(&ObjectName, L"\\Device\\DxgKrnl");
      while ( 1 )
      {
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                &ObjectName,
                                0xC0000000,
                                (PFILE_OBJECT *)&gpDxgkFileObject,
                                &gpDxgkDeviceObject);
        if ( (DeviceObjectPointer & 0x80000000) == 0 )
          break;
        if ( v6 )
        {
          v7 = (const WCHAR *)DlpGetServiceNameInSystemSpace();
          v8 = (WCHAR *)v7;
          if ( v7 )
          {
            RtlInitUnicodeString(&DriverServiceName, v7);
            ZwUnloadDriver(&DriverServiceName);
            ExFreePoolWithTag(v8, 0);
          }
          return DeviceObjectPointer;
        }
        Interval.QuadPart = -50000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        if ( !--v2 )
          return DeviceObjectPointer;
      }
      if ( !v6 )
        return (unsigned int)-1073741554;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return DeviceObjectPointer;
}

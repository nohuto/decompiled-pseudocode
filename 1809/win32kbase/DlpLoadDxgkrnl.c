/*
 * XREFs of DlpLoadDxgkrnl @ 0x1C0090C48
 * Callers:
 *     InitializeGraphicsInfrastructure @ 0x1C0090A94 (InitializeGraphicsInfrastructure.c)
 * Callees:
 *     DlpGetServiceNameInSystemSpace @ 0x1C0090D34 (DlpGetServiceNameInSystemSpace.c)
 *     DlpUnloadDxgkrnl @ 0x1C016568C (DlpUnloadDxgkrnl.c)
 */

__int64 __fastcall DlpLoadDxgkrnl(__int64 a1, union _LARGE_INTEGER a2)
{
  int v2; // esi
  const WCHAR *ServiceNameInSystemSpace; // rax
  WCHAR *v4; // rdi
  unsigned int DeviceObjectPointer; // ebx
  bool v6; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

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
          DlpUnloadDxgkrnl();
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

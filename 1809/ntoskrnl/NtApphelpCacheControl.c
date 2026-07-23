/*
 * XREFs of NtApphelpCacheControl @ 0x140662EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExGetPreviousMode @ 0x1400DDCF0 (ExGetPreviousMode.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400DDD10 (IoBuildDeviceIoControlRequest.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 *     AhcCacheQueryHwId @ 0x140906508 (AhcCacheQueryHwId.c)
 */

NTSTATUS __stdcall NtApphelpCacheControl(APPHELPCACHESERVICECLASS Service, PAPPHELP_CACHE_SERVICE_LOOKUP ServiceData)
{
  ULONG v3; // edi
  __int32 v4; // ecx
  NTSTATUS v5; // ebx
  PIRP v6; // rbx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  bool v13; // zf
  __int32 v14; // ecx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+C8h] [rbp+20h] BYREF

  if ( Service >= 12 )
    return -1073741811;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v3 = (4 * Service) | 0x220003;
  if ( Service == 9 )
    return AhcCacheQueryHwId(ServiceData);
  if ( Service <= (ApphelpCacheServiceDump|ApphelpCacheServiceRemove) )
  {
    if ( Service != (ApphelpCacheServiceDump|ApphelpCacheServiceRemove) )
    {
      if ( Service == ApphelpCacheServiceLookup )
        goto LABEL_5;
      v9 = Service - 1;
      if ( !v9 )
        goto LABEL_15;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_15;
      v14 = v10 - 1;
      v13 = v14 == 0;
LABEL_19:
      if ( !v13 )
      {
        if ( v14 == 1 )
          goto LABEL_21;
        return -1073741811;
      }
LABEL_15:
      v5 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = Service - 6;
    if ( !v4 )
    {
LABEL_5:
      v5 = -1073741275;
      goto LABEL_6;
    }
    v11 = v4 - 1;
    if ( !v11 )
      goto LABEL_15;
    v12 = v11 - 1;
    if ( v12 )
    {
      v14 = v12 - 2;
      v13 = v14 == 0;
      goto LABEL_19;
    }
  }
LABEL_21:
  v5 = -1073741823;
LABEL_6:
  if ( g_AhcDeviceObject )
  {
LABEL_7:
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(v3, g_AhcDeviceObject, ServiceData, 0x178u, 0LL, 0, 0, &Event, &IoStatusBlock);
    if ( !v6 )
      return -1073741823;
    v6->RequestorMode = ExGetPreviousMode();
    return IofCallDriver(g_AhcDeviceObject, v6);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"\\Device\\ahcache") >= 0
    && IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&g_AhcDeviceObject, (signed __int64)DeviceObject, 0LL) )
      ObfDereferenceObject(FileObject);
    goto LABEL_7;
  }
  return v5;
}

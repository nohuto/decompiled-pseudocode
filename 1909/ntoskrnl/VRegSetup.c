/*
 * XREFs of VRegSetup @ 0x1407842A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     ObSetSecurityObjectByPointer @ 0x1405C8D90 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x14069F670 (IoCreateDevice.c)
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 *     PspStorageAllocSlot @ 0x14075E268 (PspStorageAllocSlot.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x140784474 (VrpInitializeLoadedDifferencingHives.c)
 */

__int64 __fastcall VRegSetup(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax
  __int128 v7; // [rsp+40h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-39h] BYREF
  __int128 v10[8]; // [rsp+70h] [rbp-29h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&v7 = 0x2000000020000LL;
  *((_QWORD *)&v7 + 1) = 0xF000000020000LL;
  TraceLoggingRegisterEx(&stru_140425BF8, 0LL, 0LL);
  RtlpQueryRegistryValues(0x80000002, L"Session Manager\\Configuration Manager", (__int64)&VrpRegistryValuesTable, 0LL);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x22u, 0x100u, 0, &VrpDeviceObject);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  VrpActiveSilosLock = 0LL;
  VrpDriverObject = (__int64)DriverObject;
  v3 = ObSetSecurityObjectByPointer((__int64)VrpDeviceObject, 12, (__int64)&VrpHardCodedSdBlob);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  VrpDeviceObject->Flags &= ~0x80u;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)VrpRegistryUnload;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)&VrpRegistryDispatch;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)&VrpIoctlDeviceDispatch;
  RtlInitUnicodeString(&SourceString, L"VRegConfigurationContext");
  memset(v10, 0, 0x78uLL);
  BYTE2(v10[0]) |= 4u;
  *((_QWORD *)&v10[4] + 1) = VrpJobContextDelete;
  LOWORD(v10[0]) = 120;
  DWORD2(v10[0]) = 256;
  *(_QWORD *)((char *)&v10[2] + 4) = 0x6000000001LL;
  *(__int128 *)((char *)v10 + 12) = v7;
  HIDWORD(v10[1]) = 983040;
  v4 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, 0LL, &VrpJobContextType);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 4uLL, 0LL);
  v5 = VrpInitializeLoadedDifferencingHives();
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 5uLL, 0LL);
  result = PspStorageAllocSlot((ULONG *)&VrpSiloContextSlot);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}

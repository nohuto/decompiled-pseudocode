/*
 * XREFs of DpiKsrStopAdapters @ 0x1C02A96E8
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C01541B8 (DpiFdoHandleSystemPower.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02AE8D4 (DpiLdaStopAllAdaptersInChain.c)
 */

NTSTATUS __fastcall DpiKsrStopAdapters(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  struct _DRIVER_OBJECT *DriverObject; // rdx
  UNICODE_STRING String1; // [rsp+20h] [rbp-89h] BYREF
  UNICODE_STRING v8; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v9[10]; // [rsp+40h] [rbp-69h] BYREF
  _OWORD v10[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v11; // [rsp+B0h] [rbp+7h]
  wchar_t v12; // [rsp+B8h] [rbp+Fh]
  _OWORD v13[2]; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v14; // [rsp+E0h] [rbp+37h]

  DeviceExtension = (__int64)a1->DeviceExtension;
  if ( *(_BYTE *)(DeviceExtension + 1159) )
    return -1073741637;
  if ( *(_BYTE *)(DeviceExtension + 2692) )
    return -1073741637;
  if ( *(_BYTE *)(DeviceExtension + 2694) )
    return -1073741637;
  if ( *(_BYTE *)(DeviceExtension + 2695) )
    return -1073741637;
  memset(v9, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  DriverObject = a1->DriverObject;
  v9[8] = MEMORY[0xFFFFF78000000014];
  v10[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v12 = aDriverBasicdis[20];
  v11 = *(_QWORD *)L"play";
  String1.Buffer = (wchar_t *)v10;
  v10[1] = *(_OWORD *)L"BasicDisplay";
  LODWORD(v9[3]) = 5;
  LOBYTE(v9[6]) = -1;
  v13[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  *(_QWORD *)&String1.Length = 2752552LL;
  v14 = *(_QWORD *)L"der";
  v13[1] = *(_OWORD *)L"BasicRender";
  *(_QWORD *)&v8.Length = 2621478LL;
  v8.Buffer = (wchar_t *)v13;
  if ( !RtlCompareUnicodeString(&String1, &DriverObject->DriverName, 1u)
    || !RtlCompareUnicodeString(&v8, &a1->DriverObject->DriverName, 1u) )
  {
    return -1073741637;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( *(_DWORD *)(DeviceExtension + 504) )
    DpiLdaStopAllAdaptersInChain(a1, v9);
  else
    DpiFdoStopAdapter(a1, (__int64)v9);
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
}

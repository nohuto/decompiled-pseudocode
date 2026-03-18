/*
 * XREFs of ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0245708
 * Callers:
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EF10 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?OnDeviceClosed@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C023A300 (-OnDeviceClosed@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C02453E4 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 */

void __fastcall InkProcessor::OnDeviceClosed(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  PVOID *InkDeviceByRimDeviceObject; // rax
  PVOID *v5; // rdi
  int v6; // [rsp+30h] [rbp-49h] BYREF
  PVOID *v7; // [rsp+38h] [rbp-41h] BYREF
  struct RawInputManagerDeviceObject *v8; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v10; // [rsp+70h] [rbp-9h]
  int v11; // [rsp+78h] [rbp-1h]
  int v12; // [rsp+7Ch] [rbp+3h]
  const char *v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  PVOID **v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  struct RawInputManagerDeviceObject **v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = (PVOID *)InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v5 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      Rim::RimBackedDeviceBase::OnDeviceClosed(InkDeviceByRimDeviceObject);
      if ( dword_1C0321298 > 4u )
      {
        v6 = 0;
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v10 = &v6;
        v13 = "Ink device closed";
        v16 = &v7;
        v19 = &v8;
        v11 = 4;
        v14 = 18;
        v7 = v5;
        v17 = 8;
        v8 = a2;
        v20 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8D11, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  else if ( dword_1C0321298 > 2u )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v6;
    v13 = "Ink processor not enabled";
    v6 = -1073741823;
    v11 = 4;
    v14 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}

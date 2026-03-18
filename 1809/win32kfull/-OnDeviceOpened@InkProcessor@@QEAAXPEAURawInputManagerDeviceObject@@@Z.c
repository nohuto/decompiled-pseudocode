/*
 * XREFs of ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C022D0B8
 * Callers:
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8C4C (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?OnDeviceOpened@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C0221C00 (-OnDeviceOpened@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C022CBB4 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 */

void __fastcall InkProcessor::OnDeviceOpened(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  unsigned int v4; // edi
  Rim::RimBackedDeviceBase *InkDeviceByRimDeviceObject; // rax
  Rim::RimBackedDeviceBase *v6; // rsi
  unsigned int v7; // [rsp+30h] [rbp-49h] BYREF
  Rim::RimBackedDeviceBase *v8; // [rsp+38h] [rbp-41h] BYREF
  struct RawInputManagerDeviceObject *v9; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned int *v11; // [rsp+70h] [rbp-9h]
  int v12; // [rsp+78h] [rbp-1h]
  int v13; // [rsp+7Ch] [rbp+3h]
  const char *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  Rim::RimBackedDeviceBase **v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  struct RawInputManagerDeviceObject **v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v6 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      Rim::RimBackedDeviceBase::OnDeviceOpened(InkDeviceByRimDeviceObject);
      if ( dword_1C030C390 > 4u )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v11 = &v7;
        v14 = "Ink device opened";
        v17 = &v8;
        v20 = &v9;
        v7 = v4;
        v12 = 4;
        v15 = 18;
        v8 = v6;
        v18 = 8;
        v9 = a2;
        v21 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6036, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v7;
    v14 = "Ink processor not enabled";
    v7 = v4;
    v12 = 4;
    v15 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}

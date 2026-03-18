/*
 * XREFs of ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C02040BC
 * Callers:
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4284 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?OnDeviceOpened@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C01F9A80 (-OnDeviceOpened@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C0203C1C (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 */

void __fastcall InkProcessor::OnDeviceOpened(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned int v6; // edi
  Rim::RimBackedDeviceBase *InkDeviceByRimDeviceObject; // rax
  Rim::RimBackedDeviceBase *v8; // rsi
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v11; // [rsp+30h] [rbp-49h] BYREF
  Rim::RimBackedDeviceBase *v12; // [rsp+38h] [rbp-41h] BYREF
  struct RawInputManagerDeviceObject *v13; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  const char *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  Rim::RimBackedDeviceBase **v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  struct RawInputManagerDeviceObject **v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v6 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v8 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      Rim::RimBackedDeviceBase::OnDeviceOpened(InkDeviceByRimDeviceObject);
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v15 = &v11;
        v18 = "Ink device opened";
        v21 = &v12;
        v24 = &v13;
        v11 = v6;
        v16 = 4;
        v19 = 18;
        v12 = v8;
        v22 = 8;
        v13 = a2;
        v25 = 8;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3597, v9, v10, 6u, &pData);
      }
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v11;
    v18 = "Ink processor not enabled";
    v11 = v6;
    v16 = 4;
    v19 = 26;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v4, v5, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}

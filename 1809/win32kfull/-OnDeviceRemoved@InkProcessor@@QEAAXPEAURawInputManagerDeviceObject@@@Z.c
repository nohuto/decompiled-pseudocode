/*
 * XREFs of ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C022D27C
 * Callers:
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8CEC (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C012D12C (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C022CBB4 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C022D7E4 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  unsigned int v4; // edi
  struct InkDevice *InkDeviceByRimDeviceObject; // rax
  InkFeedbackServer *v6; // rcx
  InkProcessor *v7; // rcx
  struct InkDevice *v8; // rax
  unsigned int v9; // [rsp+30h] [rbp-59h] BYREF
  struct InkDevice *v10; // [rsp+38h] [rbp-51h] BYREF
  struct InkDevice *v11; // [rsp+40h] [rbp-49h] BYREF
  struct RawInputManagerDeviceObject *v12; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  const char *v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+8Ch] [rbp+3h]
  struct InkDevice **v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+9Ch] [rbp+13h]
  struct InkDevice **v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+ACh] [rbp+23h]
  struct RawInputManagerDeviceObject **v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+BCh] [rbp+33h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v10 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v6, (struct InkDevice *)((char *)InkDeviceByRimDeviceObject + 32));
      InkProcessor::UnlinkAndReleaseInkDevice(v7, &v10);
      if ( dword_1C030C390 > 4u )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v14 = &v9;
        v17 = "Ink device removed";
        v8 = v10;
        v20 = &v10;
        v9 = v4;
        v15 = 4;
        v18 = 19;
        v21 = 8;
        if ( v10 )
          v8 = (struct InkDevice *)((char *)v10 + 32);
        v25 = 0;
        v28 = 0;
        v11 = v8;
        v23 = &v11;
        v26 = &v12;
        v24 = 8;
        v12 = a2;
        v27 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5FC7, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v9;
    v17 = "Ink processor not enabled";
    v9 = v4;
    v15 = 4;
    v18 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}

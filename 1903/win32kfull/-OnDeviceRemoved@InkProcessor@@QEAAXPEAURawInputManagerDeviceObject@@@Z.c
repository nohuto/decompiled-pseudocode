/*
 * XREFs of ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0245A60
 * Callers:
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C020F0C8 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C0139490 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C02453E4 (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C0245FA0 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  struct InkDevice *InkDeviceByRimDeviceObject; // rax
  InkFeedbackServer *v5; // rcx
  InkProcessor *v6; // rcx
  struct InkDevice *v7; // rax
  int v8; // [rsp+30h] [rbp-49h] BYREF
  struct InkDevice *v9; // [rsp+38h] [rbp-41h] BYREF
  struct InkDevice *v10; // [rsp+40h] [rbp-39h] BYREF
  struct RawInputManagerDeviceObject *v11; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  const char *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  struct InkDevice **v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  struct InkDevice **v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]
  struct RawInputManagerDeviceObject **v25; // [rsp+B0h] [rbp+37h]
  int v26; // [rsp+B8h] [rbp+3Fh]
  int v27; // [rsp+BCh] [rbp+43h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v9 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v5, (struct InkDevice *)((char *)InkDeviceByRimDeviceObject + 32));
      InkProcessor::UnlinkAndReleaseInkDevice(v6, &v9);
      if ( dword_1C0321298 > 4u )
      {
        v8 = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v13 = &v8;
        v16 = "Ink device removed";
        v7 = v9;
        v19 = &v9;
        v14 = 4;
        v17 = 19;
        v20 = 8;
        if ( v9 )
          v7 = (struct InkDevice *)((char *)v9 + 32);
        v24 = 0;
        v27 = 0;
        v10 = v7;
        v22 = &v10;
        v25 = &v11;
        v23 = 8;
        v11 = a2;
        v26 = 8;
        TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8CA2, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( dword_1C0321298 > 2u )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v8;
    v16 = "Ink processor not enabled";
    v8 = -1073741823;
    v14 = 4;
    v17 = 26;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}

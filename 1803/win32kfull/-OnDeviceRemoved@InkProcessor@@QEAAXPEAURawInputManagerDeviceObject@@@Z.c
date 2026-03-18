/*
 * XREFs of ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0204258
 * Callers:
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D4320 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00E4CC8 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject@@@Z @ 0x1C0203C1C (-FindInkDeviceByRimDeviceObject@InkProcessor@@AEBAPEAVInkDevice@@PEBURawInputManagerDeviceObject.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C020473C (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned int v6; // edi
  struct InkDevice *InkDeviceByRimDeviceObject; // rax
  InkFeedbackServer *v8; // rcx
  InkProcessor *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  struct InkDevice *v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-59h] BYREF
  struct InkDevice *v14; // [rsp+38h] [rbp-51h] BYREF
  struct InkDevice *v15; // [rsp+40h] [rbp-49h] BYREF
  struct RawInputManagerDeviceObject *v16; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  unsigned int *v18; // [rsp+70h] [rbp-19h]
  int v19; // [rsp+78h] [rbp-11h]
  int v20; // [rsp+7Ch] [rbp-Dh]
  const char *v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]
  struct InkDevice **v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]
  struct InkDevice **v27; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+ACh] [rbp+23h]
  struct RawInputManagerDeviceObject **v30; // [rsp+B0h] [rbp+27h]
  int v31; // [rsp+B8h] [rbp+2Fh]
  int v32; // [rsp+BCh] [rbp+33h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v6 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    v14 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v8, (struct InkDevice *)((char *)InkDeviceByRimDeviceObject + 32));
      InkProcessor::UnlinkAndReleaseInkDevice(v9, &v14);
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v18 = &v13;
        v21 = "Ink device removed";
        v12 = v14;
        v24 = &v14;
        v13 = v6;
        v19 = 4;
        v22 = 19;
        v25 = 8;
        if ( v14 )
          v12 = (struct InkDevice *)((char *)v14 + 32);
        v29 = 0;
        v32 = 0;
        v15 = v12;
        v27 = &v15;
        v30 = &v16;
        v28 = 8;
        v16 = a2;
        v31 = 8;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E35F1, v10, v11, 7u, &pData);
      }
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v13;
    v21 = "Ink processor not enabled";
    v13 = v6;
    v19 = 4;
    v22 = 26;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v4, v5, 4u, &pData);
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}

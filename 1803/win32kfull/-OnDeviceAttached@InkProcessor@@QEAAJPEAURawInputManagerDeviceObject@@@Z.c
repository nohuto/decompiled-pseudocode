/*
 * XREFs of ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0203C44
 * Callers:
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01D405C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00E4C60 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0203BE0 (--_EInkDevice@@UEAAPEAXI@Z.c)
 *     ??0InkDevice@@QEAA@XZ @ 0x1C020E77C (--0InkDevice@@QEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020F240 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessor::OnDeviceAttached(InkProcessor ***this, struct RawInputManagerDeviceObject *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  InkDevice *v6; // rdi
  signed int v7; // ebx
  InkDevice *v8; // rax
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  InkProcessor **v14; // rdx
  InkProcessor *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v19; // [rsp+30h] [rbp-69h] BYREF
  struct RawInputManagerDeviceObject *v20; // [rsp+38h] [rbp-61h] BYREF
  char *v21; // [rsp+40h] [rbp-59h] BYREF
  struct RawInputManagerDeviceObject *v22; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  const char *v27; // [rsp+80h] [rbp-19h]
  int v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+8Ch] [rbp-Dh]
  struct RawInputManagerDeviceObject **v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+98h] [rbp-1h]
  int v32; // [rsp+9Ch] [rbp+3h]
  char **v33; // [rsp+A0h] [rbp+7h]
  int v34; // [rsp+A8h] [rbp+Fh]
  int v35; // [rsp+ACh] [rbp+13h]
  struct RawInputManagerDeviceObject **v36; // [rsp+B0h] [rbp+17h]
  int v37; // [rsp+B8h] [rbp+1Fh]
  int v38; // [rsp+BCh] [rbp+23h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v6 = 0LL;
  v7 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( !*((_BYTE *)this + 8) )
  {
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v26 = 0;
      v29 = 0;
      v24 = &v19;
      v27 = "Ink processor not enabled";
      v19 = v7;
      v25 = 4;
      v28 = 26;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v4, v5, 4u, &pData);
    }
LABEL_16:
    if ( v7 < 0 && v6 )
      InkDevice::`vector deleting destructor'(v6, 1);
    goto LABEL_19;
  }
  v8 = (InkDevice *)Win32AllocPoolZInit(168LL, 1349217865LL);
  if ( v8 )
    v6 = InkDevice::InkDevice(v8);
  if ( v6 )
  {
    v11 = InkDevice::Initialize(v6, a2);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v14 = this[3];
      v15 = (InkDevice *)((char *)v6 + 88);
      if ( *v14 != (InkProcessor *)(this + 2) )
        __fastfail(3u);
      *((_QWORD *)v6 + 12) = v14;
      *(_QWORD *)v15 = this + 2;
      *v14 = v15;
      this[3] = (InkProcessor **)v15;
      InkFeedbackServer::AddInkFeedbackProvider((InkFeedbackServer *)(this + 12), (InkDevice *)((char *)v6 + 32));
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v24 = &v19;
        v27 = "Ink device attached";
        v30 = &v20;
        v33 = &v21;
        v31 = 8;
        v34 = 8;
        v37 = 8;
        v19 = v7;
        v25 = 4;
        v28 = 20;
        v20 = v6;
        v21 = (char *)v6 + 32;
        v22 = a2;
        v36 = &v22;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E35F1, v16, v17, 7u, &pData);
      }
    }
    else if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v19 = v11;
      v24 = &v19;
      v27 = "Failed to initialize ink device";
      v30 = &v20;
      v31 = 8;
      v25 = 4;
      v28 = 32;
      v20 = a2;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3660, v12, v13, 5u, &pData);
    }
    goto LABEL_16;
  }
  v7 = -1073741801;
  if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v26 = 0;
    v24 = &v19;
    v19 = -1073741801;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v9, v10, 3u, &pData);
  }
LABEL_19:
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v7;
}

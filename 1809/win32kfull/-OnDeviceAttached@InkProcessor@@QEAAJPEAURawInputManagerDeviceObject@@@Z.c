/*
 * XREFs of ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C022CBDC
 * Callers:
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F8A0C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C013312C (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C022CB70 (--_EInkDevice@@UEAAPEAXI@Z.c)
 *     ??0InkDevice@@QEAA@XZ @ 0x1C0237CA8 (--0InkDevice@@QEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02387C0 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessor::OnDeviceAttached(InkProcessor ***this, struct RawInputManagerDeviceObject *a2)
{
  InkDevice *v4; // rdi
  signed int v5; // ebx
  InkDevice *v6; // rax
  int v7; // eax
  InkProcessor **v8; // rdx
  InkProcessor *v9; // rcx
  int v11; // [rsp+30h] [rbp-69h] BYREF
  struct RawInputManagerDeviceObject *v12; // [rsp+38h] [rbp-61h] BYREF
  char *v13; // [rsp+40h] [rbp-59h] BYREF
  struct RawInputManagerDeviceObject *v14; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v16; // [rsp+70h] [rbp-29h]
  int v17; // [rsp+78h] [rbp-21h]
  int v18; // [rsp+7Ch] [rbp-1Dh]
  const char *v19; // [rsp+80h] [rbp-19h]
  int v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+8Ch] [rbp-Dh]
  struct RawInputManagerDeviceObject **v22; // [rsp+90h] [rbp-9h]
  int v23; // [rsp+98h] [rbp-1h]
  int v24; // [rsp+9Ch] [rbp+3h]
  char **v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]
  struct RawInputManagerDeviceObject **v28; // [rsp+B0h] [rbp+17h]
  int v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+BCh] [rbp+23h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = 0LL;
  v5 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( !*((_BYTE *)this + 8) )
  {
    if ( dword_1C030C390 > 2u )
    {
      v18 = 0;
      v21 = 0;
      v16 = &v11;
      v19 = "Ink processor not enabled";
      v11 = v5;
      v17 = 4;
      v20 = 26;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
    }
LABEL_16:
    if ( v5 < 0 && v4 )
      InkDevice::`vector deleting destructor'(v4, 1);
    goto LABEL_19;
  }
  v6 = (InkDevice *)Win32AllocPoolZInit(168LL, 1349217865LL);
  if ( v6 )
    v4 = InkDevice::InkDevice(v6);
  if ( v4 )
  {
    v7 = InkDevice::Initialize(v4, a2);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v8 = this[3];
      v9 = (InkDevice *)((char *)v4 + 88);
      if ( *v8 != (InkProcessor *)(this + 2) )
        __fastfail(3u);
      *((_QWORD *)v4 + 12) = v8;
      *(_QWORD *)v9 = this + 2;
      *v8 = v9;
      this[3] = (InkProcessor **)v9;
      InkFeedbackServer::AddInkFeedbackProvider((InkFeedbackServer *)(this + 12), (InkDevice *)((char *)v4 + 32));
      if ( dword_1C030C390 > 4u )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v16 = &v11;
        v19 = "Ink device attached";
        v22 = &v12;
        v25 = &v13;
        v23 = 8;
        v26 = 8;
        v29 = 8;
        v11 = v5;
        v17 = 4;
        v20 = 20;
        v12 = v4;
        v13 = (char *)v4 + 32;
        v14 = a2;
        v28 = &v14;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5FC7, 0LL, 0LL, 7u, &pData);
      }
    }
    else if ( dword_1C030C390 > 2u )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v11 = v7;
      v16 = &v11;
      v19 = "Failed to initialize ink device";
      v22 = &v12;
      v23 = 8;
      v17 = 4;
      v20 = 32;
      v12 = a2;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6090, 0LL, 0LL, 5u, &pData);
    }
    goto LABEL_16;
  }
  v5 = -1073741801;
  if ( dword_1C030C390 > 2u )
  {
    v18 = 0;
    v16 = &v11;
    v11 = -1073741801;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
  }
LABEL_19:
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v5;
}

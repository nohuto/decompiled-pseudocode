/*
 * XREFs of ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0244CCC
 * Callers:
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020EB6C (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C01185F0 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1C0244C60 (--_EInkDevice@@UEAAPEAXI@Z.c)
 *     ??0InkDevice@@QEAA@XZ @ 0x1C02501F8 (--0InkDevice@@QEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0250D10 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall InkProcessor::OnDeviceAttached(InkProcessor ***this, struct RawInputManagerDeviceObject *a2)
{
  int v4; // ebx
  InkDevice *v5; // rax
  InkDevice *v6; // rdi
  int v7; // eax
  InkProcessor **v8; // rdx
  InkProcessor *v9; // rcx
  int v11; // [rsp+30h] [rbp-69h] BYREF
  struct RawInputManagerDeviceObject *v12; // [rsp+38h] [rbp-61h] BYREF
  char *v13; // [rsp+40h] [rbp-59h] BYREF
  struct RawInputManagerDeviceObject *v14; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  const char *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  struct RawInputManagerDeviceObject **v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  char **v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]
  struct RawInputManagerDeviceObject **v24; // [rsp+B0h] [rbp+17h]
  __int64 v25; // [rsp+B8h] [rbp+1Fh]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    v5 = (InkDevice *)Win32AllocPoolZInit(168LL, 1349217865LL);
    if ( v5 )
      v6 = InkDevice::InkDevice(v5);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = InkDevice::Initialize(v6, a2);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v8 = this[3];
        v9 = (InkDevice *)((char *)v6 + 88);
        if ( *v8 != (InkProcessor *)(this + 2) )
          __fastfail(3u);
        *((_QWORD *)v6 + 12) = v8;
        *(_QWORD *)v9 = this + 2;
        *v8 = v9;
        this[3] = (InkProcessor **)v9;
        InkFeedbackServer::AddInkFeedbackProvider((InkFeedbackServer *)(this + 12), (InkDevice *)((char *)v6 + 32));
        if ( dword_1C031F298 > 4u )
        {
          v11 = v4;
          v16 = &v11;
          v22 = &v13;
          v18 = "Ink device attached";
          v17 = 4LL;
          v20 = &v12;
          v19 = 20LL;
          v12 = v6;
          v21 = 8LL;
          v13 = (char *)v6 + 32;
          v23 = 8LL;
          v14 = a2;
          v24 = &v14;
          v25 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8262, 0LL, 0LL, 7u, &pData);
        }
      }
      else if ( dword_1C031F298 > 2u )
      {
        v11 = v7;
        v16 = &v11;
        v18 = "Failed to initialize ink device";
        v20 = &v12;
        v17 = 4LL;
        v19 = 32LL;
        v12 = a2;
        v21 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E832B, 0LL, 0LL, 5u, &pData);
      }
      if ( v4 < 0 )
        InkDevice::`vector deleting destructor'(v6, 1);
    }
    else
    {
      v4 = -1073741801;
      if ( dword_1C031F298 > 2u )
      {
        v11 = -1073741801;
        v16 = &v11;
        v17 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  else
  {
    v4 = -1073741823;
    if ( dword_1C031F298 > 2u )
    {
      v11 = -1073741823;
      v16 = &v11;
      v18 = "Ink processor not enabled";
      v17 = 4LL;
      v19 = 26LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( this )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}

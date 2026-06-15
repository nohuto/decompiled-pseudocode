/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18000C8DC
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180008DE8 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18000C540 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 * Callees:
 *     Create_SpatialAudioPositionCalc @ 0x18000CA00 (Create_SpatialAudioPositionCalc.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18000CBC0 (Create_SpatialAudioDeviceStateReader.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyReader::RuntimeClassInitialize(
        SpatialAudioDevicePropertyReader *this,
        unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  HRESULT SpatialAudioDeviceStateReader; // ebx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  const GUID *v16; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  const GUID *v20; // r8
  const GUID *v21; // r9
  LPVOID v22; // rbx
  const GUID *v23; // r8
  const GUID *v24; // r9
  LPVOID v25; // rbx
  const GUID *v26; // r8
  const GUID *v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rcx
  const GUID *v30; // r8
  const GUID *v31; // r9
  int v32; // [rsp+38h] [rbp-99h] BYREF
  int v33; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v34; // [rsp+40h] [rbp-91h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+58h] [rbp-79h] BYREF
  const char *v37; // [rsp+78h] [rbp-59h]
  __int64 v38; // [rsp+80h] [rbp-51h]
  int *v39; // [rsp+88h] [rbp-49h]
  __int64 v40; // [rsp+90h] [rbp-41h]
  int *v41; // [rsp+98h] [rbp-39h]
  __int64 v42; // [rsp+A0h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-29h] BYREF
  const char *v44; // [rsp+C8h] [rbp-9h]
  __int64 v45; // [rsp+D0h] [rbp-1h]
  int *v46; // [rsp+D8h] [rbp+7h]
  __int64 v47; // [rsp+E0h] [rbp+Fh]
  int *v48; // [rsp+E8h] [rbp+17h]
  __int64 v49; // [rsp+F0h] [rbp+1Fh]

  ppv[1] = (LPVOID)-2LL;
  v6 = (_QWORD *)((char *)this + 416);
  v7 = *((_QWORD *)this + 52);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3);
  v33 = SpatialAudioDeviceStateReader;
  if ( SpatialAudioDeviceStateReader >= 0 )
  {
    if ( a3 )
    {
      if ( *((struct IPropertyStore **)this + 51) != a3 )
      {
        ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
        v11 = *((_QWORD *)this + 51);
        *((_QWORD *)this + 51) = a3;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      goto LABEL_8;
    }
    ppv[0] = 0LL;
    v34 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
    SpatialAudioDeviceStateReader = CoCreateInstance(
                                      &CLSID_MMDeviceEnumerator,
                                      0LL,
                                      0x17u,
                                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                      ppv);
    v32 = SpatialAudioDeviceStateReader;
    if ( SpatialAudioDeviceStateReader >= 0 )
    {
      memset_0(&pData, 0, 0x4EuLL);
      SpatialAudioDeviceStateReader = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, (LPOLESTR)&pData, 39);
      v32 = SpatialAudioDeviceStateReader;
      if ( SpatialAudioDeviceStateReader >= 0 )
      {
        if ( a2 && (unsigned int)_o__wcsicmp(a2, &pData) )
        {
          v22 = ppv[0];
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
          SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(LPVOID, unsigned __int16 *, __int64 *))(*(_QWORD *)v22 + 40LL))(
                                            v22,
                                            a2,
                                            &v34);
          v32 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_1801B53C0 > 2 )
            {
              v37 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v38 = 57LL;
              v33 = 227;
              v39 = &v33;
              v40 = 4LL;
              v41 = &v32;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v23, v24, 5u, &v36);
            }
            goto LABEL_18;
          }
        }
        else
        {
          v25 = ppv[0];
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
          SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v25 + 32LL))(
                                            v25,
                                            0LL,
                                            1LL,
                                            &v34);
          v32 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_1801B53C0 > 2 )
            {
              v37 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v38 = 57LL;
              v33 = 222;
              v39 = &v33;
              v40 = 4LL;
              v41 = &v32;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v26, v27, 5u, &v36);
            }
            goto LABEL_18;
          }
        }
        v28 = v34;
        v29 = *((_QWORD *)this + 51);
        if ( v29 )
        {
          *((_QWORD *)this + 51) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v28 + 32LL))(
                                          v28,
                                          0LL,
                                          (char *)this + 408);
        v32 = SpatialAudioDeviceStateReader;
        if ( SpatialAudioDeviceStateReader >= 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
LABEL_8:
          v12 = *((_QWORD *)this + 50);
          if ( v12 )
          {
            *((_QWORD *)this + 50) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          SpatialAudioDeviceStateReader = Create_SpatialAudioPositionCalc((char *)this + 400);
          v32 = SpatialAudioDeviceStateReader;
          if ( SpatialAudioDeviceStateReader < 0 )
          {
            if ( (unsigned int)dword_1801B53C0 > 2 )
            {
              v37 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v38 = 57LL;
              v33 = 236;
              v39 = &v33;
              v40 = 4LL;
              v41 = &v32;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v13, v14, 5u, &v36);
            }
          }
          else
          {
            SpatialAudioDeviceStateReader = (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL))(this);
            v32 = SpatialAudioDeviceStateReader;
            if ( SpatialAudioDeviceStateReader < 0 && (unsigned int)dword_1801B53C0 > 2 )
            {
              v37 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v38 = 57LL;
              v33 = 240;
              v39 = &v33;
              v40 = 4LL;
              v41 = &v32;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v15, v16, 5u, &v36);
            }
          }
          return (unsigned int)SpatialAudioDeviceStateReader;
        }
        if ( (unsigned int)dword_1801B53C0 > 2 )
        {
          v37 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
          v38 = 57LL;
          v33 = 231;
          v39 = &v33;
          v40 = 4LL;
          v41 = &v32;
          v42 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v30, v31, 5u, &v36);
        }
      }
      else if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v37 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
        v38 = 57LL;
        v33 = 217;
        v39 = &v33;
        v40 = 4LL;
        v41 = &v32;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v20, v21, 5u, &v36);
      }
    }
    else if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v37 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      v38 = 57LL;
      v33 = 213;
      v39 = &v33;
      v40 = 4LL;
      v41 = &v32;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v18, v19, 5u, &v36);
    }
LABEL_18:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(ppv);
    return (unsigned int)SpatialAudioDeviceStateReader;
  }
  if ( (unsigned int)dword_1801B53C0 > 2 )
  {
    v44 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
    v45 = 57LL;
    v32 = 201;
    v46 = &v32;
    v47 = 4LL;
    v48 = &v33;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v9, v10, 5u, &pData);
  }
  return (unsigned int)SpatialAudioDeviceStateReader;
}

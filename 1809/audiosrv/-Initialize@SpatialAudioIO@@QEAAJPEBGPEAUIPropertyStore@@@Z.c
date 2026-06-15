/*
 * XREFs of ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041C10
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041630 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800537A0 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180053A7C (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioIO::Initialize(
        SpatialAudioIO *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  HRESULT Instance; // ebx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const GUID *v12; // r8
  const GUID *v13; // r9
  LPVOID v14; // rbx
  const GUID *v15; // r8
  const GUID *v16; // r9
  LPVOID v17; // rbx
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  const GUID *v22; // r8
  const GUID *v23; // r9
  __int64 v24; // rcx
  const GUID *v25; // r8
  const GUID *v26; // r9
  int v27; // [rsp+38h] [rbp-89h] BYREF
  int v28; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v29; // [rsp+40h] [rbp-81h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-69h] BYREF
  const char *v32; // [rsp+78h] [rbp-49h]
  __int64 v33; // [rsp+80h] [rbp-41h]
  int *v34; // [rsp+88h] [rbp-39h]
  __int64 v35; // [rsp+90h] [rbp-31h]
  int *v36; // [rsp+98h] [rbp-29h]
  __int64 v37; // [rsp+A0h] [rbp-21h]
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF

  ppv[1] = (LPVOID)-2LL;
  if ( a3 )
  {
    if ( *((struct IPropertyStore **)this + 66) != a3 )
    {
      ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
      v6 = *((_QWORD *)this + 66);
      *((_QWORD *)this + 66) = a3;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *((_QWORD *)this + 67);
    if ( v7 )
    {
      *((_QWORD *)this + 67) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)(*(__int64 (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
  }
  ppv[0] = 0LL;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, ppv);
  v28 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v32 = "SpatialAudioIO::Initialize";
      v33 = 27LL;
      v27 = 37;
      v34 = &v27;
      v35 = 4LL;
      v36 = &v28;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v10, v11, 5u, &pData);
    }
LABEL_12:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)ppv);
    return (unsigned int)Instance;
  }
  memset_0(sz, 0, 0x4EuLL);
  Instance = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v27 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v32 = "SpatialAudioIO::Initialize";
      v33 = 27LL;
      v28 = 41;
      v34 = &v28;
      v35 = 4LL;
      v36 = &v27;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v12, v13, 5u, &pData);
    }
    goto LABEL_12;
  }
  if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
  {
    v14 = ppv[0];
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v14 + 40LL))(
                 v14,
                 a2,
                 &v29);
    v27 = Instance;
    if ( Instance < 0 )
    {
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v32 = "SpatialAudioIO::Initialize";
        v33 = 27LL;
        v28 = 51;
        v34 = &v28;
        v35 = 4LL;
        v36 = &v27;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v15, v16, 5u, &pData);
      }
      goto LABEL_12;
    }
  }
  else
  {
    v17 = ppv[0];
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v17 + 32LL))(
                 v17,
                 0LL,
                 1LL,
                 &v29);
    v27 = Instance;
    if ( Instance < 0 )
    {
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v32 = "SpatialAudioIO::Initialize";
        v33 = 27LL;
        v28 = 46;
        v34 = &v28;
        v35 = 4LL;
        v36 = &v27;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v18, v19, 5u, &pData);
      }
      goto LABEL_12;
    }
  }
  v20 = v29;
  v21 = *((_QWORD *)this + 66);
  if ( v21 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v20 + 32LL))(v20, 0LL, (char *)this + 528);
  v27 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v32 = "SpatialAudioIO::Initialize";
      v33 = 27LL;
      v28 = 55;
      v34 = &v28;
      v35 = 4LL;
      v36 = &v27;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v22, v23, 5u, &pData);
    }
    goto LABEL_12;
  }
  v24 = *((_QWORD *)this + 67);
  if ( v24 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               1u,
               &GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85,
               (LPVOID *)this + 67);
  v27 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v32 = "SpatialAudioIO::Initialize";
      v33 = 27LL;
      v28 = 58;
      v34 = &v28;
      v35 = 4LL;
      v36 = &v27;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v25, v26, 5u, &pData);
    }
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)ppv);
  return (unsigned int)(*(__int64 (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
}

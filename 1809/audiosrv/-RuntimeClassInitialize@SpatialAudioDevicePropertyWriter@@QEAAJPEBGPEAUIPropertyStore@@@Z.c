/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18005340C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180053364 (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800093CC (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180009BA0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??4?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z @ 0x1800534B4 (--4-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(
        SpatialAudioDevicePropertyWriter *this,
        char *a2,
        struct IPropertyStore *a3)
{
  int Instance; // ebx
  wchar_t *v7; // r15
  char *v8; // rcx
  __int64 v9; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  LPVOID v15; // rbx
  const GUID *v16; // r8
  const GUID *v17; // r9
  LPVOID v18; // rbx
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rcx
  const GUID *v23; // r8
  const GUID *v24; // r9
  LPVOID *v25; // rdi
  LPVOID v26; // rcx
  const GUID *v27; // r8
  const GUID *v28; // r9
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  const char *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  int *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  int *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  OLECHAR sz[40]; // [rsp+B0h] [rbp-50h] BYREF

  pv[1] = (LPVOID)-2LL;
  Instance = 0;
  *((_DWORD *)this + 24) = 0;
  v7 = (wchar_t *)((char *)this + 112);
  v8 = (char *)this + 112;
  if ( a2 )
    StringCchCopyW(v8, 260LL, a2);
  else
    memset_0(v8, 0, 0x208uLL);
  if ( !a3 )
  {
    ppv = 0LL;
    v31 = 0LL;
    memset_0(sz, 0, 0x4EuLL);
    Instance = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
    v30 = Instance;
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
      Instance = CoCreateInstance(
                   &CLSID_MMDeviceEnumerator,
                   0LL,
                   0x17u,
                   &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                   &ppv);
      v29 = Instance;
      if ( Instance >= 0 )
      {
        if ( !a2 || !(unsigned int)_o__wcsicmp(a2, sz) )
        {
          v15 = ppv;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
          Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v15 + 32LL))(
                       v15,
                       0LL,
                       1LL,
                       &v31);
          v29 = Instance;
          if ( Instance < 0 )
          {
            if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v35 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
              v36 = 57LL;
              v30 = 131;
              v37 = &v30;
              v38 = 4LL;
              v39 = &v29;
              v40 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v16, v17, 5u, &pData);
            }
            goto LABEL_33;
          }
          pv[0] = 0LL;
          (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v31 + 40LL))(v31, pv);
          StringCbPrintfW(v7, 0x104uLL, L"%s", pv[0]);
          CoTaskMemFree(pv[0]);
        }
        v18 = ppv;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
        Instance = (*(__int64 (__fastcall **)(LPVOID, wchar_t *, __int64 *))(*(_QWORD *)v18 + 40LL))(v18, v7, &v31);
        v29 = Instance;
        if ( Instance >= 0 )
        {
          v21 = v31;
          v22 = *((_QWORD *)this + 11);
          if ( v22 )
          {
            *((_QWORD *)this + 11) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v21 + 32LL))(
                       v21,
                       0LL,
                       (char *)this + 88);
          v29 = Instance;
          if ( Instance >= 0 )
          {
            v25 = (LPVOID *)((char *)this + 104);
            v26 = *v25;
            if ( *v25 )
            {
              *v25 = 0LL;
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
            }
            Instance = CoCreateInstance(
                         &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                         0LL,
                         1u,
                         &GUID_f0b57dc2_395d_490f_9590_f1ea951d5a85,
                         v25);
            v29 = Instance;
            if ( Instance < 0 && (unsigned int)dword_1801B1488 > 2 )
            {
              v35 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
              v36 = 57LL;
              v30 = 147;
              v37 = &v30;
              v38 = 4LL;
              v39 = &v29;
              v40 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v27, v28, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_1801B1488 > 2 )
          {
            v35 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
            v36 = 57LL;
            v30 = 144;
            v37 = &v30;
            v38 = 4LL;
            v39 = &v29;
            v40 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v23, v24, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_1801B1488 > 2 )
        {
          v35 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
          v36 = 57LL;
          v30 = 141;
          v37 = &v30;
          v38 = 4LL;
          v39 = &v29;
          v40 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v19, v20, 5u, &pData);
        }
        goto LABEL_33;
      }
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v35 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        v36 = 57LL;
        v30 = 126;
        v37 = &v30;
        v38 = 4LL;
        v39 = &v29;
        v40 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v13, v14, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v35 = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
      v36 = 57LL;
      v29 = 123;
      v37 = &v29;
      v38 = 4LL;
      v39 = &v30;
      v40 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v11, v12, 5u, &pData);
    }
LABEL_33:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return (unsigned int)Instance;
  }
  Microsoft::WRL::ComPtr<IPropertyStore>::operator=((char *)this + 88, a3);
  v9 = *((_QWORD *)this + 13);
  if ( v9 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)Instance;
}

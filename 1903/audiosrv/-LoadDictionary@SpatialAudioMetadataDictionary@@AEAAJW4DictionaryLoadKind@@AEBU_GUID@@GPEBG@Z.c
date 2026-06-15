/*
 * XREFs of ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x180136F48
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x180137450 (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GP.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180035098 (Create_SpatialAudioDevicePropertyReader.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioMetadataDictionary::LoadDictionary(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int SpatialAudioDevicePropertyReader; // ebx
  const GUID *v12; // r9
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rbx
  const GUID *v16; // r8
  const GUID *v17; // r9
  const GUID *v18; // r8
  const GUID *v19; // r9
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned __int64 v22; // rcx
  LPVOID v23; // rax
  const GUID *v24; // r8
  const GUID *v25; // r9
  int v27; // [rsp+38h] [rbp-61h] BYREF
  int v28; // [rsp+3Ch] [rbp-5Dh] BYREF
  unsigned int v29; // [rsp+40h] [rbp-59h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h] BYREF
  __int64 v31[3]; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-31h] BYREF
  const char *v33; // [rsp+88h] [rbp-11h]
  __int64 v34; // [rsp+90h] [rbp-9h]
  int *v35; // [rsp+98h] [rbp-1h]
  __int64 v36; // [rsp+A0h] [rbp+7h]
  int *v37; // [rsp+A8h] [rbp+Fh]
  __int64 v38; // [rsp+B0h] [rbp+17h]

  v31[1] = -2LL;
  v30 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v8 )
    LeaveCriticalSection(v8);
  v31[0] = 0LL;
  if ( a2 )
  {
    SpatialAudioDevicePropertyReader = -2147418113;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v33 = "SpatialAudioMetadataDictionary::LoadDictionary";
      v34 = 47LL;
      v27 = 205;
      v35 = &v27;
      v36 = 4LL;
      v28 = -2147418113;
      v37 = &v28;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v9, v10, 5u, &pData);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v31);
    SpatialAudioDevicePropertyReader = Create_SpatialAudioDevicePropertyReader(a5, 0LL, v31, v12);
    v27 = SpatialAudioDevicePropertyReader;
    if ( SpatialAudioDevicePropertyReader >= 0 )
    {
      v15 = v31[0];
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
      SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 40LL))(
                                           v15,
                                           a3,
                                           &v30);
      v27 = SpatialAudioDevicePropertyReader;
      if ( SpatialAudioDevicePropertyReader >= 0 )
      {
        SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(
                                             v30,
                                             a1 + 120);
        v27 = SpatialAudioDevicePropertyReader;
        if ( SpatialAudioDevicePropertyReader >= 0 )
        {
          v29 = 0;
          SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 40LL))(
                                               v30,
                                               &v29);
          v27 = SpatialAudioDevicePropertyReader;
          if ( SpatialAudioDevicePropertyReader >= 0 )
          {
            v22 = v29 >> 1;
            *(_DWORD *)(a1 + 124) = v22;
            v23 = operator new(saturated_mul(v22, 2uLL));
            *(_QWORD *)(a1 + 128) = v23;
            SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v30 + 48LL))(
                                                 v30,
                                                 v23,
                                                 v29);
            v27 = SpatialAudioDevicePropertyReader;
            if ( SpatialAudioDevicePropertyReader < 0 && (unsigned int)dword_1801B63C0 > 2 )
            {
              v33 = "SpatialAudioMetadataDictionary::LoadDictionary";
              v34 = 47LL;
              v28 = 226;
              v35 = &v28;
              v36 = 4LL;
              v37 = &v27;
              v38 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v24, v25, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_1801B63C0 > 2 )
          {
            v33 = "SpatialAudioMetadataDictionary::LoadDictionary";
            v34 = 47LL;
            v28 = 220;
            v35 = &v28;
            v36 = 4LL;
            v37 = &v27;
            v38 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v20, v21, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_1801B63C0 > 2 )
        {
          v33 = "SpatialAudioMetadataDictionary::LoadDictionary";
          v34 = 47LL;
          v28 = 216;
          v35 = &v28;
          v36 = 4LL;
          v37 = &v27;
          v38 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v18, v19, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_1801B63C0 > 2 )
      {
        v33 = "SpatialAudioMetadataDictionary::LoadDictionary";
        v34 = 47LL;
        v28 = 211;
        v35 = &v28;
        v36 = 4LL;
        v37 = &v27;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v16, v17, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v33 = "SpatialAudioMetadataDictionary::LoadDictionary";
      v34 = 47LL;
      v28 = 208;
      v35 = &v28;
      v36 = 4LL;
      v37 = &v27;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v13, v14, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v31);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v30);
  return (unsigned int)SpatialAudioDevicePropertyReader;
}

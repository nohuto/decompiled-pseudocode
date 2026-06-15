/*
 * XREFs of ?ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180132C5C
 * Callers:
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800487C0 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x180133310 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     Create_MetadataDictionaryData @ 0x180135CF8 (Create_MetadataDictionaryData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureDtsxHeadphones(
        SpatialAudioConfigureDevice *this,
        struct ISpatialAudioEncoderProperties *a2)
{
  int MetadataDictionaryData; // ebx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const GUID *v7; // r8
  const GUID *v8; // r9
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  const GUID *v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20[3]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v21[160]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  const char *v23; // [rsp+118h] [rbp+10h]
  __int64 v24; // [rsp+120h] [rbp+18h]
  int *v25; // [rsp+128h] [rbp+20h]
  __int64 v26; // [rsp+130h] [rbp+28h]
  int *v27; // [rsp+138h] [rbp+30h]
  __int64 v28; // [rsp+140h] [rbp+38h]

  v20[1] = -2LL;
  v20[0] = 0LL;
  MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  v19 = MetadataDictionaryData;
  if ( MetadataDictionaryData >= 0 )
  {
    MetadataDictionaryData = (*(__int64 (__fastcall **)(struct ISpatialAudioEncoderProperties *, _BYTE *))(*(_QWORD *)a2 + 24LL))(
                               a2,
                               v21);
    v18 = MetadataDictionaryData;
    if ( MetadataDictionaryData >= 0 )
    {
      MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 56LL))(
                                 *((_QWORD *)this + 11),
                                 v21);
      v18 = MetadataDictionaryData;
      if ( MetadataDictionaryData >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v20);
        MetadataDictionaryData = Create_MetadataDictionaryData(v11, &DTSX_HEADPHONES_METADATA_V1_0, v12, v20);
        v18 = MetadataDictionaryData;
        if ( MetadataDictionaryData >= 0 )
        {
          MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                                     *((_QWORD *)this + 11),
                                     v20[0]);
          v18 = MetadataDictionaryData;
          if ( MetadataDictionaryData < 0 && (unsigned int)dword_1801B53C0 > 2 )
          {
            v23 = "SpatialAudioConfigureDevice::ConfigureDtsxHeadphones";
            v24 = 53LL;
            v19 = 426;
            v25 = &v19;
            v26 = 4LL;
            v27 = &v18;
            v28 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v15, v16, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_1801B53C0 > 2 )
        {
          v23 = "SpatialAudioConfigureDevice::ConfigureDtsxHeadphones";
          v24 = 53LL;
          v19 = 423;
          v25 = &v19;
          v26 = 4LL;
          v27 = &v18;
          v28 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v13, v14, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v23 = "SpatialAudioConfigureDevice::ConfigureDtsxHeadphones";
        v24 = 53LL;
        v19 = 420;
        v25 = &v19;
        v26 = 4LL;
        v27 = &v18;
        v28 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v9, v10, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v23 = "SpatialAudioConfigureDevice::ConfigureDtsxHeadphones";
      v24 = 53LL;
      v19 = 417;
      v25 = &v19;
      v26 = 4LL;
      v27 = &v18;
      v28 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v7, v8, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_1801B53C0 > 2 )
  {
    v23 = "SpatialAudioConfigureDevice::ConfigureDtsxHeadphones";
    v24 = 53LL;
    v18 = 414;
    v25 = &v18;
    v26 = 4LL;
    v27 = &v19;
    v28 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v5, v6, 5u, &pData);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v20);
  return (unsigned int)MetadataDictionaryData;
}

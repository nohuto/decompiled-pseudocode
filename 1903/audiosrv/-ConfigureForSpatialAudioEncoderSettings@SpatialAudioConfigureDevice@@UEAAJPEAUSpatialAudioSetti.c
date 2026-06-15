/*
 * XREFs of ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180044300
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801321C4 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180132774 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180132BF8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18013307C (-ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801333D4 (-ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180133A28 (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180133C34 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x180135754 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings(
        SpatialAudioConfigureDevice *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  const GUID *v14; // r8
  const GUID *v15; // r9
  const GUID *v16; // r8
  const GUID *v17; // r9
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  const GUID *v23; // r8
  const GUID *v24; // r9
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
  const GUID *v34; // r8
  const GUID *v35; // r9
  int v36; // [rsp+30h] [rbp-79h] BYREF
  int v37; // [rsp+34h] [rbp-75h] BYREF
  int v38; // [rsp+38h] [rbp-71h] BYREF
  struct ISpatialAudioEncoderProperties *v39; // [rsp+40h] [rbp-69h] BYREF
  int v40; // [rsp+48h] [rbp-61h] BYREF
  __int64 v41; // [rsp+50h] [rbp-59h]
  GUID v42; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  const char *v44; // [rsp+90h] [rbp-19h]
  __int64 v45; // [rsp+98h] [rbp-11h]
  int *v46; // [rsp+A0h] [rbp-9h]
  __int64 v47; // [rsp+A8h] [rbp-1h]
  int *v48; // [rsp+B0h] [rbp+7h]
  __int64 v49; // [rsp+B8h] [rbp+Fh]

  v41 = -2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !a2 )
  {
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v38 = 195;
      v46 = &v38;
      v47 = 4LL;
      v37 = -2147024809;
      v48 = &v37;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v9, v10, 5u, &pData);
    }
    v36 = -2147024809;
    goto LABEL_72;
  }
  v42 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  v36 = v11;
  v38 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 <= 2 )
      goto LABEL_71;
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 201;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v12, v13, 5u, &pData);
    goto LABEL_70;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12), &v40);
  v36 = v11;
  v38 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 <= 2 )
      goto LABEL_71;
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 204;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v14, v15, 5u, &pData);
    goto LABEL_70;
  }
  if ( v40 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 12) + 48LL))(*((_QWORD *)this + 12), &v42);
    v36 = v11;
    v38 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_1801B63C0 <= 2 )
        goto LABEL_71;
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v37 = 209;
      v46 = &v37;
      v47 = 4LL;
      v48 = &v38;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v19, v20, 5u, &pData);
      goto LABEL_70;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  if ( !v40 && !*(_DWORD *)a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
    v36 = 0;
    goto LABEL_10;
  }
  v39 = 0LL;
  v21 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v21 = *(_QWORD *)v42.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v21 )
    v42 = *(GUID *)((char *)a2 + 12);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  v36 = Create_SpatialAudioEncoderProperties(&v42, v22, &v39);
  v38 = v36;
  if ( v36 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v37 = 229;
      v46 = &v37;
      v47 = 4LL;
      v48 = &v38;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v23, v24, 5u, &pData);
    }
LABEL_69:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
    goto LABEL_70;
  }
  v25 = *(_QWORD *)&v42.Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v25 = *(_QWORD *)v42.Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v25 )
  {
    v26 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v39);
LABEL_57:
    v36 = v26;
    goto LABEL_62;
  }
  v27 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
    v27 = *(_QWORD *)v42.Data4 - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
  if ( !v27 )
  {
    v26 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v39);
    goto LABEL_57;
  }
  v28 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v28 = *(_QWORD *)v42.Data4 - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v28 )
  {
    v26 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v39);
    goto LABEL_57;
  }
  v29 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v29 = *(_QWORD *)v42.Data4 - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v29 )
  {
    v26 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v39);
    goto LABEL_57;
  }
  v30 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v30 = *(_QWORD *)v42.Data4 - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v30 )
  {
    v26 = SpatialAudioConfigureDevice::ConfigureDtsxHeadphones(this, v39);
    goto LABEL_57;
  }
  v31 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v31 = *(_QWORD *)v42.Data4 - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v31 )
  {
    v26 = SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker(this, v39);
    goto LABEL_57;
  }
  v32 = *(_QWORD *)&v42.Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v32 = *(_QWORD *)v42.Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v32 )
  {
    v26 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v39);
    goto LABEL_57;
  }
  v33 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v33 = *(_QWORD *)v42.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v33 || *(_DWORD *)a2 )
  {
    v36 = -2147418113;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v37 = 268;
      v46 = &v37;
      v47 = 4LL;
      v48 = &v36;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v23, v24, 5u, &pData);
    }
    goto LABEL_69;
  }
LABEL_62:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  v11 = v36;
  v38 = v36;
  if ( v36 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 <= 2 )
      goto LABEL_71;
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 272;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v34, v35, 5u, &pData);
    goto LABEL_70;
  }
LABEL_10:
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(**((_QWORD **)this + 11) + 64LL))(
          *((_QWORD *)this + 11),
          a2,
          a3,
          a4);
  v36 = v11;
  v38 = v11;
  if ( v11 >= 0 )
    goto LABEL_11;
  if ( (unsigned int)dword_1801B63C0 > 2 )
  {
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 275;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v16, v17, 5u, &pData);
LABEL_70:
    v11 = v36;
  }
LABEL_71:
  if ( v11 < 0 )
LABEL_72:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
LABEL_11:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  return (unsigned int)v36;
}

/*
 * XREFs of ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x18012A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180128950 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180128F00 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180129384 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180129808 (-ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180129B60 (-ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A898 (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012AAA4 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18012C4B0 (Create_SpatialAudioEncoderProperties.c)
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
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  const GUID *v22; // r8
  const GUID *v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  const GUID *v33; // r8
  const GUID *v34; // r9
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
  v36 = -2147024809;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !a2 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v38 = 195;
      v46 = &v38;
      v47 = 4LL;
      v37 = -2147024809;
      v48 = &v37;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v9, v10, 5u, &pData);
    }
    v36 = -2147024809;
    goto LABEL_71;
  }
  v42 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  v36 = v11;
  v38 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_1801B1488 <= 2 )
      goto LABEL_70;
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 201;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v12, v13, 5u, &pData);
    goto LABEL_69;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12), &v40);
  v36 = v11;
  v38 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_1801B1488 <= 2 )
      goto LABEL_70;
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 204;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v14, v15, 5u, &pData);
    goto LABEL_69;
  }
  if ( v40 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 12) + 48LL))(*((_QWORD *)this + 12), &v42);
    v36 = v11;
    v38 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_1801B1488 <= 2 )
        goto LABEL_70;
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v37 = 209;
      v46 = &v37;
      v47 = 4LL;
      v48 = &v38;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v16, v17, 5u, &pData);
      goto LABEL_69;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  if ( !v40 && !*(_DWORD *)a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
    v36 = 0;
    goto LABEL_20;
  }
  v39 = 0LL;
  v20 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v20 = *(_QWORD *)v42.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v20 )
    v42 = *(GUID *)((char *)a2 + 12);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  v36 = Create_SpatialAudioEncoderProperties(&v42, v21, &v39);
  v38 = v36;
  if ( v36 < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v37 = 229;
      v46 = &v37;
      v47 = 4LL;
      v48 = &v38;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v22, v23, 5u, &pData);
    }
LABEL_68:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
    goto LABEL_69;
  }
  v24 = *(_QWORD *)&v42.Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v24 = *(_QWORD *)v42.Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v24 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v39);
LABEL_58:
    v36 = v25;
    goto LABEL_63;
  }
  v26 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
    v26 = *(_QWORD *)v42.Data4 - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
  if ( !v26 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v39);
    goto LABEL_58;
  }
  v27 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v27 = *(_QWORD *)v42.Data4 - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v27 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v39);
    goto LABEL_58;
  }
  v28 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v28 = *(_QWORD *)v42.Data4 - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v28 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v39);
    goto LABEL_58;
  }
  v29 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v29 = *(_QWORD *)v42.Data4 - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v29 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDtsxHeadphones(this, v39);
    goto LABEL_58;
  }
  v30 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v30 = *(_QWORD *)v42.Data4 - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v30 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker(this, v39);
    goto LABEL_58;
  }
  v31 = *(_QWORD *)&v42.Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v42.Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v31 = *(_QWORD *)v42.Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v31 )
  {
    v25 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v39);
    goto LABEL_58;
  }
  v32 = *(_QWORD *)&v42.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v42.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v32 = *(_QWORD *)v42.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v32 || *(_DWORD *)a2 )
  {
    v36 = -2147418113;
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      v45 = 69LL;
      v37 = 268;
      v46 = &v37;
      v47 = 4LL;
      v48 = &v36;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v22, v23, 5u, &pData);
    }
    goto LABEL_68;
  }
LABEL_63:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
  v11 = v36;
  v38 = v36;
  if ( v36 < 0 )
  {
    if ( (unsigned int)dword_1801B1488 <= 2 )
      goto LABEL_70;
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 272;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v33, v34, 5u, &pData);
    goto LABEL_69;
  }
LABEL_20:
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(**((_QWORD **)this + 11) + 64LL))(
          *((_QWORD *)this + 11),
          a2,
          a3,
          a4);
  v36 = v11;
  v38 = v11;
  if ( v11 >= 0 )
    goto LABEL_72;
  if ( (unsigned int)dword_1801B1488 > 2 )
  {
    v44 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    v45 = 69LL;
    v37 = 275;
    v46 = &v37;
    v47 = 4LL;
    v48 = &v38;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v18, v19, 5u, &pData);
LABEL_69:
    v11 = v36;
  }
LABEL_70:
  if ( v11 < 0 )
LABEL_71:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
LABEL_72:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  return (unsigned int)v36;
}

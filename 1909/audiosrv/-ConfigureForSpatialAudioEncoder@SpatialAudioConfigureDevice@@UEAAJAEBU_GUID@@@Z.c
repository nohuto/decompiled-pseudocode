/*
 * XREFs of ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x180133310
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180131DA4 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180132354 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801327D8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180132C5C (-ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180132FB4 (-ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180133608 (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180133814 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x1801352E0 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder(
        SpatialAudioConfigureDevice *this,
        const struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  int v6; // edi
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct ISpatialAudioEncoderProperties *v18; // [rsp+38h] [rbp-39h] BYREF
  int v19; // [rsp+40h] [rbp-31h] BYREF
  int v20; // [rsp+44h] [rbp-2Dh] BYREF
  __int64 v21; // [rsp+48h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  const char *v23; // [rsp+78h] [rbp+7h]
  int v24; // [rsp+80h] [rbp+Fh]
  int v25; // [rsp+84h] [rbp+13h]
  int *v26; // [rsp+88h] [rbp+17h]
  int v27; // [rsp+90h] [rbp+1Fh]
  int v28; // [rsp+94h] [rbp+23h]
  int *v29; // [rsp+98h] [rbp+27h]
  int v30; // [rsp+A0h] [rbp+2Fh]
  int v31; // [rsp+A4h] [rbp+33h]

  v21 = -2LL;
  v18 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
  v6 = Create_SpatialAudioEncoderProperties(a2, v5, &v18);
  v20 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v23 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder";
      v24 = 61;
      v25 = 0;
      v19 = 138;
      v26 = &v19;
      v27 = 4;
      v28 = 0;
      v29 = &v20;
      v30 = 4;
      v31 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v7, v8, 5u, &pData);
    }
LABEL_38:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
    goto LABEL_39;
  }
  v9 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v9 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v9 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v18);
LABEL_34:
    v6 = v10;
    goto LABEL_35;
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
  if ( !v11 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v18);
    goto LABEL_34;
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v12 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v18);
    goto LABEL_34;
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v13 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v18);
    goto LABEL_34;
  }
  v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v14 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDtsxHeadphones(this, v18);
    goto LABEL_34;
  }
  v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v15 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker(this, v18);
    goto LABEL_34;
  }
  v16 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v16 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v16 )
  {
    v10 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v18);
    goto LABEL_34;
  }
LABEL_35:
  v19 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v23 = "SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder";
      v24 = 61;
      v25 = 0;
      v20 = 175;
      v26 = &v20;
      v27 = 4;
      v28 = 0;
      v29 = &v19;
      v30 = 4;
      v31 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v7, v8, 5u, &pData);
    }
    goto LABEL_38;
  }
LABEL_39:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v6;
}

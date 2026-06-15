/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18012C15C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x18012AF38 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     Create_SpatialAudioPositionCalc @ 0x180041A50 (Create_SpatialAudioPositionCalc.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012B120 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012B2A8 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012B430 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012B544 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012B654 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012BEEC (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::RuntimeClassInitialize(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2,
        int a3)
{
  _QWORD *v3; // r13
  int v6; // r14d
  int v7; // r12d
  __int64 v8; // rdx
  const GUID *v9; // r8
  const GUID *v10; // r9
  const GUID *v11; // r8
  const GUID *v12; // r9
  int RegisterForOverrides; // esi
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ebx
  void *v23; // rax
  __int64 v24; // rax
  float v25; // xmm4_4
  __int64 v26; // rcx
  __int64 v27; // rdx
  __m128 v28; // xmm3
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  int v34; // [rsp+38h] [rbp-39h] BYREF
  int SpatialAudioPositionCalc; // [rsp+3Ch] [rbp-35h] BYREF
  int v36; // [rsp+40h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  const char *v38; // [rsp+68h] [rbp-9h]
  int v39; // [rsp+70h] [rbp-1h]
  int v40; // [rsp+74h] [rbp+3h]
  int *v41; // [rsp+78h] [rbp+7h]
  int v42; // [rsp+80h] [rbp+Fh]
  int v43; // [rsp+84h] [rbp+13h]
  int *p_SpatialAudioPositionCalc; // [rsp+88h] [rbp+17h]
  int v45; // [rsp+90h] [rbp+1Fh]
  int v46; // [rsp+94h] [rbp+23h]

  v3 = (_QWORD *)((char *)this + 536);
  v36 = a3;
  v6 = 0;
  v7 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc(v3, v8, v9, v10);
  RegisterForOverrides = SpatialAudioPositionCalc;
  v14 = 2;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    v15 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
      v15 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v15 )
    {
      v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
        v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
      if ( v16 )
      {
        v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
          v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
        if ( !v17 )
          goto LABEL_15;
        v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
          v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
        if ( v18 )
        {
          v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
            v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
          if ( !v19 )
            goto LABEL_22;
          v20 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
            v20 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
          if ( v20 )
          {
            v21 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
            if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
              v21 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
            if ( !v21 )
            {
              v7 = 1;
              SpatialAudioEncoderProperties::ConfigureMultiChannel(this, a2);
            }
          }
          else
          {
LABEL_22:
            SpatialAudioEncoderProperties::ConfigureDtsxHeadphones(this, a2);
          }
        }
        else
        {
LABEL_15:
          v6 = 1;
          SpatialAudioEncoderProperties::ConfigureDolbyAtmosHeadphonesEncoder(this, a2);
        }
      }
      else
      {
        v6 = 1;
        SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(this, a2);
      }
    }
    else
    {
      SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(this, a2);
    }
    RegisterForOverrides = SpatialAudioEncoderProperties::QueryRegisterForOverrides(
                             this,
                             (const struct _GUID *)((char *)this + 100));
  }
  else if ( (unsigned int)dword_1801B1488 > 2 )
  {
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v38 = "SpatialAudioEncoderProperties::RuntimeClassInitialize";
    v41 = &v34;
    p_SpatialAudioPositionCalc = &SpatialAudioPositionCalc;
    v39 = 54;
    v34 = 147;
    v42 = 4;
    v45 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v11, v12, 5u, &pData);
  }
  v22 = 17;
  if ( RegisterForOverrides >= 0 )
  {
    if ( v36 )
    {
      RegisterForOverrides = -2147024882;
      v23 = _aligned_malloc(0x110uLL, 0x10uLL);
      *((_QWORD *)this + 6) = v23;
      if ( v23 )
      {
        RegisterForOverrides = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(*(_QWORD *)*v3 + 24LL))(
                                 *v3,
                                 (char *)this + 272,
                                 v23,
                                 272LL);
        if ( v6 || v7 )
        {
          v24 = 0LL;
          v25 = *((float *)this + 69) * 0.5;
          v26 = 17LL;
          do
          {
            v27 = *((_QWORD *)this + 6);
            v28 = *(__m128 *)(v24 + v27);
            if ( v6 )
            {
              v29 = _mm_shuffle_ps(v28, v28, 255);
              v30 = _mm_shuffle_ps(v28, v28, 170);
              v31 = _mm_shuffle_ps(v28, v28, 85);
              v30.m128_f32[0] = v30.m128_f32[0] + v25;
              v28.m128_f32[0] = v28.m128_f32[0] + v25;
              *(__m128 *)(v24 + v27) = _mm_unpacklo_ps(_mm_unpacklo_ps(v28, v31), _mm_unpacklo_ps(v30, v29));
            }
            else
            {
              v32 = _mm_shuffle_ps(v28, v28, 198);
              v32.m128_i32[0] = _mm_shuffle_ps(v28, v28, 170).m128_u32[0] ^ _xmm;
              *(__m128 *)(v24 + v27) = _mm_shuffle_ps(v32, v32, 198);
            }
            v24 += 16LL;
            --v26;
          }
          while ( v26 );
        }
      }
    }
  }
  *((_DWORD *)this + 136) = 0;
  if ( RegisterForOverrides >= 0 )
  {
    do
    {
      --v22;
      if ( (v14 & *((_DWORD *)this + 29)) != 0 )
        ++*((_DWORD *)this + 136);
      v14 *= 2;
    }
    while ( v22 );
  }
  return (unsigned int)RegisterForOverrides;
}

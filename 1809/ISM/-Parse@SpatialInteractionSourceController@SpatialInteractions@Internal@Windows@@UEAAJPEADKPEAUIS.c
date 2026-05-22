/*
 * XREFs of ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1801259F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800A5208 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     ?TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z @ 0x180122890 (-TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z.c)
 *     ?ResetReportDueToFirmwareUpdate_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x180122954 (-ResetReportDueToFirmwareUpdate_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ?ButtonsStateChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x180122BD8 (-ButtonsStateChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x180123170 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N@Z @ 0x180126240 (-CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal.c)
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x18012632C (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x180126528 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x18012931C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18012931C.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        char *a2,
        int a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  bool *v11; // r12
  bool *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  char v19; // r14
  __int64 v20; // rsi
  LONGLONG v21; // rdi
  _DWORD *v22; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v23; // rcx
  struct SpatialInteractionDevices::InputReport *v24; // r9
  int v25; // edi
  float v26; // xmm6_4
  _DWORD *v27; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v28; // rcx
  int v29; // eax
  unsigned int v30; // edi
  float v31; // xmm2_4
  float v32; // xmm1_4
  bool v33; // dl
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  float v37; // xmm0_4
  int v38; // ecx
  int v39; // edx
  _DWORD *v40; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v41; // rcx
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  const struct Windows::Foundation::Numerics::Matrix4x4 *v51; // r14
  const struct Windows::Foundation::Numerics::Matrix4x4 *v52; // r15
  __int128 v53; // xmm1
  float v54; // xmm1_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  int v57; // esi
  bool v58; // r10
  bool v59; // r9
  int v60; // edi
  bool v61; // zf
  float v62; // xmm1_4
  float v63; // xmm0_4
  _DWORD *v64; // rcx
  int v65; // r10d
  _DWORD *v66; // rax
  __int64 v67; // r9
  _OWORD v68[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v69; // [rsp+58h] [rbp-B0h]
  int v70; // [rsp+5Ch] [rbp-ACh]
  unsigned int v71; // [rsp+60h] [rbp-A8h]
  float v72; // [rsp+64h] [rbp-A4h]
  int v73; // [rsp+68h] [rbp-A0h]
  int v74; // [rsp+6Ch] [rbp-9Ch]
  float v75; // [rsp+70h] [rbp-98h]
  int v76; // [rsp+74h] [rbp-94h]
  char v77; // [rsp+78h] [rbp-90h]
  float v78; // [rsp+7Ch] [rbp-8Ch]
  char v79; // [rsp+80h] [rbp-88h]
  float v80; // [rsp+84h] [rbp-84h]
  float v81; // [rsp+88h] [rbp-80h]
  float v82; // [rsp+8Ch] [rbp-7Ch]
  float v83; // [rsp+90h] [rbp-78h]
  char v84; // [rsp+94h] [rbp-74h]
  int v85; // [rsp+98h] [rbp-70h]
  char v86; // [rsp+9Ch] [rbp-6Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+A8h] [rbp-60h] BYREF
  LARGE_INTEGER v88; // [rsp+B0h] [rbp-58h] BYREF
  LARGE_INTEGER v89; // [rsp+B8h] [rbp-50h] BYREF
  int v90; // [rsp+C0h] [rbp-48h] BYREF
  char *v91; // [rsp+C8h] [rbp-40h]
  _QWORD v92[11]; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]
  LARGE_INTEGER v94; // [rsp+158h] [rbp+50h] BYREF

  v11 = a10;
  v15 = a11;
  *a10 = 0;
  *v15 = 0;
  *a8 = 0;
  *(_DWORD *)a9 = 0;
  if ( !*((_BYTE *)this + 106) )
  {
    v16 = -2147020579;
    v17 = 509LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)v16);
    return v16;
  }
  LODWORD(a10) = 0;
  v19 = *((_BYTE *)this + 1184);
  *((_BYTE *)this + 1184) = 0;
  if ( !v19 && !a2 )
  {
    v51 = a7;
    v52 = a6;
    goto LABEL_75;
  }
  if ( a2 && a3 != *((unsigned __int16 *)this + 94) )
  {
    v16 = -2147024809;
    v17 = 517LL;
    goto LABEL_3;
  }
  QueryPerformanceCounter(&PerformanceCount);
  v20 = *((_QWORD *)this + 122);
  v21 = PerformanceCount.QuadPart - *((_QWORD *)this + 86);
  if ( v20 >= v21 )
  {
    *((_QWORD *)this + 122) = v20 + 1;
    v22 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v22 && *v22 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency_(
        v23,
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        v20,
        v21);
    }
  }
  else
  {
    *((_QWORD *)this + 122) = v21;
  }
  *v11 = v20 == 0;
  memset_0(v68, 0, 0x68uLL);
  if ( v19 )
  {
    v61 = *((_BYTE *)this + 440) == 0;
    v25 = *((_DWORD *)this + 241);
    v70 = v25;
    if ( v61 )
    {
      v26 = v78;
    }
    else
    {
      v26 = 0.0;
      v79 = 1;
      v78 = 0.0;
    }
    if ( (v25 & 0x20) != 0 )
    {
      v77 = 1;
      v75 = 0.5;
      *(float *)&v76 = 0.5;
    }
    if ( (v25 & 4) != 0 )
    {
      LOBYTE(v74) = 1;
      v72 = 0.5;
      *(float *)&v73 = 0.5;
    }
    v27 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v27 && *v27 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::ResetReportDueToFirmwareUpdate_(
        v28,
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3));
    }
  }
  else
  {
    v90 = *((unsigned __int16 *)this + 94);
    v91 = a2;
    v29 = SpatialInteractionDevices::ParseInputReport(
            (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
            (struct SpatialInteractionDevices::HID_HANDLE *)&v90,
            (struct SpatialInteractionDevices::HID_REPORT *)v68,
            v24);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x238,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v29);
      return v30;
    }
    v26 = v78;
    v25 = v70;
  }
  if ( !*((_BYTE *)this + 440) )
  {
    if ( (v25 & 8) != 0 )
    {
      v36 = v71 >> 3;
      *((_BYTE *)this + 1011) = 1;
      if ( (v36 & 1) != 0 )
        v37 = FLOAT_1_0;
      else
        v37 = 0.0;
      *((float *)this + 250) = v37;
    }
    goto LABEL_49;
  }
  v69 |= 8u;
  if ( !v79 )
  {
    v25 &= ~8u;
    v70 = v25;
    goto LABEL_49;
  }
  v25 |= 8u;
  *((float *)this + 250) = v26;
  *((_BYTE *)this + 1011) = 1;
  v70 = v25;
  v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - 1.0)) & _xmm);
  if ( v31 > 0.001 )
    v71 &= ~8u;
  else
    v71 |= 8u;
  v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v26) & _xmm);
  v33 = v32 > 0.001 && v31 > 0.001;
  v34 = *((_DWORD *)this + 243);
  if ( (v34 & 8) == 0 )
  {
    if ( !v33 )
      goto LABEL_49;
    v35 = v34 | 8;
    goto LABEL_40;
  }
  if ( !v33 )
  {
    v35 = v34 & 0xFFFFFFF7;
LABEL_40:
    *((_DWORD *)this + 243) = v35;
    *v11 = 1;
  }
LABEL_49:
  LODWORD(a10) = v25;
  v38 = v25 & v71 | *((_DWORD *)this + 242) & ~v25;
  v39 = v69 | *((_DWORD *)this + 241);
  if ( *((_DWORD *)this + 241) != v39 )
  {
    *((_DWORD *)this + 241) = v39;
    *v11 = 1;
  }
  if ( *((_DWORD *)this + 242) != v38 )
  {
    *((_DWORD *)this + 242) = v38;
    *v11 = 1;
    v40 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v40 )
    {
      if ( *v40 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::ButtonsStateChanged_(
          v41,
          *((_DWORD *)this + 2),
          *((_DWORD *)this + 3),
          *((_DWORD *)this + 242));
      }
    }
  }
  if ( (*((_BYTE *)this + 968) & 0x44) != 0 )
  {
    if ( (_BYTE)v74 )
    {
      v42 = *(float *)&v73;
      v43 = v72 * 2.0;
      *((_BYTE *)this + 1010) = 1;
      *((float *)this + 246) = v43 - 1.0;
      *((float *)this + 247) = (float)(v42 * 2.0) - 1.0;
    }
  }
  else
  {
    *((_BYTE *)this + 1010) = 0;
  }
  if ( v77 )
  {
    v44 = *(float *)&v76;
    v45 = v75 * 2.0;
    *((_BYTE *)this + 1012) = 1;
    *((float *)this + 248) = v45 - 1.0;
    *((float *)this + 249) = (float)(v44 * 2.0) - 1.0;
  }
  if ( v84 )
  {
    v46 = v80;
    *((_BYTE *)this + 1144) = 1;
    v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 282) - v46)) & _xmm);
    if ( v47 > 0.001 )
    {
      *((float *)this + 282) = v46;
      *v11 = 1;
    }
    v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 283) - v81)) & _xmm);
    if ( v48 > 0.001 )
    {
      *((float *)this + 283) = v81;
      *v11 = 1;
    }
    v49 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 284) - v82)) & _xmm);
    if ( v49 > 0.001 )
    {
      *((float *)this + 284) = v82;
      *v11 = 1;
    }
    v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 285) - v83)) & _xmm);
    if ( v50 > 0.001 )
    {
      *((float *)this + 285) = v83;
      *v11 = 1;
    }
  }
  if ( v86 )
  {
    *((_DWORD *)this + 254) = v85;
    *((_BYTE *)this + 1020) = 1;
  }
  v51 = a7;
  v52 = a6;
  if ( *((_BYTE *)this + 456) )
  {
    v53 = v68[1];
    *(_OWORD *)((char *)this + 460) = v68[0];
    *(_OWORD *)((char *)this + 476) = v53;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      0LL,
      (const struct SpatialInteractionDevices::PoseData *)v68,
      a4,
      v52,
      v51);
    *v11 = 1;
  }
LABEL_75:
  v54 = *((float *)this + 112);
  v55 = *((float *)this + 113);
  v56 = *((float *)this + 250);
  v57 = *((_DWORD *)this + 106);
  v58 = v56 >= (float)(v54 + v55) || v54 == 0.0 && v56 > 0.0;
  v59 = (float)(v54 - v55) >= v56 || v54 == 1.0 && v56 < 1.0;
  *((_BYTE *)this + 441) = v56 == 1.0;
  v60 = 2;
  if ( v57 )
  {
    if ( v57 != 1 )
    {
      if ( v57 == 2 )
      {
        v61 = !v59;
LABEL_91:
        if ( v61 )
          goto LABEL_103;
        goto LABEL_92;
      }
      if ( v57 != 3 )
        goto LABEL_103;
      if ( v56 != 1.0 )
      {
        v61 = v56 != 0.0;
        goto LABEL_91;
      }
      goto LABEL_100;
    }
    if ( v59 || v56 == 0.0 )
    {
LABEL_92:
      *((_DWORD *)this + 106) = 0;
      goto LABEL_103;
    }
    if ( v56 != 1.0 )
    {
      QueryPerformanceCounter(&v88);
      if ( v88.QuadPart - *((_QWORD *)this + 54) > (unsigned int)(int)(*((float *)this + 111)
                                                                     * (double)(int)qword_180193A58) )
        *((_DWORD *)this + 106) = 3;
      goto LABEL_103;
    }
LABEL_100:
    *((_DWORD *)this + 106) = 2;
    goto LABEL_103;
  }
  if ( v56 == 1.0 )
    goto LABEL_100;
  if ( v58 )
  {
    *((_DWORD *)this + 106) = 1;
    QueryPerformanceCounter(&v89);
    *((LARGE_INTEGER *)this + 54) = v89;
  }
LABEL_103:
  if ( (unsigned int)(v57 - 1) <= 1 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 106) - 1) <= 1 )
    {
      v63 = *((float *)this + 250);
      v60 = 3;
      if ( v63 > *((float *)this + 112) )
        *((float *)this + 112) = v63;
      goto LABEL_112;
    }
    v60 = 4;
  }
  else if ( (unsigned int)(*((_DWORD *)this + 106) - 1) > 1 )
  {
    v62 = *((float *)this + 250);
    v60 = 6;
    if ( *((float *)this + 112) > v62 )
      *((float *)this + 112) = v62;
    goto LABEL_112;
  }
  *v11 = 1;
  *((_DWORD *)this + 112) = *((_DWORD *)this + 250);
LABEL_112:
  if ( *((_BYTE *)this + 456) )
  {
    v94.QuadPart = 0LL;
    QueryPerformanceCounter(&v94);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      v94.QuadPart,
      (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 460),
      a4,
      v52,
      v51);
  }
  else if ( a4 )
  {
    *v11 |= Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose(
              this,
              a5,
              a4,
              v52,
              v51);
  }
  *a8 = *((_BYTE *)this + 441);
  *(_DWORD *)a9 = v60;
  v64 = (_DWORD *)*((_QWORD *)this + 62);
  if ( v64 )
  {
    v65 = *((_DWORD *)this + 242);
    ++v64[8];
    v66 = v64 + 9;
    v67 = 7LL;
    do
    {
      if ( (v65 & *(_DWORD *)((char *)v66
                            + &SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest
                            - (_UNKNOWN *)v64
                            - 36)) != 0 )
        ++*v66;
      ++v66;
      --v67;
    }
    while ( v67 );
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      (SpatialInteractionDevices::SpatialInteractionHeartbeat *)v64,
      0);
  }
  v92[0] = this;
  v92[1] = &a10;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___(
    (char *)this + 8,
    v92);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CheckForDeviceInformationUpdate(this, a11);
  return 0LL;
}

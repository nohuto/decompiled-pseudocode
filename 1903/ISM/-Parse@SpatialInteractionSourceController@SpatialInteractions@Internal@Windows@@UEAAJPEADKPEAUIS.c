/*
 * XREFs of ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x180166C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800DC924 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     ??$ButtonsStateChanged@AEAKAEAKAEAI@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEAI@Z @ 0x180161D58 (--$ButtonsStateChanged@AEAKAEAKAEAI@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0A.c)
 *     ??$ResetReportDueToFirmwareUpdate@AEAKAEAK@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0@Z @ 0x18016231C (--$ResetReportDueToFirmwareUpdate@AEAKAEAK@SpatialInteractionTrace@SpatialInteractionDevices@@SA.c)
 *     ??$TimestampClampedDueToLatency@AEAKAEAKAEB_JAEB_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEB_J1@Z @ 0x18016248C (--$TimestampClampedDueToLatency@AEAKAEAKAEB_JAEB_J@SpatialInteractionTrace@SpatialInteractionDev.c)
 *     _anonymous_namespace_::UpdateIfChanged_float_ @ 0x1801624F4 (_anonymous_namespace_--UpdateIfChanged_float_.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x180162528 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_180162528.c)
 *     ?CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N@Z @ 0x180164168 (-CheckForDeviceInformationUpdate@SpatialInteractionSourceController@SpatialInteractions@Internal.c)
 *     ?OnParse@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXI@Z @ 0x1801669B8 (-OnParse@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXI@Z.c)
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x180168EB8 (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x1801694EC (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
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
  bool *v11; // r13
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v12; // r14
  bool *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  char v19; // al
  char v20; // si
  __int64 v21; // rax
  __int64 v22; // r14
  struct SpatialInteractionDevices::InputReport *v23; // r9
  int v24; // edi
  float v25; // xmm6_4
  int v26; // eax
  unsigned int v27; // edi
  float v28; // xmm3_4
  float v29; // xmm1_4
  bool v30; // cl
  int v31; // eax
  unsigned int v32; // eax
  float v33; // xmm0_4
  int *v34; // rsi
  int v35; // r8d
  int v36; // ecx
  int v37; // eax
  char v38; // r9
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  _BYTE *v44; // r8
  _BYTE *v45; // r8
  _BYTE *v46; // r8
  const struct Windows::Foundation::Numerics::Matrix4x4 *v47; // r15
  const struct Windows::Foundation::Numerics::Matrix4x4 *v48; // r12
  __int128 v49; // xmm1
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v50; // r9
  float v51; // xmm2_4
  float v52; // xmm3_4
  float v53; // xmm1_4
  int v54; // esi
  bool v55; // r10
  bool v56; // r9
  int v57; // edi
  bool v58; // zf
  float v59; // xmm1_4
  float v60; // xmm0_4
  SpatialInteractionDevices::SpatialInteractionHeartbeat *v61; // rcx
  _OWORD v62[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v63; // [rsp+58h] [rbp-B0h]
  int v64; // [rsp+5Ch] [rbp-ACh]
  int v65; // [rsp+60h] [rbp-A8h]
  float v66; // [rsp+64h] [rbp-A4h]
  int v67; // [rsp+68h] [rbp-A0h]
  int v68; // [rsp+6Ch] [rbp-9Ch]
  float v69; // [rsp+70h] [rbp-98h]
  int v70; // [rsp+74h] [rbp-94h]
  char v71; // [rsp+78h] [rbp-90h]
  float v72; // [rsp+7Ch] [rbp-8Ch]
  char v73; // [rsp+80h] [rbp-88h]
  float v74; // [rsp+84h] [rbp-84h]
  float v75; // [rsp+88h] [rbp-80h]
  float v76; // [rsp+8Ch] [rbp-7Ch]
  float v77; // [rsp+90h] [rbp-78h]
  char v78; // [rsp+94h] [rbp-74h]
  int v79; // [rsp+98h] [rbp-70h]
  char v80; // [rsp+9Ch] [rbp-6Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+A8h] [rbp-60h] BYREF
  LONGLONG v82; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-50h] BYREF
  LARGE_INTEGER v84; // [rsp+C0h] [rbp-48h] BYREF
  LARGE_INTEGER v85; // [rsp+C8h] [rbp-40h] BYREF
  int v86; // [rsp+D0h] [rbp-38h] BYREF
  char *v87; // [rsp+D8h] [rbp-30h]
  _QWORD v88[7]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]
  LARGE_INTEGER v90; // [rsp+158h] [rbp+50h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v91; // [rsp+170h] [rbp+68h]

  v91 = a4;
  v11 = a10;
  v12 = a4;
  v15 = a11;
  *a10 = 0;
  *v15 = 0;
  *a8 = 0;
  *(_DWORD *)a9 = 0;
  if ( !*((_BYTE *)this + 106) )
  {
    v16 = -2147020579;
    v17 = 511LL;
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
  if ( v19 )
  {
    v20 = 1;
  }
  else
  {
    v20 = 0;
    if ( !a2 )
    {
      v47 = a7;
      v48 = a6;
      goto LABEL_65;
    }
  }
  if ( a2 && a3 != *((unsigned __int16 *)this + 94) )
  {
    v16 = -2147024809;
    v17 = 519LL;
    goto LABEL_3;
  }
  QueryPerformanceCounter(&PerformanceCount);
  v21 = *((_QWORD *)this + 86);
  v22 = *((_QWORD *)this + 122);
  v83 = v22;
  v82 = PerformanceCount.QuadPart - v21;
  if ( v22 >= PerformanceCount.QuadPart - v21 )
  {
    *((_QWORD *)this + 122) = v22 + 1;
    SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency<unsigned long &,unsigned long &,__int64 const &,__int64 const &>(
      (unsigned int *)this + 2,
      (unsigned int *)this + 3,
      &v83,
      &v82);
  }
  else
  {
    *((_QWORD *)this + 122) = PerformanceCount.QuadPart - v21;
  }
  *v11 = v22 == 0;
  memset_0(v62, 0, 0x68uLL);
  if ( v20 )
  {
    v58 = *((_BYTE *)this + 440) == 0;
    v24 = *((_DWORD *)this + 241);
    v64 = v24;
    if ( v58 )
    {
      v25 = v72;
    }
    else
    {
      v25 = 0.0;
      v73 = 1;
      v72 = 0.0;
    }
    if ( (v24 & 0x20) != 0 )
    {
      v71 = 1;
      v69 = 0.5;
      *(float *)&v70 = 0.5;
    }
    if ( (v24 & 4) != 0 )
    {
      LOBYTE(v68) = 1;
      v66 = 0.5;
      *(float *)&v67 = 0.5;
    }
    SpatialInteractionDevices::SpatialInteractionTrace::ResetReportDueToFirmwareUpdate<unsigned long &,unsigned long &>(
      (unsigned int *)this + 2,
      (unsigned int *)this + 3);
  }
  else
  {
    v86 = *((unsigned __int16 *)this + 94);
    v87 = a2;
    v26 = SpatialInteractionDevices::ParseInputReport(
            (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
            (struct SpatialInteractionDevices::HID_HANDLE *)&v86,
            (struct SpatialInteractionDevices::HID_REPORT *)v62,
            v23);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v26);
      return v27;
    }
    v25 = v72;
    v24 = v64;
  }
  if ( !*((_BYTE *)this + 440) )
  {
    if ( (v24 & 8) != 0 )
    {
      v58 = (v65 & 8) == 0;
      *((_BYTE *)this + 1011) = 1;
      if ( v58 )
        v33 = 0.0;
      else
        v33 = FLOAT_1_0;
      *((float *)this + 250) = v33;
    }
    goto LABEL_46;
  }
  v63 |= 8u;
  if ( !v73 )
  {
    v24 &= ~8u;
    v64 = v24;
    goto LABEL_46;
  }
  v24 |= 8u;
  *((float *)this + 250) = v25;
  *((_BYTE *)this + 1011) = 1;
  v64 = v24;
  v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - 1.0)) & _xmm);
  if ( v28 > 0.001 )
    v65 &= ~8u;
  else
    v65 |= 8u;
  v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm);
  v30 = v29 > 0.001 && v28 > 0.001;
  v31 = *((_DWORD *)this + 243);
  if ( (v31 & 8) == 0 )
  {
    if ( !v30 )
      goto LABEL_46;
    v32 = v31 | 8;
    goto LABEL_37;
  }
  if ( !v30 )
  {
    v32 = v31 & 0xFFFFFFF7;
LABEL_37:
    *((_DWORD *)this + 243) = v32;
    *v11 = 1;
  }
LABEL_46:
  v34 = (int *)((char *)this + 968);
  LODWORD(a10) = v24;
  v35 = v24 & v65 | *((_DWORD *)this + 242) & ~v24;
  v36 = v63 | *((_DWORD *)this + 241);
  if ( *((_DWORD *)this + 241) != v36 )
  {
    *((_DWORD *)this + 241) = v36;
    *v11 = 1;
  }
  v37 = *v34;
  v38 = 0;
  if ( *v34 != v35 )
  {
    *v34 = v35;
    v38 = 1;
    LOBYTE(v37) = v35;
  }
  if ( v38 )
  {
    *v11 = 1;
    SpatialInteractionDevices::SpatialInteractionTrace::ButtonsStateChanged<unsigned long &,unsigned long &,unsigned int &>(
      (unsigned int *)this + 2,
      (unsigned int *)this + 3,
      (unsigned int *)this + 242);
    v37 = *v34;
  }
  if ( (v37 & 0x44) != 0 )
  {
    if ( (_BYTE)v68 )
    {
      v39 = *(float *)&v67;
      v40 = v66 * 2.0;
      *((_BYTE *)this + 1010) = 1;
      *((float *)this + 246) = v40 - 1.0;
      *((float *)this + 247) = (float)(v39 * 2.0) - 1.0;
    }
  }
  else
  {
    *((_BYTE *)this + 1010) = 0;
  }
  if ( v71 )
  {
    v41 = *(float *)&v70;
    v42 = v69 * 2.0;
    *((_BYTE *)this + 1012) = 1;
    *((float *)this + 248) = v42 - 1.0;
    *((float *)this + 249) = (float)(v41 * 2.0) - 1.0;
  }
  if ( v78 )
  {
    v43 = v74;
    *((_BYTE *)this + 1144) = 1;
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 282, v43, v11);
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 283, v75, v44);
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 284, v76, v45);
    anonymous_namespace_::UpdateIfChanged_float_((float *)this + 285, v77, v46);
  }
  if ( v80 )
  {
    *((_DWORD *)this + 254) = v79;
    *((_BYTE *)this + 1020) = 1;
  }
  v47 = a7;
  v48 = a6;
  v12 = v91;
  if ( *((_BYTE *)this + 456) )
  {
    v49 = v62[1];
    v50 = v91;
    *(_OWORD *)((char *)this + 460) = v62[0];
    *(_OWORD *)((char *)this + 476) = v49;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      0LL,
      (const struct SpatialInteractionDevices::PoseData *)v62,
      v50,
      v48,
      v47);
    *v11 = 1;
  }
LABEL_65:
  v51 = *((float *)this + 112);
  v52 = *((float *)this + 113);
  v53 = *((float *)this + 250);
  v54 = *((_DWORD *)this + 106);
  v55 = v53 >= (float)(v51 + v52) || v51 == 0.0 && v53 > 0.0;
  v56 = (float)(v51 - v52) >= v53 || v51 == 1.0 && v53 < 1.0;
  *((_BYTE *)this + 441) = v53 == 1.0;
  v57 = 2;
  if ( v54 )
  {
    if ( v54 != 1 )
    {
      if ( v54 == 2 )
      {
        v58 = !v56;
LABEL_81:
        if ( v58 )
          goto LABEL_93;
        goto LABEL_82;
      }
      if ( v54 != 3 )
        goto LABEL_93;
      if ( v53 != 1.0 )
      {
        v58 = v53 != 0.0;
        goto LABEL_81;
      }
      goto LABEL_90;
    }
    if ( v56 || v53 == 0.0 )
    {
LABEL_82:
      *((_DWORD *)this + 106) = 0;
      goto LABEL_93;
    }
    if ( v53 != 1.0 )
    {
      QueryPerformanceCounter(&v84);
      if ( v84.QuadPart - *((_QWORD *)this + 54) > (unsigned int)(int)(*((float *)this + 111)
                                                                     * (double)(int)qword_1801E0C48) )
        *((_DWORD *)this + 106) = 3;
      goto LABEL_93;
    }
LABEL_90:
    *((_DWORD *)this + 106) = 2;
    goto LABEL_93;
  }
  if ( v53 == 1.0 )
    goto LABEL_90;
  if ( v55 )
  {
    *((_DWORD *)this + 106) = 1;
    QueryPerformanceCounter(&v85);
    *((LARGE_INTEGER *)this + 54) = v85;
  }
LABEL_93:
  if ( (unsigned int)(v54 - 1) <= 1 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 106) - 1) <= 1 )
    {
      v60 = *((float *)this + 250);
      v57 = 3;
      if ( v60 > *((float *)this + 112) )
        *((float *)this + 112) = v60;
      goto LABEL_102;
    }
    v57 = 4;
  }
  else if ( (unsigned int)(*((_DWORD *)this + 106) - 1) > 1 )
  {
    v59 = *((float *)this + 250);
    v57 = 6;
    if ( *((float *)this + 112) > v59 )
      *((float *)this + 112) = v59;
    goto LABEL_102;
  }
  *v11 = 1;
  *((_DWORD *)this + 112) = *((_DWORD *)this + 250);
LABEL_102:
  if ( *((_BYTE *)this + 456) )
  {
    v90.QuadPart = 0LL;
    QueryPerformanceCounter(&v90);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateSimulatedPose(
      this,
      v90.QuadPart,
      (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 460),
      v12,
      v48,
      v47);
  }
  else if ( v12 )
  {
    *v11 |= Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose(
              this,
              a5,
              v12,
              v48,
              v47);
  }
  *a8 = *((_BYTE *)this + 441);
  *(_DWORD *)a9 = v57;
  v61 = (SpatialInteractionDevices::SpatialInteractionHeartbeat *)*((_QWORD *)this + 62);
  if ( v61 )
    SpatialInteractionDevices::SpatialInteractionHeartbeat::OnParse(v61, *((_DWORD *)this + 242));
  v88[0] = this;
  v88[1] = &a10;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___(
    (unsigned int *)this + 2,
    (unsigned int *)v88);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CheckForDeviceInformationUpdate(this, a11);
  return 0LL;
}

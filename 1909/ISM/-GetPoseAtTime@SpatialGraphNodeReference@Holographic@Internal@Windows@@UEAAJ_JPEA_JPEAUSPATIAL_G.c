/*
 * XREFs of ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x180156E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B4DFC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEAIAEAKAEB_J2AEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@Z @ 0x18014A3DC (--$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AE.c)
 *     ??$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEBJAEA_J1AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@Z @ 0x18014A45C (--$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOA.c)
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801525C0 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 *     SpatialGraphDriverClientHelpers::GetLatestPoses @ 0x180156988 (SpatialGraphDriverClientHelpers--GetLatestPoses.c)
 *     ?GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x180157694 (-GetPoseAtTime_NotEnoughPosesToExtrapolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     ?GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ @ 0x180157730 (-GetPoseAtTime_NotEnoughPosesToInterpolate_@HolographicDriverClientContinuousTrace@@QEAAXXZ.c)
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x180157A10 (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 *     ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x180159878 (-IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z.c)
 *     ?IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z @ 0x1801598C0 (-IsVerboseTracingEnabled@HolographicDriverClientContinuousTrace@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x18016179C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphNodeReference::GetPoseAtTime(
        Windows::Internal::Holographic::SpatialGraphNodeReference *this,
        __int64 a2,
        __int64 *a3,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a4)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *); // rax
  unsigned int v8; // r14d
  signed int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // cl
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  HolographicDriverClientContinuousTrace *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rcx
  HolographicDriverClientContinuousTrace *v22; // rcx
  _OWORD *v23; // rcx
  struct DirectX::XMFLOAT4X3 *v25; // [rsp+28h] [rbp-D8h]
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  void *v28; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v31; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v32; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER *v36; // [rsp+90h] [rbp-70h]
  _OWORD v37[3]; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER *v38; // [rsp+D0h] [rbp-30h]
  char v39; // [rsp+D8h] [rbp-28h]
  _OWORD v40[10]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v41[160]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v30 = a2;
  v31 = a3;
  v28 = a4;
  QueryPerformanceCounter(&PerformanceCount);
  v32 = PerformanceCount;
  v27 = 2;
  memset_0(v28, 0, 0xA0uLL);
  *((_DWORD *)v28 + 4) = 0;
  *(_QWORD *)v28 = v30;
  if ( v31 )
    *v31 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 13);
  *(_QWORD *)&v33 = &v28;
  *((_QWORD *)&v33 + 1) = (char *)this - 8;
  *(_QWORD *)&v34 = &v27;
  *((_QWORD *)&v34 + 1) = v40;
  *(_QWORD *)&v35 = &v30;
  *((_QWORD *)&v35 + 1) = &v31;
  v36 = &v32;
  v6 = *v5;
  v37[0] = v33;
  v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 8);
  v37[1] = v34;
  v37[2] = v35;
  v38 = &v32;
  v8 = v7(v5);
  if ( v8 - 1 <= 1 )
  {
    if ( (int)SpatialGraphDriverClientHelpers::GetLatestPoses(
                *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 8),
                (char *)this + 80,
                v8,
                v40,
                (DWORD *)&v26) < 0 )
      goto LABEL_24;
    if ( HolographicDriverClientContinuousTrace::IsVerboseTracingEnabled(v11) )
    {
      v14 = 0LL;
      for ( PerformanceCount.LowPart = 0; (unsigned int)v14 < v26; PerformanceCount.LowPart = v14 )
      {
        HolographicDriverClientContinuousTrace::GetPoseAtTime_LatestPoseFromDriver<unsigned int &,unsigned long &,__int64 const &,__int64 const &,enum SPATIAL_TRACKING_VALIDITY_FLAGS const &,DirectX::XMFLOAT4X3 const &>(
          (unsigned int *)&PerformanceCount,
          (unsigned int *)&v26,
          (__int64 *)&v40[10 * v14],
          (_QWORD *)&v40[10 * v14] + 1,
          &v40[10 * v14 + 1],
          (struct DirectX::XMFLOAT4X3 *)((char *)&v40[10 * v14 + 2] + 4));
        v14 = (unsigned int)(v14 + 1);
      }
    }
    if ( v26 < v8 || v30 < *(_QWORD *)&v40[10 * v8 - 10] )
    {
      if ( (int)SpatialGraphDriverClientHelpers::GetPosesAroundTime(
                  *((_QWORD *)this + 8),
                  (char *)this + 80,
                  v30,
                  v40,
                  &v26) < 0 )
        goto LABEL_24;
      if ( (unsigned int)v26 >= 2 )
      {
        v20 = *((_QWORD *)this + 13);
        v27 = 1;
        v9 = (*(__int64 (__fastcall **)(__int64, _OWORD *, _BYTE *, __int64, void *))(*(_QWORD *)v20 + 24LL))(
               v20,
               v40,
               v41,
               v30,
               v28);
        PerformanceCount.LowPart = v9;
        HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses<long const &,__int64 &,__int64 &,enum SPATIAL_TRACKING_VALIDITY_FLAGS &,DirectX::XMFLOAT4X3 &>(
          (int *)&PerformanceCount,
          (__int64 *)v28,
          (__int64 *)v28 + 1,
          (_DWORD *)v28 + 4,
          (struct DirectX::XMFLOAT4X3 *)((char *)v28 + 36));
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            2131LL,
            (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(unsigned int)v9,
            (int)"Failed to interpolate historical poses",
            (const char *)v25);
          goto LABEL_25;
        }
        goto LABEL_24;
      }
      if ( HolographicDriverClientContinuousTrace::IsEnabled(v19, v18) )
      {
        wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
          v21,
          lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
        HolographicDriverClientContinuousTrace::GetPoseAtTime_NotEnoughPosesToInterpolate_(v22);
      }
    }
    else
    {
      if ( v30 - *(_QWORD *)&v40[0] < qword_1801E0C58 )
      {
        v15 = *((_QWORD *)this + 13);
        v27 = 0;
        v9 = (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, __int64, void *))(*(_QWORD *)v15 + 16LL))(
               v15,
               v40,
               v8,
               v30,
               v28);
        PerformanceCount.LowPart = v9;
        HolographicDriverClientContinuousTrace::GetPoseAtTime_PredictFromPoses<long const &,__int64 &,__int64 &,enum SPATIAL_TRACKING_VALIDITY_FLAGS &,DirectX::XMFLOAT4X3 &>(
          (int *)&PerformanceCount,
          (__int64 *)v28,
          (__int64 *)v28 + 1,
          (_DWORD *)v28 + 4,
          (struct DirectX::XMFLOAT4X3 *)((char *)v28 + 36));
        if ( v9 < 0 )
        {
          v10 = 2099LL;
          goto LABEL_14;
        }
LABEL_24:
        v9 = 0;
        goto LABEL_25;
      }
      if ( HolographicDriverClientContinuousTrace::IsEnabled(v13, v12) )
      {
        wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
          v16,
          lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
        HolographicDriverClientContinuousTrace::GetPoseAtTime_NotEnoughPosesToExtrapolate_(v17);
      }
    }
    v23 = v28;
    v27 = 2;
    *(_OWORD *)v28 = v40[0];
    v23[1] = v40[1];
    v23[2] = v40[2];
    v23[3] = v40[3];
    v23[4] = v40[4];
    v23[5] = v40[5];
    v23[6] = v40[6];
    v23[7] = v40[7];
    v23[8] = v40[8];
    v23[9] = v40[9];
    goto LABEL_24;
  }
  v9 = -2147418113;
  v10 = 2058LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v9);
LABEL_25:
  v39 = 0;
  lambda_f2d9a31b738d46358cc103eee0272db8_::operator()((__int64 **)v37);
  return (unsigned int)v9;
}

/*
 * XREFs of ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x180117220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18007D8EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x18010EF64 (-NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     _lambda_5c93fa6c61cd305c53357332304ca747_::operator() @ 0x1801176A0 (_lambda_5c93fa6c61cd305c53357332304ca747_--operator().c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  DWORD v8; // eax
  DWORD v9; // esi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  DWORD v13; // edi
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  HolographicDriverClientContinuousTrace *v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int128 v21; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v22; // rcx
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  HolographicDriverClientContinuousTrace *v27; // rcx
  _OWORD *v28; // rcx
  const char *v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  void *v32; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v35; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-88h]
  __int128 v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+98h] [rbp-68h]
  _QWORD *v40; // [rsp+A8h] [rbp-58h]
  _OWORD v41[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v42; // [rsp+E0h] [rbp-20h]
  char v43; // [rsp+E8h] [rbp-18h]
  __int128 InBuffer; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  _OWORD bAlertable[10]; // [rsp+110h] [rbp+10h] BYREF
  char v47[160]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v34 = a2;
  v35 = a3;
  v32 = a4;
  QueryPerformanceCounter(&PerformanceCount);
  v36[0] = PerformanceCount.QuadPart;
  v31 = 2;
  memset_0(v32, 0, 0xA0uLL);
  *((_DWORD *)v32 + 4) = 0;
  *(_QWORD *)v32 = v34;
  if ( v35 )
    *v35 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 13);
  *(_QWORD *)&v37 = &v32;
  *((_QWORD *)&v37 + 1) = &v31;
  *(_QWORD *)&v38 = bAlertable;
  *((_QWORD *)&v38 + 1) = &v34;
  *(_QWORD *)&v39 = &v35;
  *((_QWORD *)&v39 + 1) = (char *)this - 8;
  v40 = v36;
  v6 = *v5;
  v41[0] = v37;
  v7 = *(__int64 (__fastcall **)(__int64 *))(v6 + 8);
  v41[1] = v38;
  v41[2] = v39;
  v42 = v36;
  v8 = v7(v5);
  v9 = v8;
  if ( v8 - 1 <= 1 )
  {
    v13 = 0;
    PerformanceCount.LowPart = 0;
    v14 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 8),
            0x5B4408u,
            (char *)this + 80,
            0x10u,
            bAlertable,
            160 * v8,
            (LPDWORD)&PerformanceCount);
    v15 = v14;
    if ( v14 == -2147024637 || v14 == -2147024891 )
    {
      v17 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
      if ( v17 && *v17 )
      {
        HolographicDriverClientContinuousTrace::Instance();
        HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
          v18,
          (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 80),
          v15);
      }
    }
    else
    {
      if ( v14 >= 0 )
      {
        if ( !PerformanceCount.LowPart )
        {
          v16 = 104LL;
          goto LABEL_12;
        }
        v13 = PerformanceCount.LowPart / 0xA0;
        if ( PerformanceCount.LowPart % 0xA0uLL )
        {
          v16 = 105LL;
          goto LABEL_12;
        }
LABEL_19:
        if ( v13 >= v9 && v34 >= *(_QWORD *)&bAlertable[10 * v9 - 10] )
        {
          if ( v34 - *(_QWORD *)&bAlertable[0] < qword_180193A50 )
          {
            v19 = *((_QWORD *)this + 13);
            v31 = 0;
            v20 = (*(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, __int64, void *))(*(_QWORD *)v19 + 16LL))(
                    v19,
                    bAlertable,
                    v9,
                    v34,
                    v32);
            v10 = v20;
            if ( v20 < 0 )
            {
              v12 = (unsigned int)v20;
              v11 = 2063LL;
              goto LABEL_5;
            }
LABEL_40:
            v10 = 0;
            goto LABEL_41;
          }
          goto LABEL_39;
        }
        v21 = *((_OWORD *)this + 5);
        v22 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 8);
        v45 = v34;
        PerformanceCount.LowPart = 0;
        InBuffer = v21;
        v23 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
                v22,
                0x5B4410u,
                &InBuffer,
                0x18u,
                bAlertable,
                0x140u,
                (LPDWORD)&PerformanceCount);
        v24 = v23;
        if ( v23 == -2147024637 || v23 == -2147024891 )
        {
          v26 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
          if ( v26 && *v26 )
          {
            HolographicDriverClientContinuousTrace::Instance();
            HolographicDriverClientContinuousTrace::NoPoseReceivedYet_(
              v27,
              (Windows::Internal::Holographic::SpatialGraphNodeReference *)((char *)this + 80),
              v24);
          }
LABEL_38:
          if ( v24 < 0 )
            goto LABEL_40;
          goto LABEL_39;
        }
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x94,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
            (const char *)(unsigned int)v23);
          goto LABEL_38;
        }
        if ( PerformanceCount.LowPart )
        {
          if ( !(PerformanceCount.LowPart % 0xA0uLL) )
          {
            if ( PerformanceCount.LowPart / 0xA0 >= 2 )
            {
              v25 = *((_QWORD *)this + 13);
              v31 = 1;
              v10 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *, __int64, void *))(*(_QWORD *)v25 + 24LL))(
                      v25,
                      bAlertable,
                      v47,
                      v34,
                      v32);
              if ( v10 < 0 )
              {
                wil::details::in1diag3::Return_HrMsg(
                  retaddr,
                  (void *)0x824,
                  (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                  (const char *)(unsigned int)v10,
                  (unsigned __int16 *)"Failed to interpolate historical poses",
                  v30);
                goto LABEL_41;
              }
              goto LABEL_40;
            }
LABEL_39:
            v28 = v32;
            v31 = 2;
            *(_OWORD *)v32 = bAlertable[0];
            v28[1] = bAlertable[1];
            v28[2] = bAlertable[2];
            v28[3] = bAlertable[3];
            v28[4] = bAlertable[4];
            v28[5] = bAlertable[5];
            v28[6] = bAlertable[6];
            v28[7] = bAlertable[7];
            v28[8] = bAlertable[8];
            v28[9] = bAlertable[9];
            goto LABEL_40;
          }
          v16 = 152LL;
        }
        else
        {
          v16 = 151LL;
        }
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)0x8000FFFFLL);
        goto LABEL_40;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v14);
    }
    if ( v15 < 0 )
      goto LABEL_40;
    goto LABEL_19;
  }
  v10 = -2147418113;
  v11 = 2047LL;
  v12 = 2147549183LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)v12);
LABEL_41:
  v43 = 0;
  lambda_5c93fa6c61cd305c53357332304ca747_::operator()(v41);
  return (unsigned int)v10;
}

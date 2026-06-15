/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140006DE0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140007760 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x140030E1C (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  __int64 v2; // r9
  __int64 v3; // r12
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  struct IAudioProcessingObject *v6; // rdi
  int v7; // ebx
  unsigned int v8; // r14d
  int v9; // eax
  LPVOID v10; // rcx
  LPVOID v11; // rcx
  int v12; // ebx
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // r14
  unsigned int v17; // r15d
  __int64 v18; // rbx
  __int64 *v19; // rcx
  int v20; // esi
  __int64 v21; // rax
  __int64 *v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 *v30; // rbx
  float v31; // xmm6_4
  int v32; // ebx
  __int64 v33; // rcx
  bool v34; // si
  __int64 v35; // rdx
  unsigned __int64 v36; // r9
  LPVOID pv; // [rsp+28h] [rbp-89h] BYREF
  __int64 *v38; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-79h] BYREF
  __int64 v40; // [rsp+40h] [rbp-71h] BYREF
  __int64 v41; // [rsp+48h] [rbp-69h] BYREF
  __int64 v42; // [rsp+50h] [rbp-61h] BYREF
  __int64 v43; // [rsp+58h] [rbp-59h]
  __int64 v44; // [rsp+60h] [rbp-51h]
  struct IAudioProcessingObject *v45; // [rsp+68h] [rbp-49h]
  _BYTE v46[24]; // [rsp+70h] [rbp-41h] BYREF
  LPVOID v47; // [rsp+88h] [rbp-29h]
  __int128 v48; // [rsp+90h] [rbp-21h]
  __int64 v49; // [rsp+A0h] [rbp-11h]
  _BYTE v50[24]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v51; // [rsp+C0h] [rbp+Fh]
  unsigned int v52; // [rsp+C8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v44 = -2LL;
  v2 = *((unsigned int *)this + 35);
  v39 = *((_DWORD *)this + 35);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, v2);
  }
  v3 = *((_QWORD *)this + 9);
  v4 = *((_QWORD *)this + 3);
  v43 = v4;
  if ( !v3 )
  {
LABEL_87:
    *((_DWORD *)this + 34) = v39;
    return 0LL;
  }
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_64;
    v5 = *(_DWORD **)(v4 + 16);
    v43 = *(_QWORD *)(v4 + 8);
    if ( v5[10] != 2 )
      goto LABEL_64;
    v6 = *(struct IAudioProcessingObject **)(*((_QWORD *)v5 + 4) + 40LL);
    v45 = v6;
    if ( v6 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->AddRef)(v6);
    pv = 0LL;
    memset(v50, 0, sizeof(v50));
    LODWORD(v51) = 0;
    v38 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 **))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &v38) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v5 + 8LL))(v5, &pv);
      if ( v7 < 0
        || (v7 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)pv + 48LL))(pv, v46), v7 < 0)
        || (*(_DWORD *)v50 = 28,
            *(GUID *)&v50[4] = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
            LODWORD(v51) = HIDWORD(v47),
            *(_DWORD *)&v50[20] = *(_DWORD *)&v46[16],
            v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
                   v6,
                   28LL,
                   v50),
            v7 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            43LL,
            &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
            (unsigned int)v7);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xCDCu, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    if ( v38 )
      (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v7 < 0 )
    {
      v35 = 3978LL;
      goto LABEL_171;
    }
    v8 = v39;
    pv = 0LL;
    memset(v50, 0, sizeof(v50));
    v51 = 0LL;
    v52 = 0;
    v38 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 **))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &v38) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v5 + 8LL))(v5, &pv);
      if ( v7 < 0 )
        goto LABEL_116;
      v7 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)pv + 48LL))(pv, v46);
      if ( v7 < 0
        || (*(_DWORD *)v50 = 36,
            *(GUID *)&v50[4] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
            LODWORD(v51) = (int)((float)((float)(*((float *)&v47 + 1) * 10.0) / 1000.0) + 0.5),
            v52 = v8,
            HIDWORD(v51) = 10,
            *(_DWORD *)&v50[20] = *(_DWORD *)&v46[16],
            v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
                   v6,
                   36LL,
                   v50),
            v7 < 0) )
      {
LABEL_116:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            44LL,
            &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
            (unsigned int)v7);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xD25u, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    if ( v38 )
      (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v7 < 0 )
    {
      v35 = 3979LL;
LABEL_171:
      v36 = (unsigned int)v7;
      goto LABEL_172;
    }
    pv = 0LL;
    v38 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_6bb6a944_7352_4327_ab91_d92607b25656,
           &pv) >= 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 **))v6->lpVtbl->QueryInterface)(
             v6,
             &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
             &v38) < 0 )
      {
        v7 = 0;
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)pv + 24LL))(pv, 1LL);
        v7 = v26;
        if ( v26 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              45LL,
              &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
              (unsigned int)v26);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeDitherInterface", 0xD5Du, v7);
        }
      }
    }
    else
    {
      v7 = 0;
    }
    if ( v38 )
      (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v7 < 0 )
    {
      v35 = 3980LL;
      goto LABEL_171;
    }
    v9 = CPipeInstance::InitializeRateConverterInterface(this, (struct CProcessNode *)v5, v6);
    v7 = v9;
    if ( v9 < 0 )
    {
      v36 = (unsigned int)v9;
      v35 = 3981LL;
LABEL_172:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)v36,
        (int)pv);
      ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
      return (unsigned int)v7;
    }
    v40 = 0LL;
    memset(v50, 0, sizeof(v50));
    v51 = 0LL;
    v38 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
           &v40) >= 0 )
    {
      v29 = *(_QWORD *)v5;
      if ( v5[6] )
      {
        v7 = (*(__int64 (__fastcall **)(_DWORD *, __int64 **))(v29 + 16))(v5, &v38);
        if ( v7 < 0 || (v7 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v5 + 8LL))(v5, &pv), v7 < 0) )
        {
LABEL_132:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              47LL,
              &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
              (unsigned int)v7);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMatrixInterface", 0xE1Bu, v7);
          goto LABEL_32;
        }
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_DWORD *, __int64 **))(v29 + 8))(v5, &v38);
        if ( v7 < 0 )
          goto LABEL_132;
        v7 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v5 + 16LL))(v5, &pv);
        if ( v7 < 0 )
          goto LABEL_132;
      }
      *(_DWORD *)v50 = 32;
      *(GUID *)&v50[4] = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      *(_DWORD *)&v50[20] = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64 *))(*v38 + 40))(v38) + 2);
      LODWORD(v51) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv + 40LL))(pv) + 2);
      v30 = v38;
      v31 = (float)*(int *)((*(__int64 (__fastcall **)(__int64 *))(*v38 + 40))(v38) + 8);
      *((float *)&v51 + 1) = v31
                           / (float)*(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64 *))(*v30 + 40))(v30) + 12);
      v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
             v6,
             32LL,
             v50);
      if ( v7 < 0 )
        goto LABEL_132;
    }
    else
    {
      v7 = 0;
    }
LABEL_32:
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v38 )
      (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    if ( v7 < 0 )
    {
      v35 = 3982LL;
      goto LABEL_171;
    }
    v40 = 0LL;
    memset(v50, 0, sizeof(v50));
    v51 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
           &v40) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v5 + 8LL))(v5, &pv);
      if ( v7 < 0
        || (v7 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)pv + 48LL))(pv, v46), v7 < 0)
        || (*(_DWORD *)v50 = 32,
            *(GUID *)&v50[4] = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
            LODWORD(v51) = HIDWORD(v47),
            *(_DWORD *)&v50[20] = *(_DWORD *)&v46[16],
            HIDWORD(v51) = *(_QWORD *)this == 0LL,
            v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
                   v6,
                   32LL,
                   v50),
            v7 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            50LL,
            &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
            (unsigned int)v7);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xEDBu, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    if ( v7 < 0 )
    {
      v35 = 3983LL;
      goto LABEL_171;
    }
    v10 = 0LL;
    pv = 0LL;
    if ( *((_DWORD *)this + 30) )
    {
      v32 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
              v6,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &pv);
      v10 = pv;
      if ( v32 >= 0 && *((LPVOID *)this + 21) != pv )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 21, (struct IUnknown *)pv);
        v10 = pv;
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = 0LL;
    pv = 0LL;
    if ( !*((_DWORD *)this + 30) )
    {
      v12 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
              v6,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &pv);
      v11 = pv;
      if ( v12 >= 0 && *((LPVOID *)this + 22) != pv )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 22, (struct IUnknown *)pv);
        v11 = pv;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    v40 = 0LL;
    memset(v46, 0, sizeof(v46));
    v47 = 0LL;
    v48 = 0uLL;
    v49 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
           &v40) >= 0 )
    {
      *(_DWORD *)v46 = 56;
      *(GUID *)&v46[4] = GUID_693badea_1eb1_4013_b799_285f624a55bd;
      mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)this + 23), &pv);
      v47 = pv;
      v48 = *((_OWORD *)this + 18);
      v49 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
              v27,
              lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
      v28 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
              v6,
              56LL,
              v46);
      v7 = v28;
      if ( v28 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            51LL,
            &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
            (unsigned int)v28);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xF1Au, v7);
      }
    }
    else
    {
      v7 = 0;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    if ( v7 < 0 )
    {
      v35 = 3986LL;
      goto LABEL_171;
    }
    pv = 0LL;
    memset(v50, 0, sizeof(v50));
    v51 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v6->lpVtbl->QueryInterface)(
           v6,
           &GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae,
           &pv) >= 0 )
    {
      *(_DWORD *)v50 = 32;
      *(GUID *)&v50[4] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
      *(_DWORD *)&v50[20] = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)this + 2)
                                      + 56LL);
      v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v6->lpVtbl->Initialize)(
              v6,
              32LL,
              v50);
      v7 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF4F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v13,
          (int)pv);
        ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&pv);
        v35 = 3987LL;
        goto LABEL_171;
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    }
    else
    {
      ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&pv);
    }
    ((void (__fastcall *)(struct IAudioProcessingObject *))v6->lpVtbl->Release)(v6);
LABEL_64:
    v14 = *(_QWORD **)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v15 = (_QWORD *)*v14;
    if ( *v14 )
      break;
LABEL_80:
    if ( !v3 )
      goto LABEL_87;
    v4 = v43;
  }
  while ( 1 )
  {
    v16 = v15[2];
    v15 = (_QWORD *)*v15;
    v17 = v39;
    v18 = 0LL;
    v40 = 0LL;
    v19 = 0LL;
    v38 = 0LL;
    v20 = 0;
    v21 = *(_QWORD *)(v16 + 32);
    if ( !v21 || *(_DWORD *)(v21 + 40) != 2 )
      goto LABEL_73;
    v18 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 40LL);
    v40 = v18;
    if ( !v18 )
      goto LABEL_72;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v19 = v38;
    if ( !v38 )
      goto LABEL_69;
    v41 = 0LL;
    v42 = 0LL;
    (*(void (__fastcall **)(__int64 *, GUID *, __int64 *))*v38)(v38, &GUID_00000000_0000_0000_c000_000000000046, &v41);
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v18)(v18, &GUID_00000000_0000_0000_c000_000000000046, &v42);
    v33 = v41;
    v34 = v41 == v42;
    if ( v42 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      v33 = v41;
    }
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v19 = v38;
    if ( !v34 )
    {
LABEL_69:
      v22 = v19;
      v38 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v18)(
        v18,
        &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
        (__int64 *)&v38);
      v19 = v38;
      if ( v22 )
      {
        (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
        v19 = v38;
      }
    }
    if ( !v19 )
    {
LABEL_72:
      v20 = 0;
LABEL_73:
      *(_DWORD *)(v16 + 40) = v39;
      goto LABEL_74;
    }
    v23 = *v19;
    if ( *(_DWORD *)(v16 + 16) )
      v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(v23 + 32))(v19, v17, &v39);
    else
      v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(v23 + 24))(v19, v17, &v39);
    v20 = v24;
    if ( v24 >= 0 )
    {
      v19 = v38;
      goto LABEL_73;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_05a381e239823bc015f0eea1d9bc1631_Traceguids,
        (unsigned int)v24);
    }
    AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x38Eu, v20);
    v19 = v38;
LABEL_74:
    if ( v19 )
      (*(void (__fastcall **)(__int64 *))(*v19 + 16))(v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v20 < 0 )
      break;
    if ( !v15 )
      goto LABEL_80;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF9D,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v20,
    (int)pv);
  return (unsigned int)v20;
}

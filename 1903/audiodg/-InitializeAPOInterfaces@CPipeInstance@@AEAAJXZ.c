/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A520
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009ECC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D44 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000A938 (-InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObj.c)
 *     ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AA94 (-InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000ABFC (-InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000ACC8 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AD88 (-InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x14000AE50 (-InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z.c)
 *     ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AFD4 (-InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D9E4 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14002930C (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  __int64 v2; // r9
  __int64 v3; // r13
  CPipeInstance *v4; // rcx
  __int64 v5; // rsi
  CPipeInstance *v6; // rcx
  struct IAudioProcessingObject *v7; // rbx
  int v8; // eax
  CPipeInstance *v9; // rcx
  unsigned int v10; // edi
  struct CProcessNode *v11; // rdx
  CPipeInstance *v12; // rcx
  CPipeInstance *v13; // rcx
  struct CProcessNode *v14; // rdx
  struct IUnknown *v15; // rcx
  struct IUnknown *v16; // rcx
  int v17; // edi
  int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // r15
  unsigned int v22; // r12d
  struct IAudioProcessingObject *v23; // rbx
  struct IUnknown *v24; // rcx
  int v25; // esi
  __int64 v26; // rax
  struct IUnknown *v27; // rsi
  struct IUnknownVtbl *lpVtbl; // rax
  int v30; // eax
  int v31; // edi
  __int64 v32; // rcx
  bool v33; // si
  unsigned __int64 v34; // r9
  __int64 v35; // rdx
  struct IUnknown *v36; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+28h] [rbp-58h] BYREF
  __int64 v38; // [rsp+30h] [rbp-50h] BYREF
  __int64 v39; // [rsp+38h] [rbp-48h] BYREF
  CPipeInstance *v40; // [rsp+40h] [rbp-40h]
  struct IAudioProcessingObject *v41; // [rsp+48h] [rbp-38h]
  __int64 v42; // [rsp+50h] [rbp-30h]
  int v43; // [rsp+58h] [rbp-28h] BYREF
  GUID v44; // [rsp+5Ch] [rbp-24h]
  int v45; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v42 = -2LL;
  v2 = *((unsigned int *)this + 36);
  v37 = *((_DWORD *)this + 36);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids, v2);
  }
  v3 = *((_QWORD *)this + 9);
  v4 = (CPipeInstance *)*((_QWORD *)this + 3);
  v40 = v4;
  if ( !v3 )
  {
LABEL_46:
    *((_DWORD *)this + 35) = v37;
    return 0LL;
  }
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_28;
    v5 = *((_QWORD *)v4 + 2);
    v6 = (CPipeInstance *)*((_QWORD *)v4 + 1);
    v40 = v6;
    if ( *(_DWORD *)(v5 + 40) != 2 )
      goto LABEL_28;
    v7 = *(struct IAudioProcessingObject **)(*(_QWORD *)(v5 + 32) + 40LL);
    v41 = v7;
    if ( v7 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->AddRef)(v7);
    v8 = CPipeInstance::InitializeVolumeInterface(v6, (struct CProcessNode *)v5, v7);
    v10 = v8;
    if ( v8 < 0 )
      break;
    v8 = CPipeInstance::InitializeMeterInterface(v9, (struct CProcessNode *)v5, v7, v37);
    v10 = v8;
    if ( v8 < 0 )
    {
      v35 = 3980LL;
      goto LABEL_79;
    }
    v8 = CPipeInstance::InitializeDitherInterface(v12, v11, v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      v35 = 3981LL;
      goto LABEL_79;
    }
    v8 = CPipeInstance::InitializeRateConverterInterface(this, (struct CProcessNode *)v5, v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      v35 = 3982LL;
      goto LABEL_79;
    }
    v8 = CPipeInstance::InitializeMatrixInterface(v13, (struct CProcessNode *)v5, v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      v35 = 3983LL;
      goto LABEL_79;
    }
    v8 = CPipeInstance::InitializeLimiterInterface(this, (struct CProcessNode *)v5, v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      v35 = 3984LL;
      goto LABEL_79;
    }
    v15 = 0LL;
    v36 = 0LL;
    if ( *((_DWORD *)this + 30) )
    {
      v31 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IUnknown **))v7->lpVtbl->QueryInterface)(
              v7,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v36);
      v15 = v36;
      if ( v31 >= 0 && *((struct IUnknown **)this + 22) != v36 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 22, v36);
        v15 = v36;
      }
    }
    if ( v15 )
      ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
    v16 = 0LL;
    v36 = 0LL;
    if ( !*((_DWORD *)this + 30) )
    {
      v17 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IUnknown **))v7->lpVtbl->QueryInterface)(
              v7,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v36);
      v16 = v36;
      if ( v17 >= 0 && *((struct IUnknown **)this + 23) != v36 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 23, v36);
        v16 = v36;
      }
    }
    if ( v16 )
      ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
    v8 = CPipeInstance::InitializeSilenceMonitorInterface(this, v14, v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      v35 = 3987LL;
      goto LABEL_79;
    }
    v36 = 0LL;
    memset_0(&v43, 0, 0x20uLL);
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IUnknown **))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae,
           &v36) >= 0 )
    {
      v43 = 32;
      v44 = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
      v45 = *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)this + 16)
                      + 56LL);
      v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v7->lpVtbl->Initialize)(
              v7,
              32LL,
              &v43);
      v10 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF50,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v18,
          (int)v36);
        ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v36);
        v34 = v10;
        v35 = 3988LL;
        goto LABEL_80;
      }
      if ( v36 )
        ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
    }
    else
    {
      ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v36);
    }
    ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->Release)(v7);
LABEL_28:
    v19 = *(_QWORD **)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v20 = (_QWORD *)*v19;
    if ( *v19 )
    {
      while ( 1 )
      {
        v21 = v20[2];
        v20 = (_QWORD *)*v20;
        v22 = v37;
        v23 = 0LL;
        v41 = 0LL;
        v24 = 0LL;
        v36 = 0LL;
        v25 = 0;
        v26 = *(_QWORD *)(v21 + 32);
        if ( !v26 || *(_DWORD *)(v26 + 40) != 2 )
          goto LABEL_37;
        v23 = *(struct IAudioProcessingObject **)(*(_QWORD *)(v26 + 32) + 40LL);
        v41 = v23;
        if ( !v23 )
          break;
        ((void (__fastcall *)(struct IAudioProcessingObject *))v23->lpVtbl->AddRef)(v23);
        v24 = v36;
        if ( !v36 )
          goto LABEL_33;
        v38 = 0LL;
        v39 = 0LL;
        ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v36->lpVtbl->QueryInterface)(
          v36,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v38);
        ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v23->lpVtbl->QueryInterface)(
          v23,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v39);
        v32 = v38;
        v33 = v38 == v39;
        if ( v39 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          v32 = v38;
        }
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        v24 = v36;
        if ( !v33 )
        {
LABEL_33:
          v27 = v24;
          v36 = 0LL;
          ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IUnknown **))v23->lpVtbl->QueryInterface)(
            v23,
            &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
            &v36);
          v24 = v36;
          if ( v27 )
          {
            ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
            v24 = v36;
          }
        }
        if ( !v24 )
          break;
        lpVtbl = v24->lpVtbl;
        if ( *(_DWORD *)(v21 + 16) )
          v30 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))lpVtbl[1].AddRef)(v24, v22, &v37);
        else
          v30 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))lpVtbl[1].QueryInterface)(
                  v24,
                  v22,
                  &v37);
        v25 = v30;
        if ( v30 >= 0 )
        {
          v24 = v36;
          goto LABEL_37;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            12LL,
            &WPP_05a381e239823bc015f0eea1d9bc1631_Traceguids,
            (unsigned int)v30);
        }
        AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x38Eu, v25);
        v24 = v36;
LABEL_38:
        if ( v24 )
          ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
        if ( v23 )
          ((void (__fastcall *)(struct IAudioProcessingObject *))v23->lpVtbl->Release)(v23);
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF9E,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v25,
            (int)v36);
          return (unsigned int)v25;
        }
        if ( !v20 )
          goto LABEL_44;
      }
      v25 = 0;
LABEL_37:
      *(_DWORD *)(v21 + 40) = v37;
      goto LABEL_38;
    }
LABEL_44:
    if ( !v3 )
      goto LABEL_46;
    v4 = v40;
  }
  v35 = 3979LL;
LABEL_79:
  v34 = (unsigned int)v8;
LABEL_80:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)v34,
    (int)v36);
  if ( v7 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v7->lpVtbl->Release)(v7);
  return v10;
}

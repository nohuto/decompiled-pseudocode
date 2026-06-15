/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000C7B0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140005A40 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000A130 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x14000A600 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000CFB0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D280 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000D330 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000E6B0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400109A0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140015330 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     _TlgKeywordOn @ 0x140019808 (_TlgKeywordOn.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001ADB8 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001D997 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400318CC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x140039DD8 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        __int64 a3,
        CPipeInstance **a4)
{
  struct CDeviceProcessNode *v5; // r14
  int v6; // esi
  int FxPropertyStore; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  const struct _TlgProvider_t *v13; // rcx
  unsigned int v14; // r12d
  struct IPropertyStore *v15; // rbx
  unsigned __int64 v16; // rdi
  int v17; // r13d
  BOOL v18; // ecx
  int v19; // eax
  GUID *v20; // rcx
  int v21; // r13d
  struct IPropertyStore *v22; // rdx
  int v23; // r13d
  __int64 v24; // r13
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  int APOProcessNode; // eax
  __int64 v28; // rbx
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rbx
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rbx
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  CPipeInstance *v39; // rax
  CPipeInstance *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r12
  __int64 *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct ATL::CAtlPlex *v47; // r8
  int v48; // edx
  _QWORD *v49; // rcx
  int i; // edx
  int EndpointGuidFromEndpointId; // eax
  const unsigned __int16 *v52; // rsi
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // r13
  unsigned __int128 v55; // rax
  unsigned __int16 *v56; // rax
  int v57; // r12d
  unsigned int v58; // eax
  _QWORD *v59; // rcx
  CPipeInstance **v60; // rdi
  int v62; // eax
  int v63; // eax
  _BYTE v64[32]; // [rsp+0h] [rbp-158h] BYREF
  unsigned __int16 **v65; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v66; // [rsp+28h] [rbp-130h]
  unsigned int v67[4]; // [rsp+30h] [rbp-128h]
  unsigned int v68[2]; // [rsp+40h] [rbp-118h] BYREF
  int v69; // [rsp+48h] [rbp-110h]
  int v70; // [rsp+4Ch] [rbp-10Ch]
  __int128 v71; // [rsp+50h] [rbp-108h] BYREF
  __int64 v72; // [rsp+60h] [rbp-F8h]
  __int128 v73; // [rsp+68h] [rbp-F0h]
  int v74; // [rsp+78h] [rbp-E0h]
  struct CDeviceProcessNode *v75; // [rsp+80h] [rbp-D8h] BYREF
  GUID v76; // [rsp+90h] [rbp-C8h] BYREF
  void (__fastcall ***v77)(_QWORD, __int64); // [rsp+A0h] [rbp-B8h] BYREF
  int pExceptionObject; // [rsp+A8h] [rbp-B0h] BYREF
  int v79; // [rsp+ACh] [rbp-ACh] BYREF
  int v80; // [rsp+B0h] [rbp-A8h] BYREF
  int v81; // [rsp+B4h] [rbp-A4h] BYREF
  int v82; // [rsp+B8h] [rbp-A0h] BYREF
  int v83; // [rsp+BCh] [rbp-9Ch] BYREF
  int v84; // [rsp+C0h] [rbp-98h] BYREF
  int v85; // [rsp+C4h] [rbp-94h] BYREF
  int v86; // [rsp+C8h] [rbp-90h] BYREF
  int v87; // [rsp+CCh] [rbp-8Ch] BYREF
  int v88; // [rsp+D0h] [rbp-88h] BYREF
  CPipeInstance *v89; // [rsp+D8h] [rbp-80h]
  struct IPropertyStore *v90; // [rsp+E0h] [rbp-78h] BYREF
  unsigned __int64 v91[2]; // [rsp+F0h] [rbp-68h] BYREF
  struct IPropertyStore *v92; // [rsp+100h] [rbp-58h]
  __int64 v93; // [rsp+108h] [rbp-50h]
  long *v94; // [rsp+110h] [rbp-48h] BYREF
  ATL::CAtlException *v95; // [rsp+118h] [rbp-40h] BYREF
  CPipeInstance *v98; // [rsp+170h] [rbp+18h] BYREF
  CPipeInstance **v99; // [rsp+178h] [rbp+20h]

  v99 = a4;
  v93 = -2LL;
  v5 = 0LL;
  v6 = 0;
  v69 = 0;
  v75 = 0LL;
  v89 = 0LL;
  *(_QWORD *)v68 = 0LL;
  v77 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 10;
  LODWORD(v98) = 0;
  v70 = 0;
  v90 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids);
  }
  try
  {
    FxPropertyStore = TryGetFxPropertyStore(*(const unsigned __int16 **)(a3 + 56), &v90);
    if ( FxPropertyStore < 0 )
    {
      pExceptionObject = FxPropertyStore;
      throw (long *)&pExceptionObject;
    }
    v9 = *(_QWORD *)(a3 + 24);
    if ( v9 )
    {
      v10 = CProcessNode::CreateDummyProcessNode(*(unsigned int *)(a3 + 72), v9, &v77);
      if ( v10 < 0 )
      {
        v79 = v10;
        throw (long *)&v79;
      }
      v11 = *((_QWORD *)&v71 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v71);
      v12 = (_QWORD *)*((_QWORD *)&v73 + 1);
      v8 = **((_QWORD **)&v73 + 1);
      *(_QWORD *)(*((_QWORD *)&v73 + 1) + 16LL) = v77;
      *((_QWORD *)&v73 + 1) = v8;
      v12[1] = v11;
      *v12 = 0LL;
      ++v72;
      if ( *((_QWORD *)&v71 + 1) )
        **((_QWORD **)&v71 + 1) = v12;
      else
        *(_QWORD *)&v71 = v12;
      *((_QWORD *)&v71 + 1) = v12;
      v77 = 0LL;
    }
    if ( !*(_DWORD *)(a3 + 72) )
    {
      LODWORD(v98) = 1;
      v13 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                             v8,
                                             lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
      if ( v13 )
      {
        if ( *(_DWORD *)v13 > 4u && TlgKeywordOn(v13, 0x400000000000uLL) )
          v70 = 1;
      }
    }
    v14 = 0;
    v15 = v92;
    v16 = v91[0];
    while ( v14 < *(_DWORD *)(a3 + 96) )
    {
      v17 = *(_DWORD *)(a3 + 80) & (1 << v14);
      v18 = *(_DWORD *)(a3 + 88) == v14;
      v19 = *(_DWORD *)(a3 + 92);
      v69 = v19;
      if ( !v17 )
        goto LABEL_20;
      if ( v18 )
      {
        if ( (_DWORD)v98 )
        {
          v76 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v62 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  0LL,
                  *(unsigned int *)(a3 + 72),
                  1LL,
                  0,
                  &v76,
                  v68);
          if ( v62 < 0 )
          {
            v80 = v62;
            throw (long *)&v80;
          }
          v98 = *(CPipeInstance **)v68;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v71, &v98);
          *(_QWORD *)v68 = 0LL;
          LODWORD(v98) = 0;
          v19 = v69;
        }
        if ( v70 )
        {
          v76 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v63 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  0LL,
                  *(unsigned int *)(a3 + 72),
                  1LL,
                  0,
                  &v76,
                  v68);
          if ( v63 < 0 )
          {
            v81 = v63;
            throw (long *)&v81;
          }
          *(_QWORD *)&v76.Data1 = *(_QWORD *)v68;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v71, &v76);
          *(_QWORD *)v68 = 0LL;
          v70 = 0;
          v19 = v69;
        }
      }
      if ( v19 != v14 )
        v20 = (GUID *)(a3 + 120);
      else
LABEL_20:
        v20 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      *(_QWORD *)&v76.Data1 = v20;
      if ( v17 )
      {
        if ( v19 == v14 )
          v21 = 3;
        else
          v21 = 2;
        v15 = v90;
        v92 = v90;
        if ( v90 )
          ((void (__fastcall *)(struct IPropertyStore *))v90->lpVtbl->AddRef)(v90);
        v6 |= 1u;
        v22 = v15;
        v20 = *(GUID **)&v76.Data1;
      }
      else
      {
        v21 = 0;
        v16 = 0LL;
        v91[0] = 0LL;
        v6 |= 2u;
        v22 = 0LL;
      }
      v69 = v6;
      v76 = *v20;
      v23 = CAPOProcessNode::CreateAPOProcessNode(
              16LL * v14 + a3 + 168,
              v22,
              *(unsigned int *)(a3 + 72),
              0LL,
              v21,
              &v76,
              v68);
      if ( (v6 & 2) != 0 )
      {
        v6 &= ~2u;
        v69 = v6;
        if ( v16 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( (v6 & 1) != 0 )
      {
        v6 &= ~1u;
        if ( v15 )
          ((void (__fastcall *)(struct IPropertyStore *))v15->lpVtbl->Release)(v15);
      }
      if ( v23 < 0 )
      {
        v82 = v23;
        throw (long *)&v82;
      }
      v24 = *((_QWORD *)&v71 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v71);
      v25 = (_QWORD *)*((_QWORD *)&v73 + 1);
      v26 = **((_QWORD **)&v73 + 1);
      *(_QWORD *)(*((_QWORD *)&v73 + 1) + 16LL) = *(_QWORD *)v68;
      *((_QWORD *)&v73 + 1) = v26;
      v25[1] = v24;
      *v25 = 0LL;
      ++v72;
      if ( *((_QWORD *)&v71 + 1) )
        **((_QWORD **)&v71 + 1) = v25;
      else
        *(_QWORD *)&v71 = v25;
      *((_QWORD *)&v71 + 1) = v25;
      *(_QWORD *)v68 = 0LL;
      ++v14;
    }
    if ( (_DWORD)v98 )
    {
      *(GUID *)v91 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                         &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                         0LL,
                         *(unsigned int *)(a3 + 72),
                         1LL,
                         0,
                         v91,
                         v68);
      if ( APOProcessNode < 0 )
      {
        v83 = APOProcessNode;
        throw (long *)&v83;
      }
      v28 = *((_QWORD *)&v71 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v71);
      v29 = (_QWORD *)*((_QWORD *)&v73 + 1);
      v30 = **((_QWORD **)&v73 + 1);
      *(_QWORD *)(*((_QWORD *)&v73 + 1) + 16LL) = *(_QWORD *)v68;
      *((_QWORD *)&v73 + 1) = v30;
      v29[1] = v28;
      *v29 = 0LL;
      ++v72;
      if ( *((_QWORD *)&v71 + 1) )
        **((_QWORD **)&v71 + 1) = v29;
      else
        *(_QWORD *)&v71 = v29;
      *((_QWORD *)&v71 + 1) = v29;
      *(_QWORD *)v68 = 0LL;
    }
    if ( v70 )
    {
      *(GUID *)v91 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v31 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_693badea_1eb1_4013_b799_285f624a55bd,
              0LL,
              *(unsigned int *)(a3 + 72),
              1LL,
              0,
              v91,
              v68);
      if ( v31 < 0 )
      {
        v84 = v31;
        throw (long *)&v84;
      }
      v32 = *((_QWORD *)&v71 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v71);
      v33 = (_QWORD *)*((_QWORD *)&v73 + 1);
      v34 = **((_QWORD **)&v73 + 1);
      *(_QWORD *)(*((_QWORD *)&v73 + 1) + 16LL) = *(_QWORD *)v68;
      *((_QWORD *)&v73 + 1) = v34;
      v33[1] = v32;
      *v33 = 0LL;
      ++v72;
      if ( *((_QWORD *)&v71 + 1) )
        **((_QWORD **)&v71 + 1) = v33;
      else
        *(_QWORD *)&v71 = v33;
      *((_QWORD *)&v71 + 1) = v33;
      *(_QWORD *)v68 = 0LL;
    }
    v35 = CDeviceProcessNode::CreateDeviceProcessNode((struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)a3, &v75);
    if ( v35 < 0 )
    {
      v85 = v35;
      throw (long *)&v85;
    }
    v36 = *((_QWORD *)&v71 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v71);
    v37 = (_QWORD *)*((_QWORD *)&v73 + 1);
    v38 = **((_QWORD **)&v73 + 1);
    *(_QWORD *)(*((_QWORD *)&v73 + 1) + 16LL) = v75;
    *((_QWORD *)&v73 + 1) = v38;
    v37[1] = v36;
    *v37 = 0LL;
    ++v72;
    if ( *((_QWORD *)&v71 + 1) )
      **((_QWORD **)&v71 + 1) = v37;
    else
      *(_QWORD *)&v71 = v37;
    *((_QWORD *)&v71 + 1) = v37;
    v75 = 0LL;
    v39 = (CPipeInstance *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
    v98 = v39;
    if ( v39 )
      v40 = CPipeInstance::CPipeInstance(v39, READ_DATA_PIPE);
    else
      v40 = 0LL;
    v89 = v40;
    if ( !v40 )
    {
      v86 = -2147024882;
      throw (long *)&v86;
    }
    *((_OWORD *)v40 + 18) = *(_OWORD *)(a3 + 152);
    *((_DWORD *)v40 + 3) = *(_DWORD *)(a3 + 72);
    *((_DWORD *)v40 + 32) = *(_DWORD *)(a3 + 80) != 0;
    *((_DWORD *)v40 + 31) = *(_DWORD *)(a3 + 100) == 1;
    if ( *((struct IUnknown **)v40 + 18) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v40 + 18, a1);
    if ( *((struct IUnknown **)v40 + 29) != a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)v40 + 29, a2);
    v41 = *((_QWORD *)&v71 + 1);
    while ( v41 )
    {
      v42 = v41;
      v41 = *(_QWORD *)(v41 + 8);
      v43 = *((_QWORD *)v40 + 2);
      if ( !*((_QWORD *)v40 + 6) )
      {
        v47 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v40 + 5, *((unsigned int *)v40 + 14), 0x18uLL);
        if ( !v47 )
          ATL::AtlThrowImpl(-2147024882);
        v48 = *((_DWORD *)v40 + 14);
        v49 = (_QWORD *)((char *)v47 + 16 * (v48 - 1) + 8 * (unsigned int)(v48 - 1) + 8);
        for ( i = v48 - 1; i >= 0; --i )
        {
          *v49 = *((_QWORD *)v40 + 6);
          *((_QWORD *)v40 + 6) = v49;
          v49 -= 3;
        }
      }
      v44 = (__int64 *)*((_QWORD *)v40 + 6);
      v45 = *v44;
      v44[2] = *(_QWORD *)(v42 + 16);
      *((_QWORD *)v40 + 6) = v45;
      v44[1] = 0LL;
      *v44 = v43;
      ++*((_QWORD *)v40 + 4);
      v46 = *((_QWORD *)v40 + 2);
      if ( v46 )
        *(_QWORD *)(v46 + 8) = v44;
      else
        *((_QWORD *)v40 + 3) = v44;
      *((_QWORD *)v40 + 2) = v44;
    }
    *((_DWORD *)v40 + 51) = *(_DWORD *)(a3 + 88) != -1;
    *((_DWORD *)v40 + 76) = *(_DWORD *)(a3 + 148);
    EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*(_QWORD *)(a3 + 56), (char *)v40 + 152);
    if ( EndpointGuidFromEndpointId < 0 )
    {
      v87 = EndpointGuidFromEndpointId;
      throw (long *)&v87;
    }
    v52 = *(const unsigned __int16 **)(a3 + 56);
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    *((_QWORD *)v40 + 23) = 0LL;
    v54 = v53 + 1;
    if ( v53 + 1 < v53 )
    {
      v57 = -2147024362;
    }
    else
    {
      *((_QWORD *)v40 + 23) = 0LL;
      v55 = v54 * (unsigned __int128)2uLL;
      if ( is_mul_ok(v54, 2uLL) )
      {
        v56 = (unsigned __int16 *)CoTaskMemAlloc(2 * v54);
        *((_QWORD *)v40 + 23) = v56;
        if ( !v56 )
        {
          v57 = -2147024882;
          goto LABEL_124;
        }
        v57 = 0;
        StringCchCopyNExW(v56, v53 + 1, v52, v53, v65, v66, v67[0]);
      }
      else
      {
        v57 = -2147024362;
      }
      if ( v57 >= 0 )
      {
        v58 = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                          / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
                  * (double)(int)*(_QWORD *)(a3 + 32)
                  / 10000000.0
                  + 0.5);
        *((_DWORD *)v40 + 35) = v58;
        v59 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, v58);
          v59 = WPP_GLOBAL_Control;
        }
        goto LABEL_143;
      }
    }
LABEL_124:
    v88 = v57;
    throw (long *)&v88;
  }
  catch ( long *v94 )
  {
    *((_QWORD *)&v55 + 1) = v64;
    LODWORD(v98) = *(_DWORD *)v94;
    v59 = WPP_GLOBAL_Control;
    v57 = (int)v98;
    v40 = v89;
    v5 = v75;
  }
  catch ( ATL::CAtlException *v95 )
  {
    *((_QWORD *)&v55 + 1) = v64;
    LODWORD(v98) = *(_DWORD *)v95;
    v59 = WPP_GLOBAL_Control;
    v57 = (int)v98;
    v40 = v89;
    v5 = v75;
  }
LABEL_143:
  if ( v57 < 0 )
  {
    if ( v77 )
      (**v77)(v77, 1LL);
    if ( *(_QWORD *)v68 )
      (***(void (__fastcall ****)(_QWORD, __int64))v68)(*(_QWORD *)v68, 1LL);
    if ( v5 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v5)(v5, 1LL);
    if ( v40 )
      CPipeInstance::`scalar deleting destructor'(v40, DWORD2(v55));
    else
      CleanupProcessNodeList(&v71);
    goto LABEL_83;
  }
  v60 = v99;
  if ( v40 != *v99 )
  {
    if ( *v99 )
      CPipeInstance::`scalar deleting destructor'(*v99, DWORD2(v55));
    *v60 = v40;
LABEL_83:
    v59 = WPP_GLOBAL_Control;
  }
  if ( v59 != &WPP_GLOBAL_Control && (*((_DWORD *)v59 + 7) & 0x20000) != 0 && *((_BYTE *)v59 + 25) >= 4u )
  {
    WPP_SF_D(v59[2], 12LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, (unsigned int)v57);
    v59 = WPP_GLOBAL_Control;
  }
  if ( v57 < 0 )
  {
    if ( v59 != &WPP_GLOBAL_Control && (*((_DWORD *)v59 + 7) & 0x20000) != 0 && *((_BYTE *)v59 + 25) >= 2u )
      WPP_SF_D(v59[2], 13LL, &WPP_48d0519fd63337424d216177f8c49edf_Traceguids, (unsigned int)v57);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x13Fu, v57);
  }
  if ( v90 )
    ((void (__fastcall *)(struct IPropertyStore *, struct IPropertyStoreVtbl *))v90->lpVtbl->Release)(v90, v90->lpVtbl);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v71);
  return (unsigned int)v57;
}

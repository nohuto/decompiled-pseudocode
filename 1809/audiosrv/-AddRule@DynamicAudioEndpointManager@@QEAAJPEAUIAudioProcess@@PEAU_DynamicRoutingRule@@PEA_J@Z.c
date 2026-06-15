/*
 * XREFs of ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D72C
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18011B2A8 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18011BD80 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011DD2C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B46A4 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18011CB10 (--$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_Dynam.c)
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18011CBE8 (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18011CCC8 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x18011D350 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     _lambda_9df48ec32f41316b2ff42e2626987933_::operator() @ 0x18011D520 (_lambda_9df48ec32f41316b2ff42e2626987933_--operator().c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY07_N@Z @ 0x18011DDFC (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011E118 (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z @ 0x18011EC14 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z @ 0x18011EF1C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z @ 0x18011FC44 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DynamicAudioEndpointManager::AddRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3,
        __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  char v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // edx
  int Rule; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r12d
  struct IUnknown *v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  int refreshed; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  struct IUnknown *v27; // rbx
  _QWORD *v28; // rsi
  __int64 v29; // r14
  struct IUnknown *v30; // rax
  int v31; // eax
  int v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v33; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v34; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  void *v36; // [rsp+58h] [rbp-A8h]
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  void *v38; // [rsp+70h] [rbp-90h]
  char v39; // [rsp+78h] [rbp-88h]
  int v40[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int128 v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+B8h] [rbp-48h]
  bool v46[288]; // [rsp+C0h] [rbp-40h] BYREF
  bool v47[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v48; // [rsp+1E8h] [rbp+E8h]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v44 = -2LL;
  v33 = a2;
  *(_QWORD *)&v35 = a3;
  *(_QWORD *)v47 = 0LL;
  v48 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v45 = v7;
  *(_QWORD *)v32 = 0LL;
  v34 = 0LL;
  v8 = 1;
  if ( *(_DWORD *)a3 > 7u && *(_DWORD *)a3 != 0x7FFF )
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 371LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v10);
    goto LABEL_48;
  }
  v12 = *((_DWORD *)a3 + 1);
  if ( v12 > 2 )
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 372LL;
    goto LABEL_42;
  }
  switch ( *((_DWORD *)a3 + 2) )
  {
    case 1:
      *(_QWORD *)v32 = 0LL;
      v21 = Microsoft::WRL::Details::MakeAndInitialize<AvoidEndpointPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v32,
              &v33,
              (struct _DynamicRoutingRule **)&v35);
      v9 = v21;
      if ( v21 < 0 )
      {
        v11 = 379LL;
        goto LABEL_41;
      }
      break;
    case 2:
      *(_QWORD *)v32 = 0LL;
      v21 = Microsoft::WRL::Details::MakeAndInitialize<RemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v32,
              &v33,
              (struct _DynamicRoutingRule **)&v35);
      v9 = v21;
      if ( v21 < 0 )
      {
        v11 = 385LL;
        goto LABEL_41;
      }
      break;
    case 3:
      *(_OWORD *)v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 10;
      Rule = DynamicAudioEndpointManager::FindRule((_DWORD)this, v12, *(_DWORD *)a3, 3, (unsigned int)v40);
      v9 = Rule;
      if ( Rule < 0 )
      {
        v14 = 393LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v14,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)Rule);
        goto LABEL_34;
      }
      if ( v41 )
      {
        v8 = 0;
        if ( !*(_QWORD *)v40 )
          ATL::AtlThrowImpl(-2147467259);
        v15 = *(_QWORD *)(*(_QWORD *)v40 + 16LL);
        *(_QWORD *)v32 = v15;
        if ( v15 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          v15 = *(_QWORD *)v32;
        }
        Rule = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, bool *))(*(_QWORD *)v15 + 88LL))(
                 v15,
                 v33,
                 v46);
        v9 = Rule;
        if ( Rule < 0 )
        {
          v14 = 406LL;
          goto LABEL_33;
        }
        Rule = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *))(**(_QWORD **)v32 + 72LL))(
                 *(_QWORD *)v32,
                 v33);
        v9 = Rule;
        if ( Rule < 0 )
        {
          v14 = 409LL;
          goto LABEL_33;
        }
        *(_QWORD *)&v35 = v32;
        *((_QWORD *)&v35 + 1) = &v33;
        v36 = v46;
        v37 = v35;
        v38 = v46;
        v39 = 1;
        v16 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v32 + 96LL))(
                *(_QWORD *)v32,
                v33,
                a3);
        v9 = v16;
        if ( v16 < 0 )
        {
          v17 = (unsigned int)v16;
          v18 = 421LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            v18,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
            (const char *)v17);
          v39 = 0;
          lambda_9df48ec32f41316b2ff42e2626987933_::operator()((_QWORD **)&v37);
LABEL_34:
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v40);
          goto LABEL_48;
        }
        if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[8])v47) )
        {
          v9 = -2147467259;
          v17 = 2147500037LL;
          v18 = 426LL;
          goto LABEL_25;
        }
      }
      else
      {
        *(_QWORD *)v32 = 0LL;
        Rule = Microsoft::WRL::Details::MakeAndInitialize<CommunicationsRemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
                 v32,
                 &v33,
                 (struct _DynamicRoutingRule **)&v35);
        v9 = Rule;
        if ( Rule < 0 )
        {
          v14 = 432LL;
          goto LABEL_33;
        }
      }
      ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v40);
      break;
    default:
      v9 = -2147467263;
      v10 = 2147500033LL;
      v11 = 437LL;
      goto LABEL_42;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 64LL))(*(_QWORD *)v32);
  v20 = v34;
  v34 = 0LL;
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  v21 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))v32)(
          *(_QWORD *)v32,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v34);
  v9 = v21;
  if ( v21 < 0 )
  {
    v11 = 444LL;
LABEL_41:
    v10 = (unsigned int)v21;
    goto LABEL_42;
  }
  v21 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)v33 + 392LL))(
          v33,
          this,
          v34);
  v9 = v21;
  if ( v21 < 0 )
  {
    v11 = 448LL;
    goto LABEL_41;
  }
  *(_QWORD *)&v35 = this;
  *((_QWORD *)&v35 + 1) = &v33;
  v36 = &v34;
  v37 = v35;
  v38 = &v34;
  v39 = 1;
  LOBYTE(v22) = v8;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                this,
                v22,
                *(unsigned int *)a3,
                *((unsigned int *)a3 + 1),
                *(_QWORD *)v32,
                v47);
  v9 = refreshed;
  if ( refreshed < 0 )
  {
    v24 = (unsigned int)refreshed;
    v25 = 464LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v25,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v24);
    DynamicAudioEndpointManager::RemoveRule(this, v33, v34, 1);
LABEL_48:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
    if ( v7 )
      LeaveCriticalSection(v7);
    return v9;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[8])v47) )
  {
    v9 = -2147467259;
    v24 = 2147500037LL;
    v25 = 468LL;
    goto LABEL_47;
  }
  v39 = 0;
  v27 = v34;
  v28 = (_QWORD *)((char *)this + 888);
  std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
    (__int64 *)this + 109,
    (__int64)&v35,
    (_QWORD *)this + 111);
  v29 = v35;
  v30 = *(struct IUnknown **)(v35 + 40);
  if ( v30 != v27 )
  {
    if ( v27 )
    {
      ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->AddRef)(v27);
      v30 = *(struct IUnknown **)(v29 + 40);
    }
    *(_QWORD *)&v35 = v30;
    *(_QWORD *)(v29 + 40) = v27;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
  }
  *a4 = (*v28)++;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
  if ( v7 )
    LeaveCriticalSection(v7);
  v31 = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[8])v47, v19);
  v9 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      481LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v31);
    return v9;
  }
  return 0LL;
}

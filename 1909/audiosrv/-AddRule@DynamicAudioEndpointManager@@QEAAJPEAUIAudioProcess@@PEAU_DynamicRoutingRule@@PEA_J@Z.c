/*
 * XREFs of ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180129D6C
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1801278A8 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x180128390 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18012A36C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C2E98 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180129130 (--$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_Dynam.c)
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180129208 (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801292E8 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x180129960 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     _lambda_4c5819667fff9166d7bf4df2414ed383_::operator() @ 0x180129B34 (_lambda_4c5819667fff9166d7bf4df2414ed383_--operator().c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x18012A43C (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18012A75C (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18012B3A4 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18012B6AC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x18012C408 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DynamicAudioEndpointManager::AddRule(
        __int64 **this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3,
        __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // r9d
  char v9; // r14
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // edx
  int Rule; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // r12d
  struct IUnknown *v22; // rdx
  __int64 v23; // rdx
  int refreshed; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  struct IUnknown *v28; // rbx
  _QWORD *v29; // rsi
  __int64 v30; // r14
  struct IUnknown *v31; // rax
  int v32; // eax
  int v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v34; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v35; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+58h] [rbp-A8h]
  __int128 v38; // [rsp+68h] [rbp-98h] BYREF
  __int128 v39; // [rsp+78h] [rbp-88h]
  char v40; // [rsp+88h] [rbp-78h]
  int v41[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+C8h] [rbp-38h]
  _BYTE v47[288]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v49; // [rsp+200h] [rbp+100h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v45 = -2LL;
  v34 = a2;
  *(_QWORD *)&v36 = a3;
  v48 = 0uLL;
  v49 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v46 = v7;
  *(_QWORD *)v33 = 0LL;
  v35 = 0LL;
  v9 = 1;
  if ( *(_DWORD *)a3 > 8u && *(_DWORD *)a3 != 0x7FFF )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 359LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v11);
    goto LABEL_47;
  }
  v13 = *((_DWORD *)a3 + 1);
  if ( v13 > 2 )
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 360LL;
    goto LABEL_41;
  }
  switch ( *((_DWORD *)a3 + 2) )
  {
    case 1:
      *(_QWORD *)v33 = 0LL;
      v10 = Microsoft::WRL::Details::MakeAndInitialize<AvoidEndpointPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v33,
              &v34,
              (struct _DynamicRoutingRule **)&v36);
      if ( v10 < 0 )
        goto LABEL_47;
      break;
    case 2:
      *(_QWORD *)v33 = 0LL;
      v20 = Microsoft::WRL::Details::MakeAndInitialize<RemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
              v33,
              &v34,
              (struct _DynamicRoutingRule **)&v36);
      v10 = v20;
      if ( v20 < 0 )
      {
        v12 = 374LL;
LABEL_40:
        v11 = (unsigned int)v20;
        goto LABEL_41;
      }
      break;
    case 3:
      *(_OWORD *)v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 10;
      Rule = DynamicAudioEndpointManager::FindRule((_DWORD)this, v13, *(_DWORD *)a3, v8, (unsigned int)v41);
      v10 = Rule;
      if ( Rule < 0 )
      {
        v15 = 382LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)Rule);
        goto LABEL_30;
      }
      if ( v42 )
      {
        v9 = 0;
        if ( !*(_QWORD *)v41 )
          ATL::AtlThrowImpl(-2147467259);
        v16 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
        *(_QWORD *)v33 = v16;
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          v16 = *(_QWORD *)v33;
        }
        Rule = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, _BYTE *))(*(_QWORD *)v16 + 88LL))(
                 v16,
                 v34,
                 v47);
        v10 = Rule;
        if ( Rule < 0 )
        {
          v15 = 395LL;
          goto LABEL_29;
        }
        Rule = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *))(**(_QWORD **)v33 + 72LL))(
                 *(_QWORD *)v33,
                 v34);
        v10 = Rule;
        if ( Rule < 0 )
        {
          v15 = 398LL;
          goto LABEL_29;
        }
        *(_QWORD *)&v36 = v33;
        *((_QWORD *)&v36 + 1) = &v34;
        *(_QWORD *)&v37 = v47;
        v38 = v36;
        *(_QWORD *)&v39 = v47;
        BYTE8(v39) = 1;
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v33 + 96LL))(
                *(_QWORD *)v33,
                v34,
                a3);
        v10 = v17;
        if ( v17 < 0 )
        {
          v18 = (unsigned int)v17;
          v19 = 410LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
            (const char *)v18);
          BYTE8(v39) = 0;
          lambda_4c5819667fff9166d7bf4df2414ed383_::operator()((_QWORD **)&v38);
LABEL_30:
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v41);
          goto LABEL_47;
        }
        if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
                (DynamicAudioEndpointManager *)this,
                (bool (*const)[9])&v48) )
        {
          v10 = -2147467259;
          v18 = 2147500037LL;
          v19 = 415LL;
          goto LABEL_25;
        }
      }
      else
      {
        *(_QWORD *)v33 = 0LL;
        Rule = Microsoft::WRL::Details::MakeAndInitialize<CommunicationsRemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
                 v33,
                 &v34,
                 (struct _DynamicRoutingRule **)&v36);
        v10 = Rule;
        if ( Rule < 0 )
        {
          v15 = 421LL;
          goto LABEL_29;
        }
      }
      ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)v41);
      break;
    default:
      v10 = -2147467263;
      v11 = 2147500033LL;
      v12 = 426LL;
      goto LABEL_41;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v33 + 64LL))(*(_QWORD *)v33);
  v22 = v35;
  v35 = 0LL;
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  v20 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))v33)(
          *(_QWORD *)v33,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v35);
  v10 = v20;
  if ( v20 < 0 )
  {
    v12 = 433LL;
    goto LABEL_40;
  }
  v20 = (*(__int64 (__fastcall **)(struct IAudioProcess *, __int64 **, struct IUnknown *))(*(_QWORD *)v34 + 392LL))(
          v34,
          this,
          v35);
  v10 = v20;
  if ( v20 < 0 )
  {
    v12 = 437LL;
    goto LABEL_40;
  }
  *(_QWORD *)&v36 = this;
  *((_QWORD *)&v36 + 1) = &v34;
  *(_QWORD *)&v37 = &v35;
  *((_QWORD *)&v37 + 1) = &v48;
  v38 = v36;
  v39 = v37;
  v40 = 1;
  LOBYTE(v23) = v9;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                this,
                v23,
                *(unsigned int *)a3,
                *((unsigned int *)a3 + 1),
                *(_QWORD *)v33,
                &v48);
  v10 = refreshed;
  if ( refreshed < 0 )
  {
    v25 = (unsigned int)refreshed;
    v26 = 453LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v25);
    DynamicAudioEndpointManager::RemoveRule((DynamicAudioEndpointManager *)this, v34, v35, 1, (bool (*const)[9])&v48);
LABEL_47:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v33);
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)v10;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
          (DynamicAudioEndpointManager *)this,
          (bool (*const)[9])&v48) )
  {
    v10 = -2147467259;
    v25 = 2147500037LL;
    v26 = 457LL;
    goto LABEL_46;
  }
  v40 = 0;
  v28 = v35;
  v29 = this + 123;
  std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
    this + 121,
    (__int64)&v36,
    (__int64 *)this + 123);
  v30 = v36;
  v31 = *(struct IUnknown **)(v36 + 40);
  if ( v31 != v28 )
  {
    if ( v28 )
    {
      ((void (__fastcall *)(struct IUnknown *))v28->lpVtbl->AddRef)(v28);
      v31 = *(struct IUnknown **)(v30 + 40);
    }
    *(_QWORD *)&v36 = v31;
    *(_QWORD *)(v30 + 40) = v28;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v36);
  }
  *a4 = (*v29)++;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v35);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v33);
  if ( v7 )
    LeaveCriticalSection(v7);
  v32 = DynamicAudioEndpointManager::RefreshPublishedDefaults(
          (DynamicAudioEndpointManager *)this,
          (bool (*const)[9])&v48,
          v21);
  v10 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v32);
    return (unsigned int)v10;
  }
  return 0LL;
}

/*
 * XREFs of ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x18039A710
 * Callers:
 *     ?OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformation@567@@Z @ 0x18039B1B0 (-OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Device.c)
 *     ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x18039B2E0 (-OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180399B48 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Win.c)
 *     ??$_Try_emplace@AEBQEAUHSTRING__@@$$V@?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHSTRING__@@@Z @ 0x18039A1F4 (--$_Try_emplace@AEBQEAUHSTRING__@@$$V@-$map@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighti.c)
 *     ?IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windows@@PEA_N@Z @ 0x18039ADF0 (-IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windo.c)
 *     ?UpdateLastDeviceSeenTime@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x18039B8FC (-UpdateLastDeviceSeenTime@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x18039C7D8 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::AddDevice(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned __int64 a2)
{
  __int64 v3; // rbx
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  DWORD v6; // edx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  int IsCortanaDevice; // eax
  TwinUI::Lighting::AssistantLightManager *v11; // rcx
  __int64 v12; // rdx
  struct Windows::Devices::Lights::ILampArray *v13; // rcx
  TwinUI::Lighting::AssistantLightManager *v14; // rcx
  int AssistantLight; // eax
  __int64 *v16; // r10
  __int64 *v17; // r8
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rbx
  std::_Ref_count_base *v20; // rcx
  struct Windows::Devices::Lights::ILampArray *v21; // rcx
  __int64 v22; // rcx
  struct Windows::Devices::Lights::ILampArray *v23; // rcx
  __int64 v24; // rcx
  bool v26[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h] BYREF
  struct Windows::Devices::Lights::ILampArray *v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v31[2]; // [rsp+48h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v32; // [rsp+58h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+60h] [rbp-48h]
  __int64 v34; // [rsp+68h] [rbp-40h]
  LPCRITICAL_SECTION v35; // [rsp+70h] [rbp-38h]
  HSTRING_HEADER v36; // [rsp+78h] [rbp-30h] BYREF
  __int64 v37; // [rsp+90h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v34 = -2LL;
  v32 = lpCriticalSection;
  lpCriticalSectiona = lpCriticalSection;
  v30 = a2;
  v29 = 0LL;
  v37 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"Windows.Devices.Lights.LampArray", 0x21u, 0x20u);
  v3 = v37;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_7bb8c98d_5fc1_452d_bb1f_4ad410d398ff, &v29);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_46;
  }
  v27 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v29 + 56LL))(v29, v30, &v27);
  v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::LampArray *> *>(
         v27,
         v6,
         v7);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_5:
    v9 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_46;
  }
  v28 = 0LL;
  IsCortanaDevice = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Lights::ILampArray **))(*(_QWORD *)v27 + 64LL))(
                      v27,
                      &v28);
  v5 = IsCortanaDevice;
  if ( IsCortanaDevice < 0 )
  {
    v12 = 183LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)IsCortanaDevice);
LABEL_10:
    v13 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_5;
  }
  v26[0] = 0;
  IsCortanaDevice = TwinUI::Lighting::AssistantLightManager::IsCortanaDevice(v11, v28, v26);
  v5 = IsCortanaDevice;
  if ( IsCortanaDevice < 0 )
  {
    v12 = 186LL;
    goto LABEL_9;
  }
  if ( v26[0] )
  {
    IsCortanaDevice = TwinUI::Lighting::AssistantLightManager::UpdateLastDeviceSeenTime(v14);
    v5 = IsCortanaDevice;
    if ( IsCortanaDevice < 0 )
    {
      v12 = 192LL;
      goto LABEL_9;
    }
    *(_OWORD *)&v36.Reserved.Reserved1 = 0LL;
    v31[0] = (__int64 *)v28;
    if ( v28 )
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v28 + 8LL))(v28);
    AssistantLight = TwinUI::Lighting::AssistantLightFactory::GetAssistantLight(v31, &v36);
    v5 = AssistantLight;
    if ( AssistantLight < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)AssistantLight);
      if ( *(_QWORD *)&v36.Reserved.Reserved2[8] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v36.Reserved.Reserved2[8]);
      goto LABEL_10;
    }
    EnterCriticalSection(lpCriticalSection);
    v35 = lpCriticalSection;
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
      (__int64 **)&lpCriticalSection[1],
      v31,
      &v30);
    if ( v31[0] == (__int64 *)*v16 )
    {
      try
      {
        std::map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::_Try_emplace<HSTRING__ * const &,>(
          v16,
          (__int64)v31,
          &v30);
        v17 = v31[0];
        v18 = *(_QWORD *)&v36.Reserved.Reserved2[8];
        v19 = 0LL;
        *(_QWORD *)&v36.Reserved.Reserved2[8] = 0LL;
        v31[0][5] = (__int64)v36.Reserved.Reserved1;
        v20 = (std::_Ref_count_base *)v17[6];
        v17[6] = v18;
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
      }
      catch ( std::exception )
      {
        if ( v32 )
          LeaveCriticalSection(lpCriticalSectiona);
        if ( *(_QWORD *)&v36.Reserved.Reserved2[8] )
          std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v36.Reserved.Reserved2[8]);
        v21 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v5 = -2147024882;
        goto LABEL_46;
      }
    }
    else
    {
      v19 = *(std::_Ref_count_base **)&v36.Reserved.Reserved2[8];
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
  }
  v23 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v5 = 0;
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  return v5;
}

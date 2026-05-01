/*
 * XREFs of ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804000B8
 * Callers:
 *     ?OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformation@567@@Z @ 0x180400B60 (-OnDeviceAdded@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Device.c)
 *     ?OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devices@Windows@@PEAUIDeviceInformationUpdate@567@@Z @ 0x180400C90 (-OnDeviceUpdated@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceWatcher@Enumeration@Devi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x180098094 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1803FF528 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Win.c)
 *     ??$_Try_emplace@AEBQEAUHSTRING__@@$$V@?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHSTRING__@@@Z @ 0x1803FFA70 (--$_Try_emplace@AEBQEAUHSTRING__@@$$V@-$map@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighti.c)
 *     ?IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windows@@PEA_N@Z @ 0x1804007B0 (-IsCortanaDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUILampArray@Lights@Devices@Windo.c)
 *     ?UpdateLastDeviceSeenTime@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x180401308 (-UpdateLastDeviceSeenTime@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x1804020B8 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TwinUI::Lighting::AssistantLightManager::AddDevice(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned __int64 a2)
{
  __int64 v3; // rbx
  int ActivationFactory; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  DWORD v7; // edx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  int IsCortanaDevice; // eax
  TwinUI::Lighting::AssistantLightManager *v12; // rcx
  __int64 v13; // rdx
  struct Windows::Devices::Lights::ILampArray *v14; // rcx
  TwinUI::Lighting::AssistantLightManager *v15; // rcx
  int AssistantLight; // eax
  __int64 **v17; // r10
  __int64 *v18; // r8
  __int64 v19; // rdx
  std::_Ref_count_base *v20; // rbx
  std::_Ref_count_base *v21; // rcx
  struct Windows::Devices::Lights::ILampArray *v22; // rcx
  __int64 v23; // rcx
  struct Windows::Devices::Lights::ILampArray *v24; // rcx
  __int64 v25; // rcx
  bool v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+38h] [rbp-80h] BYREF
  struct Windows::Devices::Lights::ILampArray *v29; // [rsp+40h] [rbp-78h] BYREF
  __int64 v30; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v32[2]; // [rsp+58h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v33; // [rsp+68h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [rsp+70h] [rbp-48h]
  __int64 v35; // [rsp+78h] [rbp-40h]
  LPCRITICAL_SECTION v36; // [rsp+80h] [rbp-38h]
  HSTRING_HEADER v37; // [rsp+88h] [rbp-30h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v35 = -2LL;
  v33 = lpCriticalSection;
  lpCriticalSectiona = lpCriticalSection;
  v31 = a2;
  v30 = 0LL;
  v38 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v37, L"Windows.Devices.Lights.LampArray", 0x21u, 0x20u);
  v3 = v38;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_64652a6a_1d85_45b9_84f0_b7a1316ac766, &v30);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_46;
  }
  v28 = 0LL;
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v31, v5, &v28);
  v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::LampArray *> *>(
         v28,
         v7,
         v8);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_5:
    v10 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_46;
  }
  v29 = 0LL;
  IsCortanaDevice = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Lights::ILampArray **))(*(_QWORD *)v28 + 64LL))(
                      v28,
                      &v29);
  v6 = IsCortanaDevice;
  if ( IsCortanaDevice < 0 )
  {
    v13 = 183LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)IsCortanaDevice);
LABEL_10:
    v14 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_5;
  }
  v27 = 0;
  IsCortanaDevice = TwinUI::Lighting::AssistantLightManager::IsCortanaDevice(v12, v29, &v27);
  v6 = IsCortanaDevice;
  if ( IsCortanaDevice < 0 )
  {
    v13 = 186LL;
    goto LABEL_9;
  }
  if ( v27 )
  {
    IsCortanaDevice = TwinUI::Lighting::AssistantLightManager::UpdateLastDeviceSeenTime(v15);
    v6 = IsCortanaDevice;
    if ( IsCortanaDevice < 0 )
    {
      v13 = 192LL;
      goto LABEL_9;
    }
    *(_OWORD *)&v37.Reserved.Reserved1 = 0LL;
    v32[0] = (__int64 *)v29;
    if ( v29 )
      (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v29 + 8LL))(v29);
    AssistantLight = TwinUI::Lighting::AssistantLightFactory::GetAssistantLight(v32, &v37);
    v6 = AssistantLight;
    if ( AssistantLight < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)AssistantLight);
      if ( *(_QWORD *)&v37.Reserved.Reserved2[8] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v37.Reserved.Reserved2[8]);
      goto LABEL_10;
    }
    EnterCriticalSection(lpCriticalSection);
    v36 = lpCriticalSection;
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
      (__int64 **)&lpCriticalSection[1],
      v32,
      &v31);
    if ( v32[0] == *v17 )
    {
      try
      {
        std::map<HSTRING__ *,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::_Try_emplace<HSTRING__ * const &,>(
          v17,
          (unsigned __int64)v32,
          &v31);
        v18 = v32[0];
        v19 = *(_QWORD *)&v37.Reserved.Reserved2[8];
        v20 = 0LL;
        *(_QWORD *)&v37.Reserved.Reserved2[8] = 0LL;
        v32[0][5] = (__int64)v37.Reserved.Reserved1;
        v21 = (std::_Ref_count_base *)v18[6];
        v18[6] = v19;
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
      }
      catch ( std::exception )
      {
        if ( v33 )
          LeaveCriticalSection(lpCriticalSectiona);
        if ( *(_QWORD *)&v37.Reserved.Reserved2[8] )
          std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v37.Reserved.Reserved2[8]);
        v22 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v6 = -2147024882;
        goto LABEL_46;
      }
    }
    else
    {
      v20 = *(std::_Ref_count_base **)&v37.Reserved.Reserved2[8];
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
  }
  v24 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct Windows::Devices::Lights::ILampArray *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v6 = 0;
LABEL_46:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  return v6;
}

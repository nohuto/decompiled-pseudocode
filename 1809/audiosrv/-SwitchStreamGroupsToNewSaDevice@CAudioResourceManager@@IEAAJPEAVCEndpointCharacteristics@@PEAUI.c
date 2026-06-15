/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ED988
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ECA9C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180003E00 (-_Tidy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamGro.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180023430 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1c90b4167929925e307c56bc85910bc6___ @ 0x180064DE0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c9a26b2c915bef3b683ba652922443ff___ @ 0x18006519C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006519C.c)
 *     _lambda_d16d110d62607e9e7a123dfd70e3b2fb_::_lambda_d16d110d62607e9e7a123dfd70e3b2fb_ @ 0x18006532C (_lambda_d16d110d62607e9e7a123dfd70e3b2fb_--_lambda_d16d110d62607e9e7a123dfd70e3b2fb_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065370 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___::_lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___ @ 0x1800653CC (wil--details--lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___--_lambda_call__lambda_02ff.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E278C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  LPVOID *v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 *v19; // r9
  SaDeviceParams *v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  struct _GUID v23; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  struct _GUID v26; // [rsp+98h] [rbp-70h] BYREF
  SaDeviceParams *v27; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  int v29; // [rsp+B8h] [rbp-50h]
  __int128 v30; // [rsp+C0h] [rbp-48h]
  __int128 v31; // [rsp+D0h] [rbp-38h]
  __int128 v32; // [rsp+E0h] [rbp-28h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  _OWORD v34[3]; // [rsp+F8h] [rbp-10h] BYREF
  char v35; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  struct CEndpointCharacteristics *v37; // [rsp+170h] [rbp+68h] BYREF
  LPVOID pv; // [rsp+178h] [rbp+70h] BYREF

  v37 = a2;
  v33 = -2LL;
  v10 = a7;
  LODWORD(a7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 184LL))(*a7);
  v24 = 0LL;
  v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, *v10, &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      2578LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_44;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
      (__int64)(*((_QWORD *)&v24 + 1) - v24) >> 3);
  }
  if ( !((__int64)(*((_QWORD *)&v24 + 1) - v24) >> 3) )
    goto LABEL_43;
  v21 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*v10 + 104LL))(*v10, &v21);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v27 = 0LL;
    v23 = (struct _GUID)*((_OWORD *)v21 + 4);
    v26 = (struct _GUID)*((_OWORD *)v21 + 3);
    v14 = DeriveSaDeviceParametersForStream(
            v37,
            AUDCLNT_SHAREMODE_SHARED,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v21 + 2),
            &v26,
            &v23,
            a4,
            Src,
            a6,
            &v27);
    v12 = v14;
    v15 = (LPVOID *)v27;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        2598LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_27:
      if ( v15 )
        SaDeviceParams::`scalar deleting destructor'(v15);
      goto LABEL_29;
    }
    *(_QWORD *)&v26.Data1 = *v10;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v26);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c9a26b2c915bef3b683ba652922443ff___(
      (__int64 *)&v23,
      (_QWORD *)v24,
      *((_QWORD **)&v24 + 1),
      (__int64 *)&v26);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v23);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v37 + 2) + 40LL))(*((_QWORD *)v37 + 2), &pv);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        2617LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_25:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    *(_QWORD *)&v30 = &a7;
    *((_QWORD *)&v30 + 1) = a1;
    *(_QWORD *)&v31 = &pv;
    *((_QWORD *)&v31 + 1) = &v37;
    *(_QWORD *)&v32 = &v21;
    *((_QWORD *)&v32 + 1) = &v24;
    v34[0] = v30;
    v34[1] = v31;
    v34[2] = v32;
    v35 = 1;
    v28 = 0LL;
    v29 = (int)a7;
    v23 = (struct _GUID)*((_OWORD *)v21 + 3);
    v17 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, _QWORD, struct _GUID *, _DWORD, _DWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 56LL))(
            *(_QWORD *)(a1 + 48),
            pv,
            *((unsigned int *)v37 + 39),
            &v23,
            *((_DWORD *)v21 + 2),
            (_DWORD)a7,
            &v28);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        2660LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_22:
      if ( v28 )
        (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
      wil::details::lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___::_lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___((__int64)v34);
      goto LABEL_25;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
    v18 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, __int64 *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v37,
            v15,
            2LL,
            0,
            &v28,
            &v22);
    v12 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        2669LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      goto LABEL_22;
    }
    v19 = lambda_d16d110d62607e9e7a123dfd70e3b2fb_::_lambda_d16d110d62607e9e7a123dfd70e3b2fb_((__int64 *)&v23, &v22);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1c90b4167929925e307c56bc85910bc6___(
      (__int64 *)&v26,
      v24,
      *((__int64 *)&v24 + 1),
      v19);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v26);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids);
    }
    v35 = 0;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
    if ( v28 )
      (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
    wil::details::lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___::_lambda_call__lambda_02ff5d2e0247e50668dd90287b768e54___((__int64)v34);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v15 )
      SaDeviceParams::`scalar deleting destructor'(v15);
    if ( v21 )
      SaDeviceParams::`scalar deleting destructor'((LPVOID *)v21);
LABEL_43:
    v12 = 0;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    2585LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_29:
  if ( v21 )
    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v21);
LABEL_44:
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Tidy((__int64)&v24);
  return v12;
}

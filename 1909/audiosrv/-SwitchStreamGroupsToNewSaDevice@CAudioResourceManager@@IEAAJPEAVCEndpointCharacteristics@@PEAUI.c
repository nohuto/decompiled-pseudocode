/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800F906C
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800F815C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003890 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x1800410B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800EDBCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4bb5ea0411f8e4a5ce5464c87650feff___ @ 0x1800F4B48 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4B48.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_719f5bbfab44661ad7e653f4844cf5f9___ @ 0x1800F4BD4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4BD4.c)
 *     _lambda_75b02e7f6b47e5adc47099aefab01fa1_::operator() @ 0x1800F57EC (_lambda_75b02e7f6b47e5adc47099aefab01fa1_--operator().c)
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
  __int64 *v17; // r14
  LPVOID v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 *v23; // rbx
  __int64 *v24; // rsi
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  struct _GUID v30; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v31; // [rsp+98h] [rbp-70h] BYREF
  SaDeviceParams *v32; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-58h] BYREF
  int v34; // [rsp+B8h] [rbp-50h]
  __int128 v35; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-38h]
  __int128 v37; // [rsp+E0h] [rbp-28h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  __int128 v39; // [rsp+F8h] [rbp-10h]
  __int128 v40; // [rsp+108h] [rbp+0h]
  __int128 v41; // [rsp+118h] [rbp+10h]
  char v42; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  struct CEndpointCharacteristics *v44; // [rsp+170h] [rbp+68h] BYREF
  SaDeviceParams *v45; // [rsp+178h] [rbp+70h] BYREF

  v44 = a2;
  v38 = -2LL;
  v10 = a7;
  LODWORD(a7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 184LL))(*a7);
  v28 = 0LL;
  v29 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, *v10, &v28);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3A,
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
      (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids,
      (__int64)(*((_QWORD *)&v28 + 1) - v28) >> 3);
  }
  if ( !((__int64)(*((_QWORD *)&v28 + 1) - v28) >> 3) )
    goto LABEL_43;
  v45 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*v10 + 104LL))(*v10, &v45);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v32 = 0LL;
    v31 = (struct _GUID)*((_OWORD *)v45 + 4);
    v30 = (struct _GUID)*((_OWORD *)v45 + 3);
    v14 = DeriveSaDeviceParametersForStream(
            v44,
            AUDCLNT_SHAREMODE_SHARED,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v45 + 2),
            &v30,
            &v31,
            a4,
            Src,
            a6,
            &v32);
    v12 = v14;
    v15 = (LPVOID *)v32;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_27:
      if ( v15 )
        SaDeviceParams::`scalar deleting destructor'(v15);
      goto LABEL_29;
    }
    *(_QWORD *)&v30.Data1 = *v10;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v30);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_719f5bbfab44661ad7e653f4844cf5f9___(
      (__int64 *)&v31,
      (_QWORD *)v28,
      *((_QWORD **)&v28 + 1),
      (__int64 *)&v30);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v31);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v44 + 2) + 40LL))(*((_QWORD *)v44 + 2), &pv);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA61,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_25:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    *(_QWORD *)&v35 = &a7;
    *((_QWORD *)&v35 + 1) = a1;
    *(_QWORD *)&v36 = &pv;
    *((_QWORD *)&v36 + 1) = &v44;
    *(_QWORD *)&v37 = &v45;
    *((_QWORD *)&v37 + 1) = &v28;
    v39 = v35;
    v40 = v36;
    v41 = v37;
    v42 = 1;
    v33 = 0LL;
    v34 = (int)a7;
    v31 = (struct _GUID)*((_OWORD *)v45 + 3);
    v17 = *(__int64 **)(a1 + 48);
    v18 = pv;
    v19 = *v17;
    v20 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v44 + 56LL))(v44);
    v21 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, struct _GUID *, _DWORD, _DWORD, __int64 *))(v19 + 56))(
            v17,
            v18,
            v20,
            &v31,
            *((_DWORD *)v45 + 2),
            (_DWORD)a7,
            &v33);
    v12 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v21);
LABEL_22:
      if ( v33 )
        (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
      *(_QWORD *)&v35 = &a7;
      *((_QWORD *)&v35 + 1) = a1;
      *(_QWORD *)&v36 = &pv;
      *((_QWORD *)&v36 + 1) = &v44;
      *(_QWORD *)&v37 = &v45;
      *((_QWORD *)&v37 + 1) = &v28;
      lambda_75b02e7f6b47e5adc47099aefab01fa1_::operator()((int **)&v35);
      goto LABEL_25;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
    v22 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, __int64 *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v44,
            v15,
            2LL,
            0,
            &v33,
            &v27);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA95,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v22);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
      goto LABEL_22;
    }
    *(_QWORD *)&v30.Data1 = v27;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v30);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4bb5ea0411f8e4a5ce5464c87650feff___(
      (__int64 *)&v31,
      v28,
      *((__int64 *)&v28 + 1),
      (__int64 *)&v30);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v31);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids);
    }
    v42 = 0;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
    if ( v33 )
      (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v15 )
      SaDeviceParams::`scalar deleting destructor'(v15);
    if ( v45 )
      SaDeviceParams::`scalar deleting destructor'((LPVOID *)v45);
LABEL_43:
    v12 = 0;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA41,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_29:
  if ( v45 )
    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v45);
LABEL_44:
  v23 = (__int64 *)v28;
  if ( (_QWORD)v28 )
  {
    v24 = (__int64 *)*((_QWORD *)&v28 + 1);
    while ( v23 != v24 )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v23++);
    std::_Deallocate<16,0>((void *)v28, (const struct std::nothrow_t *)((v29 - v28) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return v12;
}

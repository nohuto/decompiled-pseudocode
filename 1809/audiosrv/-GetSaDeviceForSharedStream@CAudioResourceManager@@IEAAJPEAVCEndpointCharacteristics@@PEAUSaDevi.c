/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180025824
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180003E00 (-_Tidy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamGro.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F0AC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_37ad8f8d89b1555aa0166930e858cadf___ @ 0x180064E6C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180064E6C.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b8e6edafc84f4ea4982f0b5c293be3ab___ @ 0x1800650C0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800650C0.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e0911004c521f58945d6ca6dcea55343___ @ 0x180065278 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180065278.c)
 *     _lambda_b8e6edafc84f4ea4982f0b5c293be3ab_::_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_ @ 0x180065350 (_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_--_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065370 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_b8e6edafc84f4ea4982f0b5c293be3ab_::__lambda_b8e6edafc84f4ea4982f0b5c293be3ab_ @ 0x18006537C (_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_--__lambda_b8e6edafc84f4ea4982f0b5c293be3ab_.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8A48 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E278C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___ @ 0x1800E9E00 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED734 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800EE590 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_i @ 0x1800EE82C (WPP_SF_i.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        bool a7,
        bool a8,
        struct CAudioSessionManager *a9,
        bool a10,
        bool a11,
        struct ISaDeviceProxy **a12)
{
  struct SaDeviceResourceParams *v14; // r15
  struct ISaDeviceProxy **v15; // rsi
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  __int64 *v22; // rbx
  __int64 *v23; // rsi
  bool v25; // r15
  signed int SaDeviceForPackagedApp; // ebx
  __int128 v27; // rdi
  CAudioResourceManager *v28; // rcx
  bool v29; // zf
  enum _AUDCLNT_SHAREMODE v30; // edi
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  char v35; // r15
  _QWORD *i; // rbx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  unsigned __int16 *v39; // rsi
  __int64 v40; // rdi
  const void *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // si
  char v47; // di
  _QWORD *v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rbx
  int v53; // eax
  unsigned int v54; // edx
  int v55; // eax
  unsigned __int64 v56; // r9
  __int64 v57; // rdx
  struct ISaDeviceProxy **v58; // rbx
  struct CEndpointCharacteristics *v59; // rsi
  unsigned int v60; // eax
  unsigned int v61; // eax
  int v62; // ebx
  int v63; // ebx
  __int64 v64; // rax
  unsigned int v65; // edx
  __int64 v66; // rdx
  enum _AUDCLNT_SHAREMODE v67; // [rsp+28h] [rbp-C9h]
  struct SaDeviceResourceParams *v68; // [rsp+30h] [rbp-C1h]
  struct CAudioSessionManager *v69; // [rsp+38h] [rbp-B9h]
  LPVOID pv; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v71; // [rsp+50h] [rbp-A1h] BYREF
  __int64 v72; // [rsp+58h] [rbp-99h] BYREF
  unsigned int v73[2]; // [rsp+60h] [rbp-91h]
  SaDeviceParams *v74; // [rsp+68h] [rbp-89h] BYREF
  __int64 v75; // [rsp+70h] [rbp-81h] BYREF
  struct SaDeviceResourceParams *v76; // [rsp+78h] [rbp-79h] BYREF
  struct ISaDeviceProxy **v77; // [rsp+80h] [rbp-71h]
  struct CEndpointCharacteristics *v78; // [rsp+88h] [rbp-69h] BYREF
  __int128 v79; // [rsp+90h] [rbp-61h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-51h]
  __int128 v81; // [rsp+A8h] [rbp-49h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-39h]
  __int64 v83; // [rsp+C0h] [rbp-31h]
  _OWORD v84[2]; // [rsp+C8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+3Fh]

  v83 = -2LL;
  v73[0] = a4;
  v78 = a2;
  v14 = a6;
  v76 = a6;
  v15 = a12;
  v77 = a12;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_77202523448037bdbe1ee95759e6b961_Traceguids, *(_QWORD *)a3);
  }
  v84[0] = *((_OWORD *)a3 + 3);
  v16 = 0;
  v17 = *((_DWORD *)a2 + 4 * *((int *)a3 + 2) + 392);
  if ( v17 <= 0 )
  {
LABEL_8:
    v16 = -1;
  }
  else
  {
    while ( *(_OWORD *)(*((_QWORD *)a2 + 2 * *((int *)a3 + 2) + 195) + 16LL * v16) != v84[0] )
    {
      if ( ++v16 >= v17 )
        goto LABEL_8;
    }
  }
  if ( v16 == -1 )
    goto LABEL_35;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v18 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a2 + 2) + 40LL))(*((_QWORD *)a2 + 2), &pv);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v18,
      v67);
LABEL_22:
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v19;
  }
  v71 = 0LL;
  v20 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          pv,
          &v71);
  v19 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FC,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v20,
      v67);
LABEL_20:
    if ( v71 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
    goto LABEL_22;
  }
  memset(v84, 0, 24);
  v21 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v71 + 80LL))(v71, v84);
  v19 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v21,
      v67);
    v22 = *(__int64 **)&v84[0];
    if ( *(_QWORD *)&v84[0] )
    {
      v23 = (__int64 *)*((_QWORD *)&v84[0] + 1);
      if ( *(_QWORD *)&v84[0] != *((_QWORD *)&v84[0] + 1) )
      {
        do
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v22++);
        while ( v22 != v23 );
        v22 = *(__int64 **)&v84[0];
      }
      std::_Deallocate<16,0>(
        v22,
        (const struct std::nothrow_t *)((*(_QWORD *)&v84[1] - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF8uLL));
      memset(v84, 0, 24);
    }
    goto LABEL_20;
  }
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___(
    &v72,
    *(_QWORD *)&v84[0],
    *((_QWORD *)&v84[0] + 1),
    a3);
  v25 = v72 == *((_QWORD *)&v84[0] + 1);
  SaDeviceForPackagedApp = v72 != *((_QWORD *)&v84[0] + 1) ? 0x887C0043 : 0;
  v27 = v84[0];
  if ( *(_QWORD *)&v84[0] )
  {
    if ( *(_QWORD *)&v84[0] != *((_QWORD *)&v84[0] + 1) )
    {
      do
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v27);
        *(_QWORD *)&v27 = v27 + 8;
      }
      while ( (_QWORD)v27 != *((_QWORD *)&v27 + 1) );
      *(_QWORD *)&v27 = *(_QWORD *)&v84[0];
    }
    std::_Deallocate<16,0>(
      (void *)v27,
      (const struct std::nothrow_t *)((*(_QWORD *)&v84[1] - v27) & 0xFFFFFFFFFFFFFFF8uLL));
    memset(v84, 0, 24);
  }
  if ( v71 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
  v28 = (CAudioResourceManager *)pv;
  if ( pv )
    CoTaskMemFree(pv);
  v15 = v77;
  v29 = !v25;
  v14 = v76;
  if ( v29 )
  {
    v30 = a5;
  }
  else
  {
LABEL_35:
    v69 = (struct CAudioSessionManager *)v15;
    v68 = v14;
    v30 = a5;
    v67 = a5;
    v31 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a3,
            v73[0]);
    SaDeviceForPackagedApp = v31;
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_77202523448037bdbe1ee95759e6b961_Traceguids, v31);
    }
  }
  if ( SaDeviceForPackagedApp == -2005139364 )
  {
    if ( a8 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v28,
                                 a2,
                                 a3,
                                 v73[0],
                                 v30,
                                 v14,
                                 a9,
                                 v15);
      if ( SaDeviceForPackagedApp >= 0 )
        return 0LL;
      v32 = 1820LL;
      goto LABEL_44;
    }
LABEL_48:
    v32 = 2059LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)SaDeviceForPackagedApp,
      v67);
    return (unsigned int)SaDeviceForPackagedApp;
  }
  if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
  {
    if ( SaDeviceForPackagedApp >= 0 )
      return 0LL;
    goto LABEL_48;
  }
  pv = 0LL;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&pv);
  v33 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, LPVOID *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          *(_QWORD *)a3,
          &pv);
  v19 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v33,
      v67);
LABEL_151:
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&pv);
    return (unsigned int)v19;
  }
  v79 = 0LL;
  v80 = 0LL;
  v34 = (*(__int64 (__fastcall **)(LPVOID, __int128 *))(*(_QWORD *)pv + 80LL))(pv, &v79);
  v19 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v34,
      v67);
LABEL_150:
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(&v79);
    goto LABEL_151;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
      (__int64)(*((_QWORD *)&v79 + 1) - v79) >> 3);
  }
  v75 = 0LL;
  v35 = 0;
  for ( i = (_QWORD *)v79; ; ++i )
  {
    v37 = (_QWORD *)*((_QWORD *)&v79 + 1);
    if ( i == *((_QWORD **)&v79 + 1) )
      break;
    v38 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)*i + 40LL))(*i, v84);
    if ( *v38 == *((_QWORD *)a3 + 6)
      && v38[1] == *((_QWORD *)a3 + 7)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *((_DWORD *)a3 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
    {
      if ( a11 )
      {
        v39 = (unsigned __int16 *)*((_QWORD *)a3 + 2);
        v40 = v39[8];
        v41 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
        if ( memcmp_0(v41, v39, v40 + 18) )
        {
LABEL_67:
          v15 = v77;
          continue;
        }
      }
      if ( a10 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a3 + 4) )
          goto LABEL_67;
      }
      else if ( v35 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i) )
      {
        v35 = 1;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
        WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, v43, v42, v67, v68, v69);
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v75, i);
      v44 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *((_QWORD *)a3 + 4));
      v45 = v75;
      if ( v75 && v44 && v35 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
        v45 = v75;
      }
      v75 = 0LL;
      v15 = v77;
      *v77 = (struct ISaDeviceProxy *)v45;
    }
  }
  if ( *v15 )
    goto LABEL_139;
  v71 = 0LL;
  v46 = 0;
  v47 = 0;
  v48 = (_QWORD *)v79;
  while ( 2 )
  {
    if ( v48 == v37 )
      goto LABEL_141;
    v49 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)*v48 + 40LL))(*v48, v84);
    if ( *v49 != *((_QWORD *)a3 + 6)
      || v49[1] != *((_QWORD *)a3 + 7)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v48 + 80LL))(*v48) != *((_DWORD *)a3 + 2)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v48 + 88LL))(*v48) )
    {
LABEL_92:
      ++v48;
      v37 = (_QWORD *)*((_QWORD *)&v79 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v48 + 152LL))(*v48) )
  {
    v47 = 1;
    goto LABEL_92;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v48 + 120LL))(*v48) )
  {
    v46 = 1;
    goto LABEL_92;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v50 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v48 + 32LL))(*v48);
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, v51, v50, v67, v68, v69);
  }
  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v71, v48);
  v52 = v71;
  if ( !v71 )
  {
LABEL_141:
    if ( a11 || a10 )
    {
      if ( v46 )
      {
        v19 = -2004287448;
        v66 = 1963LL;
LABEL_148:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v66,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v19,
          v67);
        goto LABEL_149;
      }
      if ( v47 )
      {
        v19 = -2004287447;
        v66 = 1964LL;
        goto LABEL_148;
      }
    }
    v19 = -2005139360;
    v66 = 1966LL;
    goto LABEL_148;
  }
  v74 = 0LL;
  v53 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v71 + 104LL))(v71, &v74);
  v19 = v53;
  if ( v53 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v53,
      v67);
    goto LABEL_133;
  }
  v81 = 0LL;
  v82 = 0LL;
  v55 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int128 *))(*(_QWORD *)pv + 104LL))(pv, v52, &v81);
  v19 = v55;
  if ( v55 < 0 )
  {
    v56 = (unsigned int)v55;
    v57 = 1976LL;
LABEL_132:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v57,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v56,
      v67);
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Tidy((__int64)&v81);
LABEL_133:
    if ( v74 )
      SaDeviceParams::`scalar deleting destructor'(v74, v54);
    v74 = 0LL;
LABEL_149:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
    goto LABEL_150;
  }
  v72 = v52;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v72);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e0911004c521f58945d6ca6dcea55343___(
    v84,
    v81,
    *((_QWORD *)&v81 + 1),
    &v72);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(v84);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_77202523448037bdbe1ee95759e6b961_Traceguids);
  }
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v79);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
  v58 = v77;
  v67 = a5;
  v59 = v78;
  v60 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
          g_DeviceGraphManager,
          v78,
          a3,
          v73[0]);
  v19 = v60;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_77202523448037bdbe1ee95759e6b961_Traceguids, v60);
  }
  if ( v19 < 0 )
  {
    v72 = 0LL;
    v67 = AUDCLNT_SHAREMODE_SHARED;
    v61 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v59,
            v74,
            2LL);
    v62 = v61;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_77202523448037bdbe1ee95759e6b961_Traceguids, v61);
    }
    if ( v62 >= 0 )
    {
      v76 = 0LL;
      v67 = AUDCLNT_SHAREMODE_SHARED;
      v63 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              v59,
              v74,
              2LL);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
          (unsigned int)v63);
      }
      if ( v63 >= 0 )
      {
        v64 = lambda_b8e6edafc84f4ea4982f0b5c293be3ab_::_lambda_b8e6edafc84f4ea4982f0b5c293be3ab_(&v78, &v76);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b8e6edafc84f4ea4982f0b5c293be3ab___(
          v84,
          v81,
          *((_QWORD *)&v81 + 1),
          v64);
        lambda_b8e6edafc84f4ea4982f0b5c293be3ab_::__lambda_b8e6edafc84f4ea4982f0b5c293be3ab_(v84);
      }
      if ( v76 )
        (*(void (__fastcall **)(struct SaDeviceResourceParams *))(*(_QWORD *)v76 + 16LL))(v76);
    }
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  }
  else
  {
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_37ad8f8d89b1555aa0166930e858cadf___(
      &v78,
      v81,
      *((_QWORD *)&v81 + 1),
      v58);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_77202523448037bdbe1ee95759e6b961_Traceguids);
    }
  }
  if ( v19 < 0 )
  {
    v56 = (unsigned int)v19;
    v57 = 2054LL;
    goto LABEL_132;
  }
  std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Tidy((__int64)&v81);
  if ( v74 )
    SaDeviceParams::`scalar deleting destructor'(v74, v65);
  v74 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
LABEL_139:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(&v79);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&pv);
  return 0LL;
}

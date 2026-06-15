/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180043994
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F5EF4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003890 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180063970 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006C957 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800EDBCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___ @ 0x1800F4A08 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_123c1579370fdd5089886a20c78d5805___ @ 0x1800F4AA0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4AA0.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd50edfaa47939fe8e94966dfed8d892___ @ 0x1800F4CB0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4CB0.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e04f4d5da8e4b2898f3ec77e31f85733___ @ 0x1800F4EA0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4EA0.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8E18 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800F9D30 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_i @ 0x1800F9FDC (WPP_SF_i.c)
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
  int v17; // r8d
  enum _AUDCLNT_SHAREMODE v18; // edi
  unsigned int v19; // eax
  signed int SaDeviceForPackagedApp; // ebx
  CAudioResourceManager *v21; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rsi
  bool v32; // r15
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  char v38; // r15
  _QWORD *i; // rbx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  unsigned __int16 *v43; // rsi
  __int64 v44; // rdi
  const void *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  struct ISaDeviceProxy *v49; // rcx
  char v50; // si
  char v51; // di
  _QWORD *v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rbx
  int v58; // eax
  unsigned int v59; // edx
  int v60; // eax
  unsigned __int64 v61; // r9
  __int64 v62; // rdx
  struct ISaDeviceProxy **v63; // rbx
  struct SaDeviceResourceParams *v64; // r15
  __int64 v65; // rsi
  unsigned int v66; // eax
  CAudioSessionManager **v67; // rdx
  unsigned int v68; // eax
  int v69; // ebx
  int v70; // ebx
  __int64 v71; // rbx
  __int64 v72; // rsi
  __int64 v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rdi
  void *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // rsi
  void *v81; // rcx
  void *pv; // [rsp+48h] [rbp-99h] BYREF
  _QWORD pv_8[3]; // [rsp+50h] [rbp-91h] BYREF
  __int64 v84; // [rsp+68h] [rbp-79h] BYREF
  struct ISaDeviceProxy **v85; // [rsp+70h] [rbp-71h] BYREF
  __int64 v86; // [rsp+78h] [rbp-69h] BYREF
  unsigned int v87; // [rsp+80h] [rbp-61h]
  SaDeviceParams *v88; // [rsp+88h] [rbp-59h] BYREF
  struct ISaDeviceProxy *v89; // [rsp+90h] [rbp-51h] BYREF
  struct SaDeviceResourceParams *v90; // [rsp+98h] [rbp-49h] BYREF
  __int128 v91; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-31h]
  _QWORD v93[2]; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v94; // [rsp+C8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+3Fh]

  v93[1] = -2LL;
  v87 = a4;
  v93[0] = a2;
  v14 = a6;
  v90 = a6;
  v15 = a12;
  v85 = a12;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, *(_QWORD *)a3);
  }
  v94 = *((_OWORD *)a3 + 3);
  v16 = 0;
  v17 = *((_DWORD *)a2 + 4 * *((int *)a3 + 2) + 392);
  if ( v17 > 0 )
  {
    v23 = *((_QWORD *)a2 + 2 * *((int *)a3 + 2) + 195);
    while ( 1 )
    {
      v24 = *(_QWORD *)(v23 + 16LL * v16) - v94;
      if ( !v24 )
        v24 = *(_QWORD *)(v23 + 16LL * v16 + 8) - *((_QWORD *)&v94 + 1);
      if ( !v24 )
        break;
      if ( ++v16 >= v17 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v16 = -1;
  }
  if ( v16 == -1 )
    goto LABEL_6;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v25 = (*(__int64 (__fastcall **)(_QWORD, void **))(**((_QWORD **)a2 + 2) + 40LL))(*((_QWORD *)a2 + 2), &pv);
  v26 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x721,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v25);
LABEL_33:
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v26;
  }
  v84 = 0LL;
  v27 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, void *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          pv,
          &v84);
  v26 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x724,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v27);
LABEL_31:
    if ( v84 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
    goto LABEL_33;
  }
  memset(pv_8, 0, sizeof(pv_8));
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v84 + 80LL))(v84, pv_8);
  v26 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x726,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v28);
    v29 = pv_8[0];
    if ( pv_8[0] )
    {
      v30 = pv_8[1];
      if ( pv_8[0] != pv_8[1] )
      {
        do
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v29);
          v29 += 8LL;
        }
        while ( v29 != v30 );
        v29 = pv_8[0];
      }
      std::_Deallocate<16,0>(v29, (pv_8[2] - v29) & 0xFFFFFFFFFFFFFFF8uLL);
      memset(pv_8, 0, sizeof(pv_8));
    }
    goto LABEL_31;
  }
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___(
    &v86,
    pv_8[0],
    pv_8[1],
    a3);
  v31 = pv_8[1];
  v32 = v86 == pv_8[1];
  SaDeviceForPackagedApp = v86 != pv_8[1] ? 0x887C0043 : 0;
  v33 = pv_8[0];
  if ( pv_8[0] )
  {
    if ( pv_8[0] != pv_8[1] )
    {
      do
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v33);
        v33 += 8LL;
      }
      while ( v33 != v31 );
      v33 = pv_8[0];
    }
    std::_Deallocate<16,0>(v33, (pv_8[2] - v33) & 0xFFFFFFFFFFFFFFF8uLL);
    memset(pv_8, 0, sizeof(pv_8));
  }
  if ( v84 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
  v21 = (CAudioResourceManager *)pv;
  if ( pv )
    CoTaskMemFree(pv);
  v15 = v85;
  v34 = !v32;
  v14 = v90;
  if ( !v34 )
  {
LABEL_6:
    v18 = a5;
    v19 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a3,
            v87,
            a5,
            v14,
            v15);
    SaDeviceForPackagedApp = v19;
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, v19);
    }
    goto LABEL_8;
  }
  v18 = a5;
LABEL_8:
  if ( SaDeviceForPackagedApp == -2005139364 )
  {
    if ( a8 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v21,
                                 a2,
                                 a3,
                                 v87,
                                 v18,
                                 v14,
                                 a9,
                                 v15);
      if ( SaDeviceForPackagedApp >= 0 )
        return 0LL;
      v35 = 1860LL;
      goto LABEL_53;
    }
LABEL_52:
    v35 = 2099LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)SaDeviceForPackagedApp);
    return (unsigned int)SaDeviceForPackagedApp;
  }
  if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
  {
    if ( SaDeviceForPackagedApp >= 0 )
      return 0LL;
    goto LABEL_52;
  }
  pv = 0LL;
  v36 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, void **))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          *(_QWORD *)a3,
          &pv);
  v26 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x752,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v36);
LABEL_179:
    v81 = pv;
    if ( pv )
    {
      pv = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v81 + 16LL))(v81);
    }
    return (unsigned int)v26;
  }
  v91 = 0LL;
  v92 = 0LL;
  v37 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)pv + 80LL))(pv, &v91);
  v26 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x755,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v37);
LABEL_174:
    v79 = v91;
    if ( (_QWORD)v91 )
    {
      v80 = *((_QWORD *)&v91 + 1);
      if ( (_QWORD)v91 != *((_QWORD *)&v91 + 1) )
      {
        do
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v79);
          v79 += 8LL;
        }
        while ( v79 != v80 );
        v79 = v91;
      }
      std::_Deallocate<16,0>(v79, (v92 - v79) & 0xFFFFFFFFFFFFFFF8uLL);
      v91 = 0LL;
      v92 = 0LL;
    }
    goto LABEL_179;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids,
      (__int64)(*((_QWORD *)&v91 + 1) - v91) >> 3);
  }
  v89 = 0LL;
  v38 = 0;
  for ( i = (_QWORD *)v91; ; ++i )
  {
    v40 = (_QWORD *)*((_QWORD *)&v91 + 1);
    if ( i == *((_QWORD **)&v91 + 1) )
      break;
    v41 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*i + 40LL))(*i, &v94);
    v42 = *v41 - *((_QWORD *)a3 + 6);
    if ( *v41 == *((_QWORD *)a3 + 6) )
      v42 = v41[1] - *((_QWORD *)a3 + 7);
    if ( !v42
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *((_DWORD *)a3 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
    {
      if ( a11 )
      {
        v43 = (unsigned __int16 *)*((_QWORD *)a3 + 2);
        v44 = v43[8];
        v45 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
        if ( memcmp_0(v45, v43, v44 + 18) )
        {
LABEL_73:
          v15 = v85;
          continue;
        }
      }
      if ( a10 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a3 + 4) )
          goto LABEL_73;
      }
      else if ( v38 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i) )
      {
        v38 = 1;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v46 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
        WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, v47, v46);
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v89, i);
      v48 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *((_QWORD *)a3 + 4));
      v49 = v89;
      if ( v89 && v48 && v38 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v89);
        v49 = v89;
      }
      v89 = 0LL;
      v15 = v85;
      *v85 = v49;
    }
  }
  if ( *v15 )
    goto LABEL_158;
  v84 = 0LL;
  v50 = 0;
  v51 = 0;
  v52 = (_QWORD *)v91;
  while ( 2 )
  {
    if ( v52 == v40 )
      goto LABEL_165;
    v53 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v52 + 40LL))(*v52, &v94);
    v54 = *v53 - *((_QWORD *)a3 + 6);
    if ( *v53 == *((_QWORD *)a3 + 6) )
      v54 = v53[1] - *((_QWORD *)a3 + 7);
    if ( v54
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 80LL))(*v52) != *((_DWORD *)a3 + 2)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 88LL))(*v52) )
    {
LABEL_99:
      ++v52;
      v40 = (_QWORD *)*((_QWORD *)&v91 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 152LL))(*v52) )
  {
    v51 = 1;
    goto LABEL_99;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 120LL))(*v52) )
  {
    v50 = 1;
    goto LABEL_99;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v55 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 32LL))(*v52);
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, v56, v55);
  }
  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v84, v52);
  v57 = v84;
  if ( !v84 )
  {
LABEL_165:
    if ( a11 || a10 )
    {
      if ( v50 )
      {
        v26 = -2004287448;
        v78 = 2003LL;
LABEL_172:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v78,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_173;
      }
      if ( v51 )
      {
        v26 = -2004287447;
        v78 = 2004LL;
        goto LABEL_172;
      }
    }
    v26 = -2005139360;
    v78 = 2006LL;
    goto LABEL_172;
  }
  v88 = 0LL;
  v58 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v84 + 104LL))(v84, &v88);
  v26 = v58;
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DC,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v58);
    goto LABEL_147;
  }
  memset(pv_8, 0, sizeof(pv_8));
  v60 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD *))(*(_QWORD *)pv + 104LL))(pv, v57, pv_8);
  v26 = v60;
  if ( v60 < 0 )
  {
    v61 = (unsigned int)v60;
    v62 = 2016LL;
    goto LABEL_142;
  }
  v86 = v57;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v86);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e04f4d5da8e4b2898f3ec77e31f85733___(
    &v94,
    pv_8[0],
    pv_8[1],
    &v86);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v94);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids);
  }
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v91);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v84);
  v63 = v85;
  v64 = v90;
  v65 = v93[0];
  v66 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
          g_DeviceGraphManager,
          v93[0],
          a3,
          v87,
          a5,
          v90,
          v85);
  v26 = v66;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, v66);
  }
  if ( v26 < 0 )
  {
    v85 = 0LL;
    v68 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, SaDeviceParams *, __int64, _DWORD, struct SaDeviceResourceParams *, struct ISaDeviceProxy ***))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v65,
            v88,
            2LL,
            0,
            v64,
            &v85);
    v69 = v68;
    v67 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, v68);
    }
    if ( v69 >= 0 )
    {
      v90 = 0LL;
      v70 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, SaDeviceParams *, __int64, _DWORD, struct SaDeviceResourceParams *, struct SaDeviceResourceParams **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              v65,
              v88,
              2LL,
              0,
              v64,
              &v90);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids,
          (unsigned int)v70);
      }
      if ( v70 >= 0 )
      {
        v86 = (__int64)v90;
        if ( v90 )
          (*(void (__fastcall **)(struct SaDeviceResourceParams *))(*(_QWORD *)v90 + 8LL))(v90);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd50edfaa47939fe8e94966dfed8d892___(
          v93,
          pv_8[0],
          pv_8[1],
          &v86);
        if ( v93[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v93[0] + 16LL))(v93[0]);
      }
      if ( v90 )
        (*(void (__fastcall **)(struct SaDeviceResourceParams *))(*(_QWORD *)v90 + 16LL))(v90);
    }
    if ( v85 )
      (*((void (__fastcall **)(struct ISaDeviceProxy **))*v85 + 2))(v85);
  }
  else
  {
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_123c1579370fdd5089886a20c78d5805___(
      v93,
      pv_8[0],
      pv_8[1],
      v63);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids);
    }
  }
  if ( v26 < 0 )
  {
    v61 = (unsigned int)v26;
    v62 = 2094LL;
LABEL_142:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v62,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v61);
    v71 = pv_8[0];
    if ( pv_8[0] )
    {
      v72 = pv_8[1];
      if ( pv_8[0] != pv_8[1] )
      {
        do
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v71);
          v71 += 8LL;
        }
        while ( v71 != v72 );
        v71 = pv_8[0];
      }
      std::_Deallocate<16,0>(v71, (pv_8[2] - v71) & 0xFFFFFFFFFFFFFFF8uLL);
      memset(pv_8, 0, sizeof(pv_8));
    }
LABEL_147:
    if ( v88 )
      SaDeviceParams::`scalar deleting destructor'(v88, v59);
    v88 = 0LL;
LABEL_173:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v84);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v89);
    goto LABEL_174;
  }
  v73 = pv_8[0];
  if ( pv_8[0] )
  {
    v74 = pv_8[1];
    if ( pv_8[0] != pv_8[1] )
    {
      do
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v73);
        v73 += 8LL;
      }
      while ( v73 != v74 );
      v73 = pv_8[0];
    }
    std::_Deallocate<16,0>(v73, (pv_8[2] - v73) & 0xFFFFFFFFFFFFFFF8uLL);
    memset(pv_8, 0, sizeof(pv_8));
  }
  if ( v88 )
    SaDeviceParams::`scalar deleting destructor'(v88, (unsigned int)v67);
  v88 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v84);
LABEL_158:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v89);
  v75 = v91;
  if ( (_QWORD)v91 )
  {
    v76 = *((_QWORD *)&v91 + 1);
    if ( (_QWORD)v91 != *((_QWORD *)&v91 + 1) )
    {
      do
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v75);
        v75 += 8LL;
      }
      while ( v75 != v76 );
      v75 = v91;
    }
    std::_Deallocate<16,0>(v75, (v92 - v75) & 0xFFFFFFFFFFFFFFF8uLL);
    v91 = 0LL;
    v92 = 0LL;
  }
  v77 = pv;
  if ( pv )
  {
    pv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v77 + 16LL))(v77);
  }
  return 0LL;
}

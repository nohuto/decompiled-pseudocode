/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180023800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180009480 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000DB74 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180010080 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800183D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023450 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x180025D50 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memmove_s @ 0x180044954 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180044DE4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 *     swprintf_s @ 0x180064E5C (swprintf_s.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180066DE0 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1800C50DC (WPP_SF_Sd.c)
 *     WPP_SF_dd @ 0x1800C889C (WPP_SF_dd.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800E54EC (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800E55B8 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     WPP_SF_DDd @ 0x1800EB790 (WPP_SF_DDd.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x180102998 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
 *     ?AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z @ 0x180102DF8 (-AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x18011B5B4 (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5,
        struct tWAVEFORMATEX *a6,
        const struct _GUID *a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        struct IProcessSubmixProxy *a10)
{
  struct IMMDevice *v13; // rbx
  int v14; // r14d
  CAudioSessionManager *v15; // rcx
  signed int v16; // edi
  BYTE *v17; // rax
  const void *v18; // rsi
  char **v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r15
  char *v23; // rcx
  bool v24; // cc
  __int64 v25; // r14
  char **v26; // r14
  __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r15
  char *v30; // rcx
  __int64 v31; // rsi
  struct IAudioProcess *v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rdx
  HRESULT v35; // eax
  int v36; // edi
  LSTATUS v37; // eax
  unsigned int v38; // eax
  void *v39; // rax
  void *v40; // rcx
  unsigned __int16 *v41; // rdi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned int v47; // edi
  void (__fastcall ***v48)(_QWORD, GUID *, struct _GUID *); // r9
  __int64 v49; // rcx
  int v50; // r15d
  int v51; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v52; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v53; // ecx
  int v54; // eax
  void *v55; // rcx
  int v56; // edi
  void *v57; // r14
  __int64 v58; // rdi
  void *v59; // rax
  void *v60; // r15
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 *i; // rcx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 *v66; // rax
  int v67; // r8d
  __int64 v68; // rax
  void *v69; // rax
  struct CEndpointCharacteristics *v70; // rsi
  AudioJournal *v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rdx
  int StreamInfo; // eax
  BYTE *v75; // rsi
  const WCHAR *v76; // r15
  DWORD v77; // r12d
  LSTATUS Key; // eax
  __int64 v79; // rdx
  LSTATUS v80; // eax
  __int64 v81; // rdx
  BYTE *lpData; // [rsp+70h] [rbp-308h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-300h] BYREF
  int v85; // [rsp+80h] [rbp-2F8h] BYREF
  struct CEndpointCharacteristics *v86; // [rsp+88h] [rbp-2F0h] BYREF
  HKEY hKey; // [rsp+90h] [rbp-2E8h] BYREF
  void *Src; // [rsp+98h] [rbp-2E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A0h] [rbp-2D8h] BYREF
  char v90; // [rsp+A8h] [rbp-2D0h]
  IID rclsid; // [rsp+B0h] [rbp-2C8h] BYREF
  struct _GUID v92; // [rsp+C0h] [rbp-2B8h] BYREF
  struct IAudioProcess *v93; // [rsp+D0h] [rbp-2A8h]
  struct IMMDevice *v94; // [rsp+D8h] [rbp-2A0h]
  LPCRITICAL_SECTION v95; // [rsp+E0h] [rbp-298h] BYREF
  char v96; // [rsp+E8h] [rbp-290h]
  PROPVARIANT pvar[5]; // [rsp+F8h] [rbp-280h] BYREF
  wchar_t Buffer[264]; // [rsp+120h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+0h]

  pvar[3] = (PROPVARIANT)-2LL;
  v85 = a4;
  v93 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)this;
  Src = a6;
  *(_QWORD *)&v92.Data1 = a7;
  *(_QWORD *)&rclsid.Data1 = a8;
  lpData = (BYTE *)a9;
  v86 = 0LL;
  v13 = 0LL;
  v94 = 0LL;
  *a9 = 0LL;
  v95 = (LPCRITICAL_SECTION)((char *)this + 224);
  v96 = 0;
  ATL::CCritSecLock::Lock(&v95);
  if ( *((_DWORD *)this + 46) )
  {
    v14 = -2004287486;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_160;
    }
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, 2290679810LL);
LABEL_159:
    v15 = WPP_GLOBAL_Control;
LABEL_160:
    v16 = -2147024809;
    goto LABEL_161;
  }
  if ( a4 > 1 )
  {
    v16 = -2147024809;
    v14 = -2147024809;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
        a4,
        -2147024809);
      v15 = WPP_GLOBAL_Control;
    }
    goto LABEL_161;
  }
  v14 = (*(__int64 (__fastcall **)(PVOID, char *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a3,
          0LL,
          0LL,
          &v86);
  if ( v14 < 0 )
    goto LABEL_159;
  pv = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v86 + 2) + 40LL))(*((_QWORD *)v86 + 2), &pv);
  if ( v14 < 0 )
  {
    CoTaskMemFree(pv);
    v16 = -2147024809;
    v15 = WPP_GLOBAL_Control;
    v17 = lpData;
LABEL_162:
    v69 = *(void **)v17;
    if ( v69 )
    {
      operator delete(v69);
      *(_QWORD *)lpData = 0LL;
      v15 = WPP_GLOBAL_Control;
    }
    if ( v15 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v15 + 7) & 0x100) != 0
      && *((_BYTE *)v15 + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)v15 + 2),
        32,
        (unsigned int)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
        *((_QWORD *)this + 27),
        v14);
    }
    goto LABEL_168;
  }
  v18 = pv;
  v19 = (char **)((char *)this + 216);
  if ( !pv )
    goto LABEL_30;
  v20 = -1LL;
  do
    ++v20;
  while ( *((_WORD *)pv + v20) );
  if ( !(_DWORD)v20 )
  {
LABEL_30:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 216);
    goto LABEL_31;
  }
  v21 = *((unsigned int *)*v19 - 4);
  v22 = ((_BYTE *)pv - *v19) >> 1;
  if ( ((1 - *((_DWORD *)*v19 - 2)) | (*((_DWORD *)*v19 - 3) - (int)v20)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 27, v20);
    v19 = (char **)((char *)this + 216);
  }
  v23 = *v19;
  v24 = v22 <= v21;
  v25 = 2LL * (int)v20;
  if ( v24 )
  {
    memmove_s(v23, 2LL * (int)v20, &v23[2 * v22], 2LL * (int)v20);
  }
  else
  {
    if ( !v25 )
      goto LABEL_27;
    if ( v23 )
    {
      memcpy_0(v23, v18, 2LL * (int)v20);
    }
    else
    {
      *(_DWORD *)_o__errno(0LL) = 22;
      invalid_parameter_noinfo();
    }
  }
  v19 = (char **)((char *)this + 216);
LABEL_27:
  if ( (int)v20 < 0 || (int)v20 > *((_DWORD *)*v19 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*v19 - 4) = v20;
  *(_WORD *)&(*v19)[v25] = 0;
LABEL_31:
  v26 = (char **)((char *)this + 208);
  if ( !a3 )
    goto LABEL_46;
  v27 = -1LL;
  do
    ++v27;
  while ( *(_WORD *)&a3[2 * v27] );
  if ( (_DWORD)v27 )
  {
    v28 = *((unsigned int *)*v26 - 4);
    v29 = (a3 - *v26) >> 1;
    if ( ((1 - *((_DWORD *)*v26 - 2)) | (*((_DWORD *)*v26 - 3) - (int)v27)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 26, v27);
    v30 = *v26;
    v24 = v29 <= v28;
    v31 = 2LL * (int)v27;
    if ( v24 )
    {
      memmove_s(v30, 2LL * (int)v27, &v30[2 * v29], 2LL * (int)v27);
    }
    else if ( v31 )
    {
      if ( v30 )
      {
        memcpy_0(v30, a3, 2LL * (int)v27);
      }
      else
      {
        *(_DWORD *)_o__errno(0LL) = 22;
        invalid_parameter_noinfo();
      }
    }
    if ( (int)v27 < 0 || (int)v27 > *((_DWORD *)*v26 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)*v26 - 4) = v27;
    *(_WORD *)&(*v26)[v31] = 0;
  }
  else
  {
LABEL_46:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 208);
  }
  CoTaskMemFree(pv);
  v32 = v93;
  *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v93 + 40LL))(v93);
  v33 = *(_QWORD *)&rclsid.Data1;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(_QWORD *)&rclsid.Data1 + 48LL);
  if ( *(_DWORD *)(*(_QWORD *)&rclsid.Data1 + 48LL) >= 0x15u )
  {
    v34 = 1321LL;
LABEL_49:
    v16 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    v14 = -2147024809;
    v15 = WPP_GLOBAL_Control;
LABEL_161:
    v17 = lpData;
    goto LABEL_162;
  }
  rclsid = *(IID *)(*(_QWORD *)&rclsid.Data1 + 16LL);
  if ( *(_QWORD *)&rclsid.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || *(_QWORD *)rclsid.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v35 = StringFromCLSID(&rclsid, (LPOLESTR *)&pv);
    v36 = v35;
    if ( v35 >= 0 )
    {
      if ( swprintf_s(
             Buffer,
             0x104uLL,
             L"%s\\%s",
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
             pv) == -1 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51D,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007007ALL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
        v34 = 1323LL;
        goto LABEL_49;
      }
      hKey = 0LL;
      v37 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, &hKey);
      v36 = v37;
      if ( v37 >= 0 )
      {
        if ( hKey )
          RegCloseKey(hKey);
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_67;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x520,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v37);
      if ( hKey )
        RegCloseKey(hKey);
      if ( pv )
        CoTaskMemFree(pv);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v35);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    }
    if ( v36 < 0 )
    {
      v34 = 1323LL;
      goto LABEL_49;
    }
  }
LABEL_67:
  if ( !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(v33 + 52)) )
  {
    v34 = 1325LL;
    goto LABEL_49;
  }
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)v33;
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)(v33 + 16);
  *(_OWORD *)((char *)this + 312) = *(_OWORD *)(v33 + 32);
  *(_OWORD *)((char *)this + 328) = *(_OWORD *)(v33 + 48);
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)(v33 + 64);
  *(_OWORD *)((char *)this + 360) = *(_OWORD *)(v33 + 80);
  *(_OWORD *)((char *)this + 376) = *(_OWORD *)(v33 + 96);
  *(_OWORD *)((char *)this + 392) = *(_OWORD *)(v33 + 112);
  *(_OWORD *)((char *)this + 408) = *(_OWORD *)(v33 + 128);
  *(_OWORD *)((char *)this + 424) = *(_OWORD *)(v33 + 144);
  v38 = *((_DWORD *)this + 98);
  if ( v38 )
  {
    v39 = operator new[](v38, (const struct std::nothrow_t *)&std::nothrow);
    v40 = (void *)*((_QWORD *)this + 60);
    *((_QWORD *)this + 60) = v39;
    if ( v40 )
    {
      operator delete(v40, (const struct std::nothrow_t *)1);
      v39 = (void *)*((_QWORD *)this + 60);
    }
    if ( !v39 )
    {
      v14 = -2147024882;
LABEL_74:
      v16 = -2147024809;
      v15 = WPP_GLOBAL_Control;
      goto LABEL_161;
    }
    memcpy_0(v39, *((const void **)this + 50), *((unsigned int *)this + 98));
    *((_QWORD *)this + 50) = *((_QWORD *)this + 60);
  }
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                                + 88LL))(
          g_PolicyManager,
          v32,
          *((_QWORD *)this + 27));
  if ( v14 < 0 )
    goto LABEL_74;
  v41 = (unsigned __int16 *)Src;
  v42 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)Src);
  v14 = v42;
  if ( v42 < 0 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      v43 = 28LL;
      v44 = (unsigned int)v42;
LABEL_82:
      WPP_SF_d(*((_QWORD *)v15 + 2), v43, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, v44);
      v16 = -2147024809;
      v15 = WPP_GLOBAL_Control;
      goto LABEL_161;
    }
    goto LABEL_83;
  }
  v45 = v41[1];
  if ( (unsigned __int16)v45 > 2u )
  {
    v46 = *v41;
    if ( (((_WORD)v46 - 1) & 0xFFFD) == 0 )
    {
      v16 = -2147024809;
      v14 = -2147024809;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 2), v45, v46, (unsigned __int16)v46, (unsigned __int16)v45);
        v15 = WPP_GLOBAL_Control;
      }
      goto LABEL_161;
    }
  }
  v47 = a5;
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v86 + 56LL))(v86) )
  {
    LODWORD(hKey) = 1;
  }
  else if ( (a5 & 0x20000) != 0 )
  {
    LODWORD(hKey) = 2;
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v32 + 496LL))(v32)
      || CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams(v86) )
    {
      v47 = a5 | 0x80000000;
    }
  }
  else
  {
    LODWORD(hKey) = 0;
  }
  v14 = CVADServer::InitializePolicy(this, v32, *(const struct _GUID **)&v92.Data1, v47, (unsigned __int16 **)lpData);
  if ( v14 < 0 )
    goto LABEL_74;
  v13 = (struct IMMDevice *)*((_QWORD *)v86 + 2);
  v94 = v13;
  ((void (__fastcall *)(struct IMMDevice *))v13->lpVtbl->AddRef)(v13);
  LODWORD(pv) = 0;
  v48 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID *))*((_QWORD *)v86 + 2);
  v49 = 0LL;
  *(_QWORD *)&v92.Data1 = 0LL;
  if ( v48 )
  {
    (**v48)(v48, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, &v92);
    v49 = *(_QWORD *)&v92.Data1;
  }
  if ( v49 )
  {
    (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v49 + 88LL))(v49, &pv);
    v49 = *(_QWORD *)&v92.Data1;
  }
  v50 = (int)pv;
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  v51 = 1;
  memset(pvar, 0, 24);
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v86 + 5) + 40LL))(
         *((_QWORD *)v86 + 5),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v51 = 0;
  }
  PropVariantClear(pvar);
  if ( (v47 & 0x400000) != 0 )
  {
    v53 = eKeywordDetectorConnector;
    goto LABEL_123;
  }
  if ( a10 )
  {
    v54 = v47 & 0x20000;
    if ( (v47 & 0x20000) != 0 )
    {
      v53 = eHostProcessConnector;
      goto LABEL_123;
    }
  }
  else
  {
    v54 = v47 & 0x20000;
  }
  if ( v51 && v54 )
  {
    v53 = eLoopbackConnector;
    goto LABEL_123;
  }
  if ( v85 == 1 )
  {
    v55 = 0LL;
    *(_QWORD *)&rclsid.Data1 = 0LL;
    if ( v50 )
    {
      if ( !IsFormatSupportedByHwAudioEngine(
              v13,
              v52,
              (const struct tWAVEFORMATEX *)Src,
              (struct tWAVEFORMATEX **)&rclsid) )
      {
        CoTaskMemFree(*(LPVOID *)&rclsid.Data1);
        v53 = eOffloadConnector;
        goto LABEL_123;
      }
      v55 = *(void **)&rclsid.Data1;
    }
    CoTaskMemFree(v55);
  }
  v53 = ((unsigned __int8)~(_BYTE)v47 >> 1) & 1;
LABEL_123:
  *((_DWORD *)this + 136) = v53;
  v56 = v85;
  v14 = DeriveAudioProcessingModeConfiguration(
          *((_DWORD *)this + 82),
          *((_DWORD *)this + 84),
          *((_DWORD *)this + 102),
          v86,
          (int)hKey,
          v85,
          v53,
          0,
          1,
          &v92,
          &rclsid,
          (struct _GUID *)((char *)this + 440),
          0LL);
  if ( v14 < 0 )
    goto LABEL_74;
  if ( v56 == 1
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)this + 27))
     || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v93 + 144LL))(
           v93,
           LODWORD(lpCriticalSection->DebugInfo),
           1LL)) )
  {
    v14 = -2004287474;
    v16 = -2147024809;
    v15 = WPP_GLOBAL_Control;
    goto LABEL_161;
  }
  v57 = Src;
  v58 = *((unsigned __int16 *)Src + 8);
  v59 = CoTaskMemAlloc(v58 + 18);
  v60 = v59;
  if ( v59 )
  {
    memcpy_0(v59, v57, v58 + 18);
    v14 = 0;
  }
  else
  {
    v14 = -2147024882;
  }
  *((_QWORD *)this + 22) = v60;
  if ( v14 < 0 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      v43 = 30LL;
      v44 = (unsigned int)v14;
      goto LABEL_82;
    }
LABEL_83:
    v16 = -2147024809;
    goto LABEL_161;
  }
  *((_DWORD *)this + 66) = v85;
  v61 = *((_QWORD *)this + 59);
  *((_QWORD *)this + 59) = a10;
  if ( a10 )
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a10 + 8LL))(a10);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  *((_DWORD *)this + 46) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  v90 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v62 = g_VADServerList;
  i = (__int64 *)qword_1801B7820;
  if ( !qword_1801B7820 )
  {
    if ( dword_1801B7828 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_1801B7828 < 0x18 )
        goto LABEL_206;
      v64 = 24LL * (unsigned int)dword_1801B7828;
    }
    else
    {
      v64 = 0LL;
    }
    if ( (unsigned __int64)~v64 >= 8 )
    {
      v65 = malloc(v64 + 8);
      if ( v65 )
      {
        *v65 = qword_1801B7818;
        qword_1801B7818 = (__int64)v65;
        v66 = &v65[3 * (unsigned int)(dword_1801B7828 - 1) + 1];
        v67 = dword_1801B7828 - 1;
        for ( i = (__int64 *)qword_1801B7820; v67 >= 0; --v67 )
        {
          *v66 = (__int64)i;
          i = v66;
          qword_1801B7820 = (__int64)v66;
          v66 -= 3;
        }
        goto LABEL_153;
      }
    }
LABEL_206:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_153:
  v68 = *i;
  i[2] = (__int64)this;
  qword_1801B7820 = v68;
  i[1] = 0LL;
  *i = v62;
  ++qword_1801B7810;
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = i;
  else
    qword_1801B7808 = (__int64)i;
  g_VADServerList = (__int64)i;
  if ( v90 )
    LeaveCriticalSection(lpCriticalSection);
  v16 = -2147024809;
LABEL_168:
  v70 = v86;
  EnterCriticalSection(&CriticalSection);
  Src = &CriticalSection;
  if ( !g_AudioJournal )
  {
    v72 = 2147549183LL;
    v73 = 238LL;
LABEL_194:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v73,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)v72);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Src);
    goto LABEL_195;
  }
  StreamInfo = AudioJournal::FindStreamInfo(v71, v70, (struct AudioJournal::StreamInfo **)&lpData, &v85);
  if ( StreamInfo < 0 )
  {
    v72 = (unsigned int)StreamInfo;
    v73 = 240LL;
    goto LABEL_194;
  }
  ++*(_DWORD *)&lpData[200 * v85 + 148];
  if ( v14 < 0 )
  {
    ++*(_DWORD *)&lpData[200 * v85 + 152];
    AudioJournal::AddError(
      (AudioJournal *)(200LL * v85),
      v14,
      (struct AudioJournal::ErrorInfo *)&lpData[200 * v85 + 176]);
  }
  v75 = lpData;
  if ( lpData == (BYTE *)&unk_1801B8D98 )
  {
    v76 = L"Render";
    v77 = 600;
  }
  else if ( lpData == (BYTE *)&unk_1801B8FF0 )
  {
    v76 = L"Capture";
    v77 = 400;
  }
  else
  {
    if ( lpData != (BYTE *)&unk_1801B9180 )
    {
      v81 = 493LL;
      goto LABEL_193;
    }
    v76 = L"UnknownStream";
    v77 = 200;
  }
  pv = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&pv;
  v90 = 1;
  Key = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_1801B9248, 0, 0LL, 0, 2u, 0LL, (PHKEY)&pv, 0LL);
  v16 = Key;
  if ( Key > 0 )
    v16 = (unsigned __int16)Key | 0x80070000;
  if ( v16 < 0 )
  {
    v79 = 452LL;
LABEL_188:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v79,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v16);
    wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(&lpCriticalSection);
    v81 = 496LL;
LABEL_193:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v81,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v16);
    v72 = (unsigned int)v16;
    v73 = 249LL;
    goto LABEL_194;
  }
  v80 = RegSetValueExW((HKEY)pv, v76, 0, 3u, v75, v77);
  v16 = v80;
  if ( v80 > 0 )
    v16 = (unsigned __int16)v80 | 0x80070000;
  if ( v16 < 0 )
  {
    v79 = 455LL;
    goto LABEL_188;
  }
  if ( pv )
    RegCloseKey((HKEY)pv);
  LeaveCriticalSection(&CriticalSection);
LABEL_195:
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::Initialize", 0x636u, v14);
  if ( v96 )
    LeaveCriticalSection(v95);
  if ( v13 )
    ((void (__fastcall *)(struct IMMDevice *))v13->lpVtbl->Release)(v13);
  if ( v86 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v86 + 16LL))(v86);
  return (unsigned int)v14;
}

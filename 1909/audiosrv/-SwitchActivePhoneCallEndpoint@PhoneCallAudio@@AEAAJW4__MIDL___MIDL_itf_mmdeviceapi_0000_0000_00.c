/*
 * XREFs of ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180128C30
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x180127A60 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180128140 (-OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18012827C (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180128738 (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180054D20 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PhoneCallAudio::SwitchActivePhoneCallEndpoint(
        PhoneCallAudio *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IUnknown *a3)
{
  __int64 v4; // r15
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  char *v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  LPVOID v19[2]; // [rsp+30h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-30h] BYREF
  void *v21; // [rsp+48h] [rbp-28h] BYREF
  char v22; // [rsp+50h] [rbp-20h]
  void **p_pv; // [rsp+58h] [rbp-18h]
  void *v24; // [rsp+60h] [rbp-10h] BYREF
  char v25; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v27; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp+48h] BYREF

  v19[1] = (LPVOID)-2LL;
  v4 = a2;
  v19[0] = 0LL;
  if ( a3 )
  {
    v27 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))a3->lpVtbl[1].QueryInterface)(a3, &v27);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 401LL;
LABEL_10:
      v9 = (unsigned int)v6;
      goto LABEL_11;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)v19;
    v21 = 0LL;
    v22 = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v27 + 40LL))(v27, &v21);
    if ( v22 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&lpCriticalSection->DebugInfo,
        v21);
    if ( v7 < 0 )
    {
      v9 = (unsigned int)v7;
      v8 = 402LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)v9);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
      goto LABEL_38;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown *))(**((_QWORD **)this + 5) + 24LL))(
           *((_QWORD *)this + 5),
           (unsigned int)v4,
           a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 403LL;
      goto LABEL_10;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  }
  pv = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  v10 = (char *)this + 8 * v4;
  v11 = *((_QWORD *)v10 + 15);
  if ( v11 )
  {
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v27);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 413LL;
      goto LABEL_20;
    }
    p_pv = &pv;
    v24 = 0LL;
    v25 = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v27 + 40LL))(v27, &v24);
    if ( v25 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        p_pv,
        v24);
    if ( v7 < 0 )
    {
      v13 = (unsigned int)v7;
      v14 = 414LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)v13);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
      if ( (_BYTE)v21 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_36;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  }
  if ( *((struct IUnknown **)v10 + 15) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)v10 + 15, a3);
  if ( (_BYTE)v21 )
    LeaveCriticalSection(lpCriticalSection);
  v15 = *((_QWORD *)this + 17);
  if ( v15 )
  {
    if ( pv )
    {
      v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, LPVOID, _DWORD))(*(_QWORD *)g_PolicyManager + 320LL))(
              g_PolicyManager,
              v15,
              (unsigned int)v4,
              pv,
              0);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 425LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_36;
      }
    }
    if ( v19[0] )
    {
      v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, LPVOID, int))(*(_QWORD *)g_PolicyManager
                                                                                                 + 320LL))(
              g_PolicyManager,
              *((_QWORD *)this + 17),
              (unsigned int)v4,
              v19[0],
              1);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 430LL;
        goto LABEL_34;
      }
    }
  }
  v7 = 0;
LABEL_36:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_38:
  if ( v19[0] )
    CoTaskMemFree(v19[0]);
  return (unsigned int)v7;
}

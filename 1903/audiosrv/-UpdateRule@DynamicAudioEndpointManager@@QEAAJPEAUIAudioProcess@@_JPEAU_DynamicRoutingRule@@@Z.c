/*
 * XREFs of ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x18012C1E8
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180127CE8 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18012C4E8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x180129DA0 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x18012A87C (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18012B7E4 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x18012C848 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DynamicAudioEndpointManager::UpdateRule(
        __int64 **this,
        struct IAudioProcess *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int refreshed; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  int v16; // eax
  int v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+58h] [rbp-A8h]
  _BYTE *v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  _BYTE *v26; // [rsp+90h] [rbp-70h]
  char v27; // [rsp+98h] [rbp-68h]
  _BYTE v28[288]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v29; // [rsp+1C0h] [rbp+C0h] BYREF
  __int16 v30; // [rsp+1D0h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v23 = -2LL;
  v18 = a2;
  v20 = a3;
  v29 = 0uLL;
  v30 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v24 = v6;
  *(_QWORD *)v17 = 0LL;
  std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(this + 121, (__int64)v19, &v20);
  v7 = *(_QWORD *)(v19[0] + 40);
  v19[0] = v7;
  if ( !v7 )
  {
    v8 = -2147024809;
    v9 = 2147942487LL;
    v10 = 504LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v9);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)v17 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v7)(v7, &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3, v17);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 506LL;
LABEL_10:
    v9 = (unsigned int)v11;
    goto LABEL_11;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v17 + 88LL))(
          *(_QWORD *)v17,
          v18,
          v28);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 508LL;
    goto LABEL_10;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v17 + 96LL))(
          *(_QWORD *)v17,
          v18,
          a4);
  v8 = v11;
  if ( v11 < 0 )
  {
    v10 = 510LL;
    goto LABEL_10;
  }
  *(_QWORD *)&v21 = v17;
  *((_QWORD *)&v21 + 1) = &v18;
  v22 = v28;
  v25 = v21;
  v26 = v28;
  v27 = 1;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                (__int64)this,
                0LL,
                *(unsigned int *)a4,
                *((_DWORD *)a4 + 1),
                *(__int64 *)v17,
                (__int64)&v29);
  v8 = refreshed;
  if ( refreshed < 0 )
  {
    v13 = (unsigned int)refreshed;
    v14 = 516LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v13);
    (*(void (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v17 + 96LL))(
      *(_QWORD *)v17,
      v18,
      v28);
LABEL_17:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v17);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v8;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
          (DynamicAudioEndpointManager *)this,
          (bool (*const)[9])&v29) )
  {
    v8 = -2147467259;
    v13 = 2147500037LL;
    v14 = 519LL;
    goto LABEL_16;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v19);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v17);
  if ( v6 )
    LeaveCriticalSection(v6);
  v16 = DynamicAudioEndpointManager::RefreshPublishedDefaults(
          (DynamicAudioEndpointManager *)this,
          (bool (*const)[9])&v29,
          0);
  v8 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v16);
    return v8;
  }
  return 0LL;
}

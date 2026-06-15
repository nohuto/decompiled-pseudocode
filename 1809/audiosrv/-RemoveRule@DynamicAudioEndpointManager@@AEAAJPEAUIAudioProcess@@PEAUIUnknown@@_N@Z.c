/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z @ 0x18011EF1C
 * Callers:
 *     wil::details::lambda_call__lambda_acba0f3e5e50a52263c0e0ff9ca80094___::_lambda_call__lambda_acba0f3e5e50a52263c0e0ff9ca80094___ @ 0x18011D4BC (wil--details--lambda_call__lambda_acba0f3e5e50a52263c0e0ff9ca80094___--_lambda_call__lambda_acba.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D72C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18011E7DC (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x18011EA30 (-OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18011F1FC (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800CAFAC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800CB10C (-erase@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@st_ea_1800CB10C.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z @ 0x18011DF70 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x18011E06C (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z @ 0x18011EC14 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011EE3C (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a6.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z @ 0x18011FC44 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3,
        char a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  int v8; // eax
  int refreshed; // ebx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  int v13; // eax
  bool *v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // r12
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 i; // rcx
  char v24; // bl
  DynamicAudioEndpointManager *v26; // rcx
  __int64 v27; // rdx
  char v28; // [rsp+30h] [rbp-50h] BYREF
  char v29; // [rsp+31h] [rbp-4Fh] BYREF
  char v30; // [rsp+32h] [rbp-4Eh]
  __int64 v31; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-40h]
  _QWORD v33[3]; // [rsp+48h] [rbp-38h] BYREF
  bool v34[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v33[1] = -2LL;
  v30 = a4;
  v33[0] = a3;
  *(_QWORD *)v34 = 0LL;
  v35 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v33[2] = v7;
  v31 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
         &v31);
  refreshed = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      1248LL,
      (__int64)"internal\\sdk\\inc\\wil/com.h",
      (const char *)(unsigned int)v8);
    v10 = 603LL;
LABEL_31:
    v12 = (unsigned int)refreshed;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v12);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)refreshed;
  }
  v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 64LL))(v31);
  v11 = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, char *, char *))(*(_QWORD *)v31 + 80LL))(
          v31,
          a2,
          &v29,
          &v28);
  refreshed = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v10 = 609LL;
    goto LABEL_32;
  }
  if ( v29 )
  {
    v13 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)a2 + 400LL))(
            a2,
            this,
            a3);
    refreshed = v13;
    if ( v13 < 0 )
    {
      v12 = (unsigned int)v13;
      v10 = 615LL;
      goto LABEL_32;
    }
  }
  v14 = v34;
  v15 = (_QWORD *)((char *)this + 56);
  v16 = 2LL;
  do
  {
    v17 = 0LL;
    v18 = 8LL;
    do
    {
      v19 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
              v15,
              v31);
      if ( v19 )
      {
        v14[v17] = 1;
        if ( v28 )
          ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::RemoveAt(
            v15,
            v19);
      }
      v15 += 6;
      ++v17;
      --v18;
    }
    while ( v18 );
    v14 += 8;
    --v16;
  }
  while ( v16 );
  if ( v28 )
  {
    v20 = (_QWORD *)**((_QWORD **)this + 109);
    v21 = v33[0];
    while ( v20 != *((_QWORD **)this + 109) )
    {
      if ( v20[5] == v21 )
      {
        std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::erase(
          (__int64 **)this + 109,
          v33,
          (__int64)v20);
        v20 = (_QWORD *)v33[0];
      }
      else if ( !*((_BYTE *)v20 + 25) )
      {
        v22 = v20[2];
        if ( *(_BYTE *)(v22 + 25) )
        {
          for ( i = v20[1]; !*(_BYTE *)(i + 25) && v20 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v20 = (_QWORD *)i;
          v20 = (_QWORD *)i;
        }
        else
        {
          v20 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v22);
        }
      }
    }
  }
  v24 = v30;
  if ( v30 && !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[8])v34) )
  {
    refreshed = -2147467259;
    v10 = 667LL;
    goto LABEL_31;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( v24 )
  {
    if ( v32 )
    {
      refreshed = DynamicAudioEndpointManager::ClearPerProcessRouting(v26, (bool (*const)[8])v34, v32);
      if ( refreshed < 0 )
      {
        v27 = 677LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v27,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)refreshed);
        return (unsigned int)refreshed;
      }
    }
    refreshed = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[8])v34, 0);
    if ( refreshed < 0 )
    {
      v27 = 680LL;
      goto LABEL_41;
    }
  }
  return 0LL;
}

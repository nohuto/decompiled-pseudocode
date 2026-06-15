/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18012B6AC
 * Callers:
 *     wil::details::lambda_call__lambda_66dae4852b45217444cfaa84d96a2206___::_lambda_call__lambda_66dae4852b45217444cfaa84d96a2206___ @ 0x180129A8C (wil--details--lambda_call__lambda_66dae4852b45217444cfaa84d96a2206___--_lambda_call__lambda_66da.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x180129D6C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x18012AF60 (-OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x18012AFB0 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18012B95C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D94F0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800D9648 (-erase@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@st_ea_1800D9648.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18012A5B4 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x18012A6B0 (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18012B3A4 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18012B5CC (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a6.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x18012C408 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3,
        char a4,
        bool (*const a5)[9])
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // eax
  int refreshed; // ebx
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r9
  int v14; // eax
  bool *v15; // r14
  bool *v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // r15
  __int64 v23; // rcx
  __int64 i; // rcx
  char v25; // bl
  DynamicAudioEndpointManager *v27; // rcx
  __int64 v28; // rdx
  _BYTE v29[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-2Ch]
  __int64 v31; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h]
  __int64 v33; // [rsp+48h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v36; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v37; // [rsp+B0h] [rbp+50h] BYREF
  char v38; // [rsp+B8h] [rbp+58h]

  v38 = a4;
  v37 = (__int64 *)a3;
  v33 = -2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v34 = v8;
  v31 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
         &v31);
  refreshed = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C8,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v9);
    v11 = 593LL;
LABEL_30:
    v13 = (unsigned int)refreshed;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)refreshed;
  }
  v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 64LL))(v31);
  v12 = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, _BYTE *, char *))(*(_QWORD *)v31 + 80LL))(
          v31,
          a2,
          v29,
          &v36);
  refreshed = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v11 = 599LL;
    goto LABEL_31;
  }
  if ( v29[0] )
  {
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)a2 + 400LL))(
            a2,
            this,
            a3);
    refreshed = v14;
    if ( v14 < 0 )
    {
      v13 = (unsigned int)v14;
      v11 = 605LL;
      goto LABEL_31;
    }
  }
  v15 = (bool *)a5;
  v16 = (bool *)a5;
  v17 = (_QWORD *)((char *)this + 56);
  v32 = 2LL;
  do
  {
    v18 = 0LL;
    v19 = 9LL;
    do
    {
      v20 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
              v17,
              v31);
      if ( v20 )
      {
        v16[v18] = 1;
        if ( v36 )
          ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::RemoveAt(
            v17,
            v20);
      }
      v17 += 6;
      ++v18;
      --v19;
    }
    while ( v19 );
    v16 += 9;
    --v32;
  }
  while ( v32 );
  if ( v36 )
  {
    v21 = (__int64 *)**((_QWORD **)this + 121);
    v22 = v37;
    while ( v21 != *((__int64 **)this + 121) )
    {
      if ( (__int64 *)v21[5] == v22 )
      {
        std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::erase(
          (__int64 **)this + 121,
          &v37,
          v21);
        v21 = v37;
      }
      else
      {
        v23 = v21[2];
        if ( *(_BYTE *)(v23 + 25) )
        {
          for ( i = v21[1]; !*(_BYTE *)(i + 25) && v21 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            v21 = (__int64 *)i;
          v21 = (__int64 *)i;
        }
        else
        {
          v21 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v23);
        }
      }
    }
  }
  v25 = v38;
  if ( v38 && !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])v15) )
  {
    refreshed = -2147467259;
    v11 = 657LL;
    goto LABEL_30;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v25 )
  {
    if ( v30 )
    {
      refreshed = DynamicAudioEndpointManager::ClearPerProcessRouting(v27, (bool (*const)[9])v15, v30);
      if ( refreshed < 0 )
      {
        v28 = 667LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)refreshed);
        return (unsigned int)refreshed;
      }
    }
    refreshed = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])v15, 0);
    if ( refreshed < 0 )
    {
      v28 = 670LL;
      goto LABEL_40;
    }
  }
  return 0LL;
}

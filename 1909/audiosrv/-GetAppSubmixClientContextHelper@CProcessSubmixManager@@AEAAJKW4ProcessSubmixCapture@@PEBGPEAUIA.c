/*
 * XREFs of ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FD01C
 * Callers:
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FCF40 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJKW4ProcessSubmixCapture@@PEAUIAudioProces.c)
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FCFB0 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixC.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003479C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800347E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     _lambda_823040ae01d5059dfb369ac1bb9874b3_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC2D4 (_lambda_823040ae01d5059dfb369ac1bb9874b3_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800FC370 (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@st.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800FC564 (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClie.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_0960f3740b145ee4ec2f585e7c8d5cb2___ @ 0x1800FC8A8 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAp.c)
 *     ??$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@AEAPEAUIAudioProcess@@$$QEAPEAVCAppSubmixClientContext@@@Z @ 0x1800FC92C (--$make_unique@VCAppSubmixClient@@AEAPEAUIAudioProcess@@PEAVCAppSubmixClientContext@@$0A@@std@@Y.c)
 *     ??$make_unique@VCAppSubmixClientContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@XZ @ 0x1800FC994 (--$make_unique@VCAppSubmixClientContext@@$$V$0A@@std@@YA-AV-$unique_ptr@VCAppSubmixClientContext.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_________lambda_734e07aef959534fc58489afc6593abc___ @ 0x1800FC9F8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IProcess.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x1800FCBC4 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800FDB08 (-erase@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=4
__int64 CProcessSubmixManager::GetAppSubmixClientContextHelper(__int64 a1, unsigned int a2, unsigned int a3, ...)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  LPCWCH **v5; // rdi
  LPCWCH **v6; // rsi
  void **v7; // r14
  unsigned __int16 *v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  int v11; // edi
  unsigned int v12; // eax
  void **v13; // r9
  int v14; // eax
  unsigned int v15; // edi
  const char *v16; // r9
  __int64 result; // rax
  int v18; // eax
  unsigned int v19; // edi
  __int64 *v20; // r15
  char *v21; // rdx
  __int64 *v22; // rdi
  char *v23; // rdx
  void **v24; // rsi
  __int64 v25; // rdx
  void *v26; // rcx
  void **v27; // rsi
  __int64 v28; // rcx
  char *v29; // rdx
  __int64 *v30; // rdi
  void **v31; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-B0h] BYREF
  LPCWCH *v33; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+58h] [rbp-A0h]
  __int128 v35; // [rsp+68h] [rbp-90h]
  unsigned int *v36; // [rsp+78h] [rbp-80h]
  __int64 v37; // [rsp+80h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+88h] [rbp-70h]
  _OWORD v39[2]; // [rsp+90h] [rbp-68h] BYREF
  unsigned int *v40; // [rsp+B0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  bool v42; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v43; // [rsp+108h] [rbp+10h] BYREF
  unsigned int v44; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int16 *v45; // [rsp+118h] [rbp+20h] BYREF
  va_list va; // [rsp+118h] [rbp+20h]
  __int64 v47; // [rsp+120h] [rbp+28h] BYREF
  va_list va1; // [rsp+120h] [rbp+28h]
  _QWORD *v49; // [rsp+128h] [rbp+30h]
  va_list va2; // [rsp+130h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v45 = va_arg(va1, unsigned __int16 *);
  va_copy(va2, va1);
  v47 = va_arg(va2, _QWORD);
  v49 = va_arg(va2, _QWORD *);
  v44 = a3;
  v43 = a2;
  v37 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v38 = v4;
  v42 = v43 == 0;
  *(_QWORD *)&v34 = &v42;
  va_copy(*((va_list *)&v34 + 1), va);
  va_copy((va_list)v35, va1);
  *((_QWORD *)&v35 + 1) = &v43;
  v36 = &v44;
  v39[0] = v34;
  v39[1] = v35;
  v40 = &v44;
  v5 = *(LPCWCH ***)(a1 + 56);
  v6 = *(LPCWCH ***)(a1 + 64);
  try
  {
    while ( v5 != v6
         && !lambda_823040ae01d5059dfb369ac1bb9874b3_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
               (__int64)v39,
               v5) )
      ++v5;
    if ( v5 != *(LPCWCH ***)(a1 + 64) )
    {
      std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_0960f3740b145ee4ec2f585e7c8d5cb2___(
        (__int64 ***)&v33,
        (__int64 **)(*v5)[6],
        (__int64 **)(*v5)[7],
        (__int64 *)va1);
      if ( v33 == (LPCWCH *)(*v5)[7] )
      {
        v33 = *v5;
        std::make_unique<CAppSubmixClient,IAudioProcess * &,CAppSubmixClientContext *,0>(
          &v31,
          (__int64 *)va1,
          (__int64 *)&v33);
        v27 = v31;
        v28 = (__int64)(*v5 + 6);
        v29 = (char *)(*v5)[7];
        if ( (*v5)[8] == (LPCWCH)v29 )
        {
          std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClient>>(
            (char **)v28,
            v29,
            (__int64 *)&v31);
          v30 = (__int64 *)v31;
        }
        else
        {
          v30 = 0LL;
          *(_QWORD *)v29 = v31;
          *(_QWORD *)(v28 + 8) += 8LL;
        }
        *v49 = v27;
        if ( !v30 )
          goto LABEL_47;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v30);
        v25 = 16LL;
        v26 = v30;
LABEL_46:
        operator delete(v26, (const struct std::nothrow_t *)v25);
LABEL_47:
        if ( v4 )
          LeaveCriticalSection(v4);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)0x8000FFFFLL);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 2147549183LL;
    }
    std::make_unique<CAppSubmixClientContext,,0>(&v31);
    v7 = v31;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v31,
      0LL);
    v8 = v45;
    v9 = -1LL;
    do
      ++v9;
    while ( v45[v9] );
    *v7 = 0LL;
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v11 = -2147024362;
      goto LABEL_34;
    }
    *v7 = 0LL;
    if ( is_mul_ok(v10, 2uLL) )
    {
      v11 = CTCoAllocPolicy::Alloc(0LL, 0, 2 * v10, v7);
      if ( v11 < 0 )
        goto LABEL_34;
      StringCchCopyNExW((char *)*v7, v9 + 1, v8, v9);
    }
    else
    {
      v11 = -2147024362;
    }
    if ( v11 >= 0 )
    {
      *((_DWORD *)v7 + 2) = v43;
      *((_DWORD *)v7 + 3) = v44;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 48LL))(v47);
      *((_DWORD *)v7 + 4) = v12;
      v13 = v7 + 3;
      if ( v42 )
      {
        v14 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, unsigned __int16 *, _QWORD, void **))(*(_QWORD *)g_DeviceGraphStore + 32LL))(
                g_DeviceGraphStore,
                v45,
                v12,
                v13);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x17A,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
            (const char *)(unsigned int)v14);
          CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v7);
          operator delete(v7, (const struct std::nothrow_t *)0x48);
          if ( v4 )
            LeaveCriticalSection(v4);
          return v15;
        }
        goto LABEL_23;
      }
      v18 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, _QWORD, void **))(*(_QWORD *)g_DeviceGraphStore
                                                                                           + 40LL))(
              g_DeviceGraphStore,
              v43,
              v44,
              v13);
      v19 = v18;
      if ( v18 >= 0 )
      {
LABEL_23:
        std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_________lambda_734e07aef959534fc58489afc6593abc___(
          &v32,
          (__int64 *)v7[3],
          (__int64 *)v7[4]);
        std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::erase(v7 + 3, &v33, v32, v7[4]);
        v33 = (LPCWCH *)v7;
        std::make_unique<CAppSubmixClient,IAudioProcess * &,CAppSubmixClientContext *,0>(
          &v32,
          (__int64 *)va1,
          (__int64 *)&v33);
        v20 = v32;
        v21 = (char *)v7[7];
        if ( v7[8] == v21 )
        {
          std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClient>>(
            (char **)v7 + 6,
            v21,
            (__int64 *)&v32);
          v22 = v32;
        }
        else
        {
          v22 = 0LL;
          v32 = 0LL;
          *(_QWORD *)v21 = v20;
          v7[7] = (char *)v7[7] + 8;
        }
        v23 = *(char **)(a1 + 64);
        if ( *(char **)(a1 + 72) == v23 )
        {
          std::vector<std::unique_ptr<CAppSubmixClientContext>>::_Emplace_reallocate<std::unique_ptr<CAppSubmixClientContext>>(
            (char **)(a1 + 56),
            v23,
            (__int64 *)&v31);
          v24 = v31;
        }
        else
        {
          v24 = 0LL;
          *(_QWORD *)v23 = v7;
          *(_QWORD *)(a1 + 64) += 8LL;
        }
        *v49 = v20;
        if ( v22 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v22);
          operator delete(v22, (const struct std::nothrow_t *)0x10);
        }
        if ( !v24 )
          goto LABEL_47;
        CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v24);
        v25 = 72LL;
        v26 = v24;
        goto LABEL_46;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)(unsigned int)v18);
      CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v7);
      operator delete(v7, (const struct std::nothrow_t *)0x48);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v19;
    }
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x174,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v11);
    CAppSubmixClientContext::~CAppSubmixClientContext((CAppSubmixClientContext *)v7);
    operator delete(v7, (const struct std::nothrow_t *)0x48);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = (unsigned int)v11;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AB,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v16);
  }
  return result;
}

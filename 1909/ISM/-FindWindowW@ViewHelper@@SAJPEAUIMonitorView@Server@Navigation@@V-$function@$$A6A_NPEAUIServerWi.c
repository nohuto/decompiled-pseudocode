/*
 * XREFs of ?FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x180057DB8
 * Callers:
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800583F0 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800584F8 (-GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180058758 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation::Server::IMonitorView___::_Do_call @ 0x1800588D0 (std--_Func_impl_no_alloc__lambda_3bffa33b46eabc9ad4a3efbb73b99b0c__bool_Navigation-_ea_1800588D0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIServerWindow@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServerWindow@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x180057C20 (--$As@UIServerWindow@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewHelper::FindWindowW(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD); // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  _QWORD v35[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v37; // [rsp+80h] [rbp+40h] BYREF
  __int64 v38; // [rsp+88h] [rbp+48h]
  __int64 v39; // [rsp+90h] [rbp+50h] BYREF
  __int64 v40; // [rsp+98h] [rbp+58h] BYREF

  v38 = a2;
  v35[1] = -2LL;
  *a3 = 0LL;
  v39 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 128LL))(a1, &v39);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v5);
    v8 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(_QWORD *)(a2 + 56);
    if ( v9 )
    {
      LOBYTE(v7) = v9 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v6;
  }
  v37 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 48LL))(v39, &v37);
  v6 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v11);
    v14 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = *(_QWORD *)(a2 + 56);
    if ( v15 )
    {
      LOBYTE(v13) = v15 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v13);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v6;
  }
  v16 = 0;
  if ( v37 > 0 )
  {
    while ( 1 )
    {
      v34 = 0LL;
      v17 = v39;
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v39 + 56LL);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v34);
      v19 = v18(v17, v16, &v34);
      v6 = v19;
      if ( v19 < 0 )
        break;
      v40 = 0LL;
      v20 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IServerWindow>(&v34, &v40);
      v6 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v40);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v34);
        v29 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        v30 = *(_QWORD *)(a2 + 56);
        if ( v30 )
        {
          LOBYTE(v28) = v30 != a2;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 32LL))(v30, v28);
          *(_QWORD *)(a2 + 56) = 0LL;
        }
        return v6;
      }
      v35[0] = v40;
      v21 = *(_QWORD *)(a2 + 56);
      if ( !v21 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 16LL))(v21, v35) )
      {
        v24 = v40;
        if ( v40 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
          v24 = v40;
        }
        *a3 = v24;
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v40);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v34);
        v26 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v27 = *(_QWORD *)(a2 + 56);
        if ( v27 )
        {
          LOBYTE(v25) = v27 != a2;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, v25);
          *(_QWORD *)(a2 + 56) = 0LL;
        }
        return 0LL;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v40);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v34);
      if ( (int)++v16 >= v37 )
        goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v34);
    v32 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = *(_QWORD *)(a2 + 56);
    if ( v33 )
    {
      LOBYTE(v31) = v33 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 32LL))(v33, v31);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v6;
  }
LABEL_19:
  v22 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = *(_QWORD *)(a2 + 56);
  if ( v23 )
  {
    LOBYTE(v12) = v23 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v12);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return 2147943568LL;
}

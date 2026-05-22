/*
 * XREFs of _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x180021B3C
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_3bf0c1641773c9cead522fb3b6204044_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180021B10 (--$_Callback_once@V-$tuple@$$QEAV_lambda_3bf0c1641773c9cead522fb3b6204044_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180021D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180022C80 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180023EDC (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BD50 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CAB8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x18007DF04 (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 lambda_3bf0c1641773c9cead522fb3b6204044_::operator()()
{
  Microsoft::Bamo::BaseBamoConnection *v0; // rbx
  __int64 v1; // rcx
  int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, const wchar_t *, __int64 *); // rdi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  const char *v12; // r9
  volatile signed __int32 *v13; // rax
  MPCManager *v14; // rdx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rcx
  ISMTracing *v21; // rcx
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-29h]
  int v24; // [rsp+20h] [rbp-29h]
  Microsoft::Bamo::BaseBamoConnection *v25; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-11h] BYREF
  MPCManager *v27; // [rsp+48h] [rbp-1h]
  __int128 v28; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp+17h] BYREF
  __int128 v30; // [rsp+70h] [rbp+27h] BYREF
  _BYTE v31[32]; // [rsp+80h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v33; // [rsp+B0h] [rbp+67h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v34; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+7Fh] BYREF

  v26[1] = -2LL;
  v33 = 0LL;
  v0 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v2 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v36);
  if ( v2 < 0 )
  {
    if ( ISMTracing::IsEnabled(v1) )
    {
      wil::details::static_lazy<ISMTracing>::get(v20, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCManager_InitializationFailed_(v21, v2);
    }
  }
  else
  {
    v3 = v33;
    v33 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = CoreUICreate(&v33);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v4,
        v23);
      __debugbreak();
    }
    v6 = v33;
    if ( !v33 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v5);
      __debugbreak();
    }
    v7 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v33 + 48LL);
    v8 = v35;
    v35 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v7(v6, v36, L"System\\MPCManagerPort", &v35);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v9,
        v23);
      __debugbreak();
    }
    DWORD2(v28) = 1;
    *(_QWORD *)&v28 = 0LL;
    v30 = v28;
    v34 = 0LL;
    v11 = Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(
            v33,
            v35,
            (unsigned int)&v30,
            v10,
            (__int64)&v34);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v11,
        v24);
      __debugbreak();
    }
    v0 = v34;
  }
  v25 = v0;
  v26[0] = &v25;
  __ExceptionPtrCreate(&v28);
  v29[0] = &v28;
  v29[1] = v26;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCConstantManager::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c8397eccb247ca477275d95d0a9bda1a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v29) )
  {
    if ( __ExceptionPtrToBool(&v28) )
    {
      v22 = std::exception_ptr::exception_ptr((std::exception_ptr *)v31, (const struct std::exception_ptr *)&v28);
      std::rethrow_exception(v22);
    }
    std::_XGetLastError();
    JUMPOUT(0x18004A46DLL);
  }
  __ExceptionPtrDestroy(&v28);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v12);
    __debugbreak();
  }
  v27 = (MPCManager *)operator new(0x58uLL);
  v13 = (volatile signed __int32 *)MPCManager::MPCManager(v27, v0);
  v14 = (MPCManager *)v13;
  v15 = (volatile signed __int32 *)MPCManager::s_instance;
  if ( MPCManager::s_instance != (MPCManager *)v13 )
  {
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 6);
      v0 = v34;
      v15 = (volatile signed __int32 *)MPCManager::s_instance;
    }
    v16 = v15;
    v27 = (MPCManager *)v15;
    v15 = (volatile signed __int32 *)v14;
    MPCManager::s_instance = v14;
    if ( v16 )
    {
      (**((void (__fastcall ***)(__int64))v16 + 2))((__int64)(v16 + 4));
      v15 = (volatile signed __int32 *)MPCManager::s_instance;
    }
  }
  if ( v0 )
  {
    v17 = *((_QWORD *)v0 + 19);
    *((_QWORD *)v0 + 19) = v15;
    if ( v15 )
    {
      _InterlockedIncrement(v15 + 6);
      v0 = v34;
    }
    if ( v17 )
      (**(void (__fastcall ***)(__int64, MPCManager *))(v17 + 16))(v17 + 16, v14);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
    &v35,
    v14);
  if ( v0 )
    Microsoft::Bamo::BaseBamoConnection::Release(v0);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
           &v33,
           v18);
}

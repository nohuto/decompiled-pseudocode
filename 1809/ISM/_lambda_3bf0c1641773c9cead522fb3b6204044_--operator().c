/*
 * XREFs of _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18003C720
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_3bf0c1641773c9cead522fb3b6204044_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18003D4D0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_3bf0c1641773c9cead522fb3b6204044_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18003C6A4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003CA58 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18003D2CC (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x18003E810 (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
MPCManager *lambda_3bf0c1641773c9cead522fb3b6204044_::operator()()
{
  struct MPCManagerConnection *v0; // rbx
  int v1; // edi
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  _DWORD *v10; // rcx
  ISMTracing *v12; // rcx
  const char *v13; // r9
  MPCManager *result; // rax
  MPCManager *v15; // rdx
  MPCManager *v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD); // rax
  std::exception_ptr *v18; // rax
  struct MPCManagerConnection *v19; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-11h] BYREF
  MPCManager *v21; // [rsp+48h] [rbp-1h] BYREF
  __int128 v22; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp+27h] BYREF
  __int128 v24; // [rsp+80h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v26; // [rsp+B0h] [rbp+67h] BYREF
  struct MPCManagerConnection *v27; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+7Fh] BYREF

  v20[1] = -2LL;
  v26 = 0LL;
  v0 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v1 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v29);
  if ( v1 < 0 )
  {
    v10 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v10 && *v10 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCManager_InitializationFailed_(v12, v1);
    }
  }
  else
  {
    v2 = v26;
    v26 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = CoreUICreate(&v26);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    v5 = v26;
    if ( !v26 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v4);
      __debugbreak();
    }
    v6 = v28;
    v28 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v5 + 48LL))(
           v5,
           v29,
           L"System\\MPCManagerPort",
           &v28);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    DWORD2(v22) = 1;
    *(_QWORD *)&v22 = 0LL;
    v24 = v22;
    v27 = 0LL;
    v9 = Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(
           v26,
           v28,
           (unsigned int)&v24,
           v8,
           (__int64)&v27);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v0 = v27;
  }
  v19 = v0;
  v20[0] = &v19;
  __ExceptionPtrCreate(&v22);
  v23[0] = &v22;
  v23[1] = v20;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCConstantManager::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c8397eccb247ca477275d95d0a9bda1a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v23) )
  {
    if ( !__ExceptionPtrToBool(&v22) )
    {
      std::_XGetLastError();
      __debugbreak();
    }
    v18 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v21, (const struct std::exception_ptr *)&v22);
    std::rethrow_exception(v18);
  }
  __ExceptionPtrDestroy(&v22);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
    JUMPOUT(0x18003CA50LL);
  }
  v21 = (MPCManager *)operator new(0x58uLL);
  result = MPCManager::MPCManager(v21, v0);
  v15 = result;
  v16 = MPCManager::s_instance;
  if ( MPCManager::s_instance != result )
  {
    if ( result )
    {
      _InterlockedIncrement((volatile signed __int32 *)result + 6);
      v0 = v27;
      v16 = MPCManager::s_instance;
    }
    result = v16;
    v16 = v15;
    MPCManager::s_instance = v15;
    if ( result )
    {
      result = (MPCManager *)(**((__int64 (__fastcall ***)(__int64))result + 2))((__int64)result + 16);
      v16 = MPCManager::s_instance;
    }
  }
  if ( v0 )
  {
    result = (MPCManager *)*((_QWORD *)v0 + 19);
    *((_QWORD *)v0 + 19) = v16;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v16 + 6);
      v0 = v27;
    }
    if ( result )
      result = (MPCManager *)(**((__int64 (__fastcall ***)(__int64, MPCManager *))result + 2))(
                               (__int64)result + 16,
                               v15);
  }
  if ( v28 )
    result = (MPCManager *)(*(__int64 (__fastcall **)(__int64, MPCManager *))(*(_QWORD *)v28 + 16LL))(v28, v15);
  if ( v0 )
  {
    v17 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct MPCManagerConnection *, MPCManager *))(*(_QWORD *)v0 + 24LL))(
                                              v0,
                                              v15);
    result = (MPCManager *)(**v17)(v17);
  }
  if ( v26 )
    return (MPCManager *)(*(__int64 (__fastcall **)(__int64, MPCManager *))(*(_QWORD *)v26 + 16LL))(v26, v15);
  return result;
}

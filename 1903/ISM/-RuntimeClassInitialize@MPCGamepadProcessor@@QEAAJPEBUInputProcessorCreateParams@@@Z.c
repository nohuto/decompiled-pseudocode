/*
 * XREFs of ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180139048
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180136A9C (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800166FC (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021744 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCGamepadProcessor::RuntimeClassInitialize(
        MPCGamepadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned __int64 v4; // rsi
  int v5; // eax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int ChildInputProcessor; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, char *); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, char *); // rsi
  __int64 v11; // rcx
  int v12; // eax
  std::exception_ptr *v14; // rax
  _BYTE v15[16]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v17[16]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  MPCGamepadProcessor *v21; // [rsp+90h] [rbp+20h] BYREF

  v4 = (unsigned __int64)this + 8;
  v5 = MPCInputProviderBase::RuntimeClassInitialize((MPCGamepadProcessor *)((char *)this + 8), a2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      32LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v21 = this;
  __ExceptionPtrCreate(v15);
  v16[0] = v15;
  v16[1] = &v21;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCGamepadProcessor::s_constantsInitialized,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c78139b4692b055c43ac45a1104373ed_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v16) )
  {
    if ( __ExceptionPtrToBool(v15) )
    {
      v14 = std::exception_ptr::exception_ptr((std::exception_ptr *)v17, (const struct std::exception_ptr *)v15);
      std::rethrow_exception(v14);
    }
    std::_XGetLastError();
    JUMPOUT(0x1801391DDLL);
  }
  __ExceptionPtrDestroy(v15);
  v18 = *(_OWORD *)a2;
  v19 = v4 & -(__int64)(this != 0LL);
  v6 = (_QWORD *)((char *)this + 4640);
  v7 = *((_QWORD *)this + 580);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ChildInputProcessor = CreateChildInputProcessor(0x40u, (__int64)&v18, (__int64)this + 4640);
  if ( ChildInputProcessor < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      42LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    __debugbreak();
  }
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v6;
  v10 = **v9;
  v11 = *((_QWORD *)this + 581);
  if ( v11 )
  {
    *((_QWORD *)this + 581) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v10(v9, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 4648);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  return 0LL;
}

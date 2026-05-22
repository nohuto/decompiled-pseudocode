/*
 * XREFs of ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800213D8
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180017BF0 (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800166FC (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x1800215EC (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021744 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCMouseProcessor::RuntimeClassInitialize(
        MPCMouseProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char *v6; // rbx
  __int64 v7; // rcx
  int ChildInputProcessor; // eax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, GUID *, char *); // r15
  __int64 v11; // rcx
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, char *); // rsi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, char *); // rdi
  int v19; // eax
  __int64 v21; // rax
  _BYTE v22[16]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v24; // [rsp+48h] [rbp-38h] BYREF
  MPCMouseProcessor *v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF
  char *v27; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  MPCMouseProcessor *v29; // [rsp+B0h] [rbp+30h] BYREF
  LARGE_INTEGER Frequency; // [rsp+B8h] [rbp+38h] BYREF

  v24 = *(_OWORD *)a2;
  v29 = (MPCMouseProcessor *)*((_QWORD *)a2 + 2);
  v25 = v29;
  *((_DWORD *)this + 1172) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 32LL))(*((_QWORD *)a2 + 1));
  *((_DWORD *)this + 1173) = 2;
  *(_QWORD *)&v24 = (char *)this + 4688;
  QueryPerformanceFrequency(&Frequency);
  *((_QWORD *)this + 802) = 500 * qword_1801E0BE8 / 1000;
  v26 = v24;
  v27 = (char *)this + 16;
  v4 = MPCInputProviderBase::RuntimeClassInitialize(
         (MPCMouseProcessor *)((char *)this + 16),
         (const struct InputProcessorCreateParams *)&v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v29 = this;
    __ExceptionPtrCreate(v22);
    v23[0] = v22;
    v23[1] = &v29;
    if ( std::_Execute_once(
           (struct std::once_flag *)&MPCMouseProcessor::s_constantsInitialized,
           (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_c0c3d577aad3ca08d159cb5956f28f0e_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
           v23) )
    {
      __ExceptionPtrDestroy(v22);
      MPCMouseProcessor::AttachMouse(this, *(struct DeviceInfo **)a2);
      v6 = (char *)this + 4664;
      v7 = *((_QWORD *)this + 583);
      if ( v7 )
      {
        *(_QWORD *)v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ChildInputProcessor = CreateChildInputProcessor(2u, (__int64)&v26, (__int64)this + 4664);
      if ( ChildInputProcessor < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)ChildInputProcessor,
          -2);
        __debugbreak();
      }
      v9 = *(_QWORD *)v6;
      v10 = ***(__int64 (__fastcall ****)(__int64, GUID *, char *))v6;
      v11 = *((_QWORD *)this + 584);
      if ( v11 )
      {
        *((_QWORD *)this + 584) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = v10(v9, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 4672);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x51,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v12,
          -2);
        __debugbreak();
      }
      v13 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v6;
      v14 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v6;
      v15 = *((_QWORD *)this + 585);
      if ( v15 )
      {
        *((_QWORD *)this + 585) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = v14(v13, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8, (char *)this + 4680);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x52,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v16,
          -2);
        __debugbreak();
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
      v18 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 72LL);
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 4656);
      v19 = v18(v17, (char *)this + 4656);
      if ( v19 >= 0 )
        return 0LL;
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x55,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v19,
        -2);
    }
    if ( __ExceptionPtrToBool(v22) )
    {
      v21 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v24, (const struct std::exception_ptr *)v22);
      std::rethrow_exception(v21);
    }
    std::_XGetLastError();
    JUMPOUT(0x180049F5FLL);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

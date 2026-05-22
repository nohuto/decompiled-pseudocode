/*
 * XREFs of ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180136880
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18009199C (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021744 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCHandProcessor::RuntimeClassInitialize(
        MPCHandProcessor *this,
        const struct InputProcessorCreateParams *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  std::exception_ptr *v8; // rcx
  _BYTE v9[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  MPCHandProcessor *v13; // [rsp+78h] [rbp+18h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)a2 + 4LL) != 512 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      27LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      a4);
    __debugbreak();
  }
  v5 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = this;
    __ExceptionPtrCreate(v9);
    v10[0] = v9;
    v10[1] = &v13;
    if ( !std::_Execute_once(
            (struct std::once_flag *)&unk_1801E1398,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_cea5e010cd57342e421c8488c8b753a5_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v10) )
    {
      if ( __ExceptionPtrToBool(v9) )
      {
        v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)v11, (const struct std::exception_ptr *)v9);
        std::rethrow_exception(v8);
      }
      std::_XGetLastError();
      JUMPOUT(0x18013696FLL);
    }
    __ExceptionPtrDestroy(v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}

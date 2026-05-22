/*
 * XREFs of ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18012C360
 * Callers:
 *     ??$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1800919B8 (--$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021264 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BD50 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CAB8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCVoiceProcessor::RuntimeClassInitialize(
        MPCVoiceProcessor *this,
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
  MPCVoiceProcessor *v13; // [rsp+78h] [rbp+18h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)a2 + 4LL) != 0x40000 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      14LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
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
            (struct std::once_flag *)&unk_1801E1390,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_7a8cdf47427de701aad174af942599f3_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v10) )
    {
      if ( __ExceptionPtrToBool(v9) )
      {
        v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)v11, (const struct std::exception_ptr *)v9);
        std::rethrow_exception(v8);
      }
      std::_XGetLastError();
      JUMPOUT(0x18012C44FLL);
    }
    __ExceptionPtrDestroy(v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}

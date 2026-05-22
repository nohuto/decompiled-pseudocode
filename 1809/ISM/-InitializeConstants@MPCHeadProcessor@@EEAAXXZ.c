/*
 * XREFs of ?InitializeConstants@MPCHeadProcessor@@EEAAXXZ @ 0x1800FEDE0
 * Callers:
 *     ?Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800FEC20 (-Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18003C6A4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCHeadProcessor::InitializeConstants(MPCHeadProcessor *this)
{
  std::exception_ptr *v1; // rax
  _BYTE v2[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v3[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v4[24]; // [rsp+48h] [rbp-18h] BYREF
  char *v5; // [rsp+70h] [rbp+10h] BYREF

  v5 = (char *)this - 24;
  __ExceptionPtrCreate(v2);
  v3[0] = v2;
  v3[1] = &v5;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCHeadProcessor::s_constantsInitialized,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_f8d27b8d936a7adc219ade59e2fa9c02_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v3) )
  {
    if ( !__ExceptionPtrToBool(v2) )
    {
      std::_XGetLastError();
      __debugbreak();
    }
    v1 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)v2);
    std::rethrow_exception(v1);
  }
  __ExceptionPtrDestroy(v2);
}

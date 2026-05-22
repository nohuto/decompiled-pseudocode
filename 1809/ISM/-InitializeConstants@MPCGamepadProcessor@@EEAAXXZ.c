/*
 * XREFs of ?InitializeConstants@MPCGamepadProcessor@@EEAAXXZ @ 0x1800F8190
 * Callers:
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800F7F64 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1800FA160 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18003C6A4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCGamepadProcessor::InitializeConstants(MPCGamepadProcessor *this)
{
  std::exception_ptr *v1; // rax
  _BYTE v2[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v3[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v4[24]; // [rsp+48h] [rbp-18h] BYREF
  char *v5; // [rsp+70h] [rbp+10h] BYREF

  v5 = (char *)this - 32;
  __ExceptionPtrCreate(v2);
  v3[0] = v2;
  v3[1] = &v5;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCGamepadProcessor::s_constantsInitialized,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_e309564ffb086dc2ff61e71159beb8e1_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
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

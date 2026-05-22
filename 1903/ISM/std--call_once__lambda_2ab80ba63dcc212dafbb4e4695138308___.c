/*
 * XREFs of std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x18012EA34
 * Callers:
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180131A54 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___(__int64 a1, __int64 a2)
{
  std::exception_ptr *v3; // rcx
  _BYTE v4[16]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v6[32]; // [rsp+48h] [rbp-20h] BYREF

  __ExceptionPtrCreate(v4);
  v5[0] = v4;
  v5[1] = a2;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCSixDofProcessor::s_registryWatcherCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_2ab80ba63dcc212dafbb4e4695138308_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v5) )
  {
    if ( __ExceptionPtrToBool(v4) )
    {
      v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v6, (const struct std::exception_ptr *)v4);
      std::rethrow_exception(v3);
    }
    std::_XGetLastError();
    JUMPOUT(0x18012EABELL);
  }
  __ExceptionPtrDestroy(v4);
}

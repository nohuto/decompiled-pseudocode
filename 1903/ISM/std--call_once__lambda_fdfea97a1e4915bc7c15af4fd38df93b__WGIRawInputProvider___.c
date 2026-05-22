/*
 * XREFs of std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___ @ 0x1800A71D8
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A76D0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BF90 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___(
        struct std::once_flag *a1,
        __int64 a2,
        __int64 a3)
{
  std::exception_ptr *v6; // rcx
  _BYTE v7[16]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v9[3]; // [rsp+48h] [rbp-20h] BYREF

  __ExceptionPtrCreate(v7);
  v9[0] = v7;
  v9[1] = a3;
  v9[2] = a2;
  if ( !std::_Execute_once(
          a1,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_fdfea97a1e4915bc7c15af4fd38df93b_ &&,WGIRawInputProvider * &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0,1>,2>,
          v9) )
  {
    if ( __ExceptionPtrToBool(v7) )
    {
      v6 = std::exception_ptr::exception_ptr((std::exception_ptr *)v8, (const struct std::exception_ptr *)v7);
      std::rethrow_exception(v6);
    }
    std::_XGetLastError();
    JUMPOUT(0x1800A727DLL);
  }
  __ExceptionPtrDestroy(v7);
}

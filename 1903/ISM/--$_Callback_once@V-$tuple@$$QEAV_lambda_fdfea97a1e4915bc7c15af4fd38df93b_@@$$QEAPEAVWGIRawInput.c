/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInputProvider@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@$00@2@$01@std@@YAHPEAX0PEAPEAX@Z @ 0x1800A6F50
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7BBC (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_fdfea97a1e4915bc7c15af4fd38df93b_ &&,WGIRawInputProvider * &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0,1>,2>(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rbx
  _BYTE v4[16]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD pExceptionObject[4]; // [rsp+38h] [rbp-20h] BYREF

  try
  {
    if ( (int)WGIRawInputProvider::StartUserManagerWatcher(**(WGIRawInputProvider ***)(a2 + 8)) < 0 )
    {
      pExceptionObject[0] = &std::exception::`vftable';
      pExceptionObject[1] = 0LL;
      pExceptionObject[2] = 0LL;
      throw (std::exception *)pExceptionObject;
    }
  }
  catch ( ... )
  {
    v3 = *(void **)a2;
    __ExceptionPtrCreate(v4);
    __ExceptionPtrCurrentException(v4);
    __ExceptionPtrAssign(v3, v4);
    __ExceptionPtrDestroy(v4);
    return 0LL;
  }
  return 1LL;
}

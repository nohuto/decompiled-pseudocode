/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180020DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18001F910 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_a6dafc035b20d634b29ec3c0443d964a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  MPCHolographicInputManager *v2; // rcx
  __int64 result; // rax
  void *v4; // rbx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    v2 = (MPCHolographicInputManager *)operator new(0xA70uLL);
    MPCHolographicInputManager::s_instance = MPCHolographicInputManager::MPCHolographicInputManager(v2);
    result = 1LL;
  }
  catch ( ... )
  {
    v4 = *a2;
    __ExceptionPtrCreate(v5);
    __ExceptionPtrCurrentException(v5);
    __ExceptionPtrAssign(v4, v5);
    __ExceptionPtrDestroy(v5);
    return 0LL;
  }
  return result;
}

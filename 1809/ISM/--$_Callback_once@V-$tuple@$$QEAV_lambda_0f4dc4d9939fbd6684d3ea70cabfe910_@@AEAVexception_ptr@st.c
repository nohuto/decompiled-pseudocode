/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_0f4dc4d9939fbd6684d3ea70cabfe910_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800F4BE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0f4dc4d9939fbd6684d3ea70cabfe910_::operator() @ 0x1800EEA84 (_lambda_0f4dc4d9939fbd6684d3ea70cabfe910_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_0f4dc4d9939fbd6684d3ea70cabfe910_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  void *v4; // rbx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    lambda_0f4dc4d9939fbd6684d3ea70cabfe910_::operator()(*(_QWORD **)(a2 + 8), a2, a3);
    result = 1LL;
  }
  catch ( ... )
  {
    v4 = *(void **)a2;
    __ExceptionPtrCreate(v5);
    __ExceptionPtrCurrentException(v5);
    __ExceptionPtrAssign(v4, v5);
    __ExceptionPtrDestroy(v5);
    return 0LL;
  }
  return result;
}

/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_4aaa1439e9b69916765fe461c5081daf_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800FDE70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4aaa1439e9b69916765fe461c5081daf_::operator() @ 0x1800FB504 (_lambda_4aaa1439e9b69916765fe461c5081daf_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_4aaa1439e9b69916765fe461c5081daf_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  void *v4; // rbx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    lambda_4aaa1439e9b69916765fe461c5081daf_::operator()(*(_QWORD **)(a2 + 8), a2, a3);
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

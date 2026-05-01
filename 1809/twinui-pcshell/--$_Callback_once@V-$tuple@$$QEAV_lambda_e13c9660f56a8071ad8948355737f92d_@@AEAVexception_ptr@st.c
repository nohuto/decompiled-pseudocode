/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_e13c9660f56a8071ad8948355737f92d_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18025BC20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e13c9660f56a8071ad8948355737f92d_::operator() @ 0x18025C184 (_lambda_e13c9660f56a8071ad8948355737f92d_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_e13c9660f56a8071ad8948355737f92d_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  void *v3; // rbx
  _BYTE v4[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    lambda_e13c9660f56a8071ad8948355737f92d_::operator()(*(_QWORD *)(a2 + 8));
    result = 1LL;
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
  return result;
}

/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_cea5e010cd57342e421c8488c8b753a5_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180133BE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cea5e010cd57342e421c8488c8b753a5_::operator() @ 0x180133FF8 (_lambda_cea5e010cd57342e421c8488c8b753a5_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_cea5e010cd57342e421c8488c8b753a5_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  void *v3; // rbx
  _BYTE v4[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    lambda_cea5e010cd57342e421c8488c8b753a5_::operator()(*(_QWORD *)(a2 + 8));
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

/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_21b8fbba22a3d8e1beadf144030eed52__Windows::Internal::CNoResult_::Run @ 0x180030300
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_21b8fbba22a3d8e1beadf144030eed52_::operator() @ 0x18002B6C8 (_lambda_21b8fbba22a3d8e1beadf144030eed52_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_21b8fbba22a3d8e1beadf144030eed52__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_21b8fbba22a3d8e1beadf144030eed52_::operator()((_QWORD *)(a1 + 8), a2);
  return (unsigned int)a3;
}

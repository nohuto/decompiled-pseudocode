/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::Run @ 0x180030340
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::UnmarshalAndCall__ @ 0x180031C64 (Windows--Internal--COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3___ea_180031C64.c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  if ( a3 >= 0 )
  {
    a3 = *(_DWORD *)(a1 + 40);
    v4 = a3;
  }
  if ( (_DWORD)a2 == 1 )
    return (unsigned int)Windows::Internal::COperationLambdaVar_0__lambda_9afbe6e87994f6867231074aca7528f3__Windows::Internal::CNoResult_::UnmarshalAndCall__(
                           a1,
                           a2,
                           &v4);
  return (unsigned int)a3;
}

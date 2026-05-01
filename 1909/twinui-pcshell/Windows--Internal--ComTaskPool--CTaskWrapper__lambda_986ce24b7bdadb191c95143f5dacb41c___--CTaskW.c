/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c___::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c_____lambda_986ce24b7bdadb191c95143f5dacb41c___ @ 0x18030A6FC
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_b572b7b401bca0583e7d35bf745a8e03___ @ 0x18030AC58 (CreationThreadDispatcher--RunAsync__lambda_b572b7b401bca0583e7d35bf745a8e03___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x1802E0A08 (_lambda_b572b7b401bca0583e7d35bf745a8e03_--_lambda_b572b7b401bca0583e7d35bf745a8e03_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c___::CTaskWrapper__lambda_986ce24b7bdadb191c95143f5dacb41c_____lambda_986ce24b7bdadb191c95143f5dacb41c___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_(a1 + 2, a2);
  v4 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != v4 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_1805BE738;
  return a1;
}

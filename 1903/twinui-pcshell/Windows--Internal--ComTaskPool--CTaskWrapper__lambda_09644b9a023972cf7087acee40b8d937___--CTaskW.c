/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09644b9a023972cf7087acee40b8d937___::CTaskWrapper__lambda_09644b9a023972cf7087acee40b8d937_____lambda_09644b9a023972cf7087acee40b8d937___ @ 0x1802E66C8
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___ @ 0x1802E6EC4 (CreationThreadDispatcher--RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x1802C14DC (_lambda_b572b7b401bca0583e7d35bf745a8e03_--_lambda_b572b7b401bca0583e7d35bf745a8e03_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09644b9a023972cf7087acee40b8d937___::CTaskWrapper__lambda_09644b9a023972cf7087acee40b8d937_____lambda_09644b9a023972cf7087acee40b8d937___(
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
  *a1 = off_180595DF0;
  return a1;
}

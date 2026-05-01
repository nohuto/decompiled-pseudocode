/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07_____lambda_70ef6d486f3f96eaef07ad25d0a0dd07___ @ 0x1802848F0
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180285488 (CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_ @ 0x1802863A0 (_lambda_69db3e9761c77a5f5df8b9f478688ffa_--_lambda_69db3e9761c77a5f5df8b9f478688ffa_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07___::CTaskWrapper__lambda_70ef6d486f3f96eaef07ad25d0a0dd07_____lambda_70ef6d486f3f96eaef07ad25d0a0dd07___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  lambda_69db3e9761c77a5f5df8b9f478688ffa_::_lambda_69db3e9761c77a5f5df8b9f478688ffa_(a1 + 2, a2);
  v4 = (_QWORD *)(a2 + 32);
  a1[6] = 0LL;
  if ( a1 + 6 != v4 )
  {
    a1[6] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_18050ACB8;
  return a1;
}

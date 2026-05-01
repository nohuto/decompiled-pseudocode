/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff_____lambda_521142a9b3d1e74a384fab04623ad1ff___ @ 0x180290B68
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180290C50 (CreationThreadDispatcher--RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x180290E28 (_lambda_f100e3a3eb499b75a430141e91e776cf_--_lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff_____lambda_521142a9b3d1e74a384fab04623ad1ff___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_(a1 + 2, a2);
  v4 = (_QWORD *)(a2 + 24);
  a1[5] = 0LL;
  if ( a1 + 5 != v4 )
  {
    a1[5] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_18050BFD0;
  return a1;
}

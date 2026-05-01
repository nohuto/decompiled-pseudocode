/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc___::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc_____lambda_858eee636f27872cdf74bbc97c00a8bc___ @ 0x180292D00
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_858eee636f27872cdf74bbc97c00a8bc___ @ 0x180292E70 (Windows--Internal--ComTaskPool--QueueTask__lambda_858eee636f27872cdf74bbc97c00a8bc___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc___::CTaskWrapper__lambda_858eee636f27872cdf74bbc97c00a8bc_____lambda_858eee636f27872cdf74bbc97c00a8bc___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  a1[4] = a2[2];
  a1[5] = a2[3];
  *a1 = off_18044CD80;
  return a1;
}

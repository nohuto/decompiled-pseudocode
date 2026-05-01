/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9___::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9_____lambda_2982927e39568cdd3df99df702aa65a9___ @ 0x180265180
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___ @ 0x180267090 (Windows--Internal--ComTaskPool--QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9___::CTaskWrapper__lambda_2982927e39568cdd3df99df702aa65a9_____lambda_2982927e39568cdd3df99df702aa65a9___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_180508658;
  return a1;
}

/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb___::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb_____lambda_b5ce8514cf5c64bd52309ed6df623feb___ @ 0x18016AAA4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b5ce8514cf5c64bd52309ed6df623feb___ @ 0x18016B2E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_b5ce8514cf5c64bd52309ed6df623feb___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb___::CTaskWrapper__lambda_b5ce8514cf5c64bd52309ed6df623feb_____lambda_b5ce8514cf5c64bd52309ed6df623feb___(
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
  *a1 = off_180438568;
  return a1;
}

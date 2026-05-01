/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c___::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c_____lambda_7d4fab6c161d4dc93915730d1208882c___ @ 0x1802D6544
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___ @ 0x1802D6C8C (Windows--Internal--ComTaskPool--QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c___::CTaskWrapper__lambda_7d4fab6c161d4dc93915730d1208882c_____lambda_7d4fab6c161d4dc93915730d1208882c___(
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
  *a1 = off_1805947B8;
  return a1;
}

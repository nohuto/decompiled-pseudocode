/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3_____lambda_799c8fcca6c2609bbf12201b8ac3c3e3___ @ 0x18008BD8C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___ @ 0x18008C428 (Windows--Internal--ComTaskPool--QueueTask__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3_____lambda_799c8fcca6c2609bbf12201b8ac3c3e3___(
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
  *a1 = off_18042CAD8;
  return a1;
}

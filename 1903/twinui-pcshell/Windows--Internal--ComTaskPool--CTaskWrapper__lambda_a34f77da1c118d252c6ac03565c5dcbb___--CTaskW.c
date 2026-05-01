/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb_____lambda_a34f77da1c118d252c6ac03565c5dcbb___ @ 0x18009BFB4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a34f77da1c118d252c6ac03565c5dcbb___ @ 0x18009C4D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a34f77da1c118d252c6ac03565c5dcbb___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb___::CTaskWrapper__lambda_a34f77da1c118d252c6ac03565c5dcbb_____lambda_a34f77da1c118d252c6ac03565c5dcbb___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[5] = a2[3];
  a1[6] = a2[4];
  a2[3] = 0LL;
  a2[4] = 0LL;
  *a1 = off_18042E960;
  return a1;
}

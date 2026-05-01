/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e_____lambda_eb7347f801496dc1bb0f8fceb055189e___ @ 0x18038E9DC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___ @ 0x18038ED48 (Windows--Internal--ComTaskPool--QueueTask__lambda_eb7347f801496dc1bb0f8fceb055189e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e___::CTaskWrapper__lambda_eb7347f801496dc1bb0f8fceb055189e_____lambda_eb7347f801496dc1bb0f8fceb055189e___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != v5 )
  {
    a1[4] = *v5;
    *v5 = 0LL;
  }
  *a1 = off_18047B680;
  return a1;
}

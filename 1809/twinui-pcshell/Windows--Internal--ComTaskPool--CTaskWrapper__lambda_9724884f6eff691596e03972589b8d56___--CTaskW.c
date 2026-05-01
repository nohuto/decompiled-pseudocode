/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56___::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56_____lambda_9724884f6eff691596e03972589b8d56___ @ 0x180091C5C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9724884f6eff691596e03972589b8d56___ @ 0x1800921F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_9724884f6eff691596e03972589b8d56___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56___::CTaskWrapper__lambda_9724884f6eff691596e03972589b8d56_____lambda_9724884f6eff691596e03972589b8d56___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 2;
  a1[3] = a2[1];
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  a1[5] = a2[3];
  *a1 = off_1803CB358;
  return a1;
}

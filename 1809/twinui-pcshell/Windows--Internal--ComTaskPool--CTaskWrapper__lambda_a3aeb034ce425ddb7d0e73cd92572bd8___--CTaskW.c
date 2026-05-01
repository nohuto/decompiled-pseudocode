/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a3aeb034ce425ddb7d0e73cd92572bd8___::CTaskWrapper__lambda_a3aeb034ce425ddb7d0e73cd92572bd8_____lambda_a3aeb034ce425ddb7d0e73cd92572bd8___ @ 0x18023CA90
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a3aeb034ce425ddb7d0e73cd92572bd8___ @ 0x18023CC00 (Windows--Internal--ComTaskPool--QueueTask__lambda_a3aeb034ce425ddb7d0e73cd92572bd8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a3aeb034ce425ddb7d0e73cd92572bd8___::CTaskWrapper__lambda_a3aeb034ce425ddb7d0e73cd92572bd8_____lambda_a3aeb034ce425ddb7d0e73cd92572bd8___(
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
  *a1 = off_1803E56E0;
  return a1;
}

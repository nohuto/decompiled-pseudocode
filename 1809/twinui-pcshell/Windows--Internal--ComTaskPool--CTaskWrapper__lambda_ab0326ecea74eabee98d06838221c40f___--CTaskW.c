/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f___::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f_____lambda_ab0326ecea74eabee98d06838221c40f___ @ 0x180091D30
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ab0326ecea74eabee98d06838221c40f___ @ 0x180092304 (Windows--Internal--ComTaskPool--QueueTask__lambda_ab0326ecea74eabee98d06838221c40f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f___::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f_____lambda_ab0326ecea74eabee98d06838221c40f___(
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
  *a1 = off_1803CB2E0;
  return a1;
}

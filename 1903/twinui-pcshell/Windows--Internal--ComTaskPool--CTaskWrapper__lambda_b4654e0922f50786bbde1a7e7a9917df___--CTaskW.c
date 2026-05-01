/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df___::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df_____lambda_b4654e0922f50786bbde1a7e7a9917df___ @ 0x18009C0AC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b4654e0922f50786bbde1a7e7a9917df___ @ 0x18009C600 (Windows--Internal--ComTaskPool--QueueTask__lambda_b4654e0922f50786bbde1a7e7a9917df___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df___::CTaskWrapper__lambda_b4654e0922f50786bbde1a7e7a9917df_____lambda_b4654e0922f50786bbde1a7e7a9917df___(
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
  *a1 = off_18042EA10;
  return a1;
}

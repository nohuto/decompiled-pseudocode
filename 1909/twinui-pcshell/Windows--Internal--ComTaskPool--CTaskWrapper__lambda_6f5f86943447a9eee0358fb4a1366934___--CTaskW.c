/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934_____lambda_6f5f86943447a9eee0358fb4a1366934___ @ 0x1800A91BC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6f5f86943447a9eee0358fb4a1366934___ @ 0x1800A965C (Windows--Internal--ComTaskPool--QueueTask__lambda_6f5f86943447a9eee0358fb4a1366934___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934___::CTaskWrapper__lambda_6f5f86943447a9eee0358fb4a1366934_____lambda_6f5f86943447a9eee0358fb4a1366934___(
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
  *a1 = off_18044E4C8;
  return a1;
}

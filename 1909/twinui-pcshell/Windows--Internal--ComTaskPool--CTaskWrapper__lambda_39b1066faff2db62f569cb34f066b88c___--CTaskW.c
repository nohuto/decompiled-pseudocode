/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c___::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c_____lambda_39b1066faff2db62f569cb34f066b88c___ @ 0x1800A9078
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_39b1066faff2db62f569cb34f066b88c___ @ 0x1800A94A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_39b1066faff2db62f569cb34f066b88c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c___::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c_____lambda_39b1066faff2db62f569cb34f066b88c___(
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
  *a1 = off_18044E4A0;
  return a1;
}

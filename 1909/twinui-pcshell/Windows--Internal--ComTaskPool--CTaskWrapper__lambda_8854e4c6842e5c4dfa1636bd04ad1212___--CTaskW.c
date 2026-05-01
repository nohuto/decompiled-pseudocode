/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212_____lambda_8854e4c6842e5c4dfa1636bd04ad1212___ @ 0x180129228
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8854e4c6842e5c4dfa1636bd04ad1212___ @ 0x18012AEE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_8854e4c6842e5c4dfa1636bd04ad1212___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212___::CTaskWrapper__lambda_8854e4c6842e5c4dfa1636bd04ad1212_____lambda_8854e4c6842e5c4dfa1636bd04ad1212___(
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
  *a1 = off_180452CF0;
  return a1;
}

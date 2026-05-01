/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239_____lambda_3e36c0c19c22f9cf4c6b211da264d239___ @ 0x18040EBF0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3e36c0c19c22f9cf4c6b211da264d239___ @ 0x18040EC5C (Windows--Internal--ComTaskPool--QueueTask__lambda_3e36c0c19c22f9cf4c6b211da264d239___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x18014E058 (--0CMarshaledInterface@@QEAA@$$QEAV0@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239_____lambda_3e36c0c19c22f9cf4c6b211da264d239___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  CMarshaledInterface::CMarshaledInterface(a1 + 2, (_QWORD *)a2);
  *(_QWORD *)(v4 + 8) = 0LL;
  v5 = (_QWORD *)(a2 + 8);
  if ( v4 + 8 != a2 + 8 )
  {
    *(_QWORD *)(v4 + 8) = *v5;
    *v5 = 0LL;
  }
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v4 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  *a1 = off_180466B00;
  return a1;
}

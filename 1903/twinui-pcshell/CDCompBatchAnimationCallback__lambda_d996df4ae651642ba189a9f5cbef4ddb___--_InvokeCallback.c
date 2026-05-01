/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1803C5534
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnAnimationCompleted @ 0x1803C28D0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnEndBatchUpdate @ 0x1803C29C0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x1803C55C0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___ @ 0x1803C02C4 (Windows--Internal--ComTaskPool--QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer @ 0x1803C5374 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_CleanupTimer.c)
 */

void __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 28) != 3 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = v2;
    if ( v2 )
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 68));
    Windows::Internal::ComTaskPool::QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___(a1, &v3);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v3);
    *(_DWORD *)(a1 + 28) = 3;
    CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CleanupTimer(a1);
  }
}

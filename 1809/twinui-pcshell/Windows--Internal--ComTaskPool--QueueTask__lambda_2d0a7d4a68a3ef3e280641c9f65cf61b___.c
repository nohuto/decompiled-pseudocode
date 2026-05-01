/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___ @ 0x1802EEC90
 * Callers:
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x1802EEB94 (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 *     ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x18030F320 (-SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b_____lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___ @ 0x1802EEC00 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2d0a7d4a68a3e.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___(
        unsigned int a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  volatile int *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b_____lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___(
         &v10,
         a2);
  v5 = *v3;
  *v3 = 0LL;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v6,
      v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}

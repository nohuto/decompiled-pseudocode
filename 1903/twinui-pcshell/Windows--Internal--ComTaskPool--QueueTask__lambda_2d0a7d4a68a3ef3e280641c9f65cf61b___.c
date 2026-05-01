/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___ @ 0x18034F780
 * Callers:
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x18034F684 (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 *     ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x18036F970 (-SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b_____lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___ @ 0x18034F6F0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2d0a7d4a68a3e.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___(
        unsigned int a1,
        _QWORD *a2)
{
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d0a7d4a68a3ef3e280641c9f65cf61b_____lambda_2d0a7d4a68a3ef3e280641c9f65cf61b___(
         &v9,
         a2);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}

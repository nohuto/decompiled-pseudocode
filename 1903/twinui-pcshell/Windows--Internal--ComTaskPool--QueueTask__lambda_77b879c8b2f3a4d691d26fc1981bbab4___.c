/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_77b879c8b2f3a4d691d26fc1981bbab4___ @ 0x18014FB6C
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4c147fb6a47efb81ccd447cc9a964fa___ @ 0x18015022C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d4c147fb6a47efb81ccd447cc9a964fa___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_77b879c8b2f3a4d691d26fc1981bbab4_____lambda_77b879c8b2f3a4d691d26fc1981bbab4___ @ 0x18014F790 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_77b879c8b2f3a.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_77b879c8b2f3a4d691d26fc1981bbab4___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_77b879c8b2f3a4d691d26fc1981bbab4_____lambda_77b879c8b2f3a4d691d26fc1981bbab4___(
         &v10,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}

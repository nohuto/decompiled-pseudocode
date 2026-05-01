/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_07f8ea383e36690a5ebaa5890ffd342e___ @ 0x18024670C
 * Callers:
 *     ?OnViewPositionChanged@TitleBarController@@UEAAXPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802493E0 (-OnViewPositionChanged@TitleBarController@@UEAAXPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07f8ea383e36690a5ebaa5890ffd342e_____lambda_07f8ea383e36690a5ebaa5890ffd342e___ @ 0x1802460E0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_07f8ea383e366.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_07f8ea383e36690a5ebaa5890ffd342e___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07f8ea383e36690a5ebaa5890ffd342e_____lambda_07f8ea383e36690a5ebaa5890ffd342e___(
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
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}

/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x180267A04
 * Callers:
 *     ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x18026A30C (-ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9_____lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x18026662C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c4847642c4b8.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        volatile signed __int32 *a5,
        _QWORD *a6)
{
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  unsigned int v10; // edi

  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9_____lambda_3c4847642c4b84887b271ddb5cdb57d9___(
         &a5,
         a6);
  v8 = *v7;
  *v7 = 0LL;
  v9 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v9);
  }
  v10 = SHTaskPoolQueueTask(3LL, 0LL, a3, 16000LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  return v10;
}

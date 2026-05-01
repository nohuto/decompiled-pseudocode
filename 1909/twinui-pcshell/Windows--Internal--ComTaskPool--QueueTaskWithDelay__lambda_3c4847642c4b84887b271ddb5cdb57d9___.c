/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x180286F10
 * Callers:
 *     ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x1802897DC (-ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9_____lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x180285BFC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c4847642c4b8.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edi

  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9_____lambda_3c4847642c4b84887b271ddb5cdb57d9___(
         &a5,
         a6);
  v9 = *v7;
  *v7 = 0LL;
  v10 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v10,
      v8);
  }
  v11 = SHTaskPoolQueueTask(3LL, 0LL, a3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v11;
}

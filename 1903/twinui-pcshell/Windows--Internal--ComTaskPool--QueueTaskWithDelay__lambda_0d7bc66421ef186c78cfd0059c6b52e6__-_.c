/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_0d7bc66421ef186c78cfd0059c6b52e6__&_ @ 0x180219B50
 * Callers:
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18021D7E0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0d7bc66421ef186c78cfd0059c6b52e6__&___lambda_0d7bc66421ef186c78cfd0059c6b52e6__&_ @ 0x180219718 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0d7bc66421ef1.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_0d7bc66421ef186c78cfd0059c6b52e6____(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        _QWORD *a4)
{
  volatile signed __int32 **v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0d7bc66421ef186c78cfd0059c6b52e6______lambda_0d7bc66421ef186c78cfd0059c6b52e6____(
         &v10,
         a4);
  v5 = *v4;
  *v4 = 0LL;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 1000LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}

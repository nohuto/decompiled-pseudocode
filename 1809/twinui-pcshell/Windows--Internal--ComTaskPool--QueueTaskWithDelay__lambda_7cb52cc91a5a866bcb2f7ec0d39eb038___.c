/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___ @ 0x18007ACAC
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001E254 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038_____lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___ @ 0x18007AD28 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cb52cc91a5a8.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edi

  v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038_____lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___(
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
  v11 = SHTaskPoolQueueTask(3LL, 0LL, a3, 120000LL, v9, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v11;
}

/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x180102EAC
 * Callers:
 *     ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x180103B50 (-HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x180102C44 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b88b1fef1c8f0.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char *a4)
{
  __int64 *v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
         v11,
         a4);
  v7 = *v5;
  *v5 = 0LL;
  v8 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v8,
      v6);
  }
  v9 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}

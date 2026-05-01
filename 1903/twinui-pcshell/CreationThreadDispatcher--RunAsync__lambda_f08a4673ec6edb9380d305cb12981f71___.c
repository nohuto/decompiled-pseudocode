/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_f08a4673ec6edb9380d305cb12981f71___ @ 0x1801ABA14
 * Callers:
 *     _lambda_3c66dbed918b087d97bd7c77922d4082_::operator() @ 0x1801AC25C (_lambda_3c66dbed918b087d97bd7c77922d4082_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5f452d4eb5fa11d9ee81a0ba54fd3c3_____lambda_c5f452d4eb5fa11d9ee81a0ba54fd3c3___ @ 0x1801AB588 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c5f452d4eb5fa.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_f08a4673ec6edb9380d305cb12981f71___(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  volatile signed __int32 *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v7 = a2;
  v8 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5f452d4eb5fa11d9ee81a0ba54fd3c3_____lambda_c5f452d4eb5fa11d9ee81a0ba54fd3c3___(
         &v9,
         &v7);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v4);
  }
  v5 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v3, 0LL);
  if ( v3 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  return v5;
}

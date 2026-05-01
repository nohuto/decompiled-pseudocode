/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_23fac776ba4fa664bf014b45da4dfe94___ @ 0x1801BA808
 * Callers:
 *     wistd::__function::__func__lambda_b82da5bbb800437035a9a6ad2ecb5742__void___cdecl(int_const_&)_::operator() @ 0x1801BBBA0 (wistd--__function--__func__lambda_b82da5bbb800437035a9a6ad2ecb5742__void___cdecl(int_const_-)_--.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46dfdf5b90295fe2b419b6c10b236471_____lambda_46dfdf5b90295fe2b419b6c10b236471___ @ 0x1801BA4F4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46dfdf5b90295.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_23fac776ba4fa664bf014b45da4dfe94___(
        __int64 a1,
        __int128 *a2)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  unsigned int v5; // edi
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v8[0] = a1;
  v7 = *a2;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46dfdf5b90295fe2b419b6c10b236471_____lambda_46dfdf5b90295fe2b419b6c10b236471___(
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
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  return v5;
}

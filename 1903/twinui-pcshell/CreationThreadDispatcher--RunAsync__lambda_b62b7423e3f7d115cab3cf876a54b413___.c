/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___ @ 0x1802DEDFC
 * Callers:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXXZ @ 0x1802E3BC4 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0db35552d5a48fd24de1832dd95f4064_____lambda_0db35552d5a48fd24de1832dd95f4064___ @ 0x1802DE898 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0db35552d5a48.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  volatile signed __int32 **v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF
  volatile signed __int32 *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v3 = *a2;
  *a2 = 0LL;
  v10 = v3;
  v11 = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0db35552d5a48fd24de1832dd95f4064_____lambda_0db35552d5a48fd24de1832dd95f4064___(
         &v12,
         &v10);
  v5 = *v4;
  *v4 = 0LL;
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v6);
  }
  v7 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  v8 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}

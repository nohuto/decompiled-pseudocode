/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x1801F606C
 * Callers:
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x1801F6680 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800B0B60 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18011FAB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CE1E8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___ @ 0x1801F5CFC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___--CTaskW.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v5; // r10
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rax
  void *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // esi
  std::_Ref_count_base *v11; // rcx
  volatile int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+48h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = a1;
  v5 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      (volatile int *)a2);
  v16 = v5;
  v13 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v14 = v6;
  v7 = *(std::_Ref_count_base **)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v15 = v7;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(
      v5,
      (volatile int *)a2);
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
    v9 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___(
           (__int64)v8,
           (__int64)&v13);
  v10 = SHTaskPoolQueueTask(3LL, a3 != 0 ? 2 : 0, a3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v16);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v17);
  v11 = *(std::_Ref_count_base **)(a2 + 16);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v10;
}

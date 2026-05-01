/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180350D5C
 * Callers:
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z @ 0x1803531C0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAXIIII@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800B0B60 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18011FAB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CE1E8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___ @ 0x1803503D4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___--CTaskW.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r11
  __int64 v3; // r10
  void *v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  v2 = a2;
  v3 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  v9 = *((_QWORD *)v2 + 2);
  v10 = v3;
  v8 = *(_OWORD *)v2;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(
      v3,
      a2);
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___(
           (__int64)v4,
           (__int64)&v8);
  v6 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  return v6;
}

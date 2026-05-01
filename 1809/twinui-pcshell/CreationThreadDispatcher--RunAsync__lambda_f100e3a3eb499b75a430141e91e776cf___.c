/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180290C50
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180291264 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDesktopOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DEB10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedDeskto.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800DF744 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F8F4 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff_____lambda_521142a9b3d1e74a384fab04623ad1ff___ @ 0x180290B68 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___--CTaskW.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x180290E28 (_lambda_f100e3a3eb499b75a430141e91e776cf_--_lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x180291050 (_lambda_f100e3a3eb499b75a430141e91e776cf_--__lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___(
        __int64 a1,
        volatile int *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // esi
  _BYTE v8[24]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
      a1,
      a2);
  lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_(v8, a2);
  v9 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::AddRef(a1);
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff_____lambda_521142a9b3d1e74a384fab04623ad1ff___(
           v4,
           (__int64)v8);
  v6 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v9);
  lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(v8);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(a2);
  return v6;
}

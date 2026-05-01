/*
 * XREFs of ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180306440
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1802F7E60 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___ @ 0x1802F0438 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___--CTaskW.c)
 */

void __fastcall CMultitaskingViewControllerBase::InvokeSwitchItem(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2)
{
  IUnknown *v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  DWORD CurrentThreadId; // eax
  IUnknown *v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+38h] [rbp-8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  IUnknown *v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  (**(void (__fastcall ***)(struct ISwitchItem *, GUID *, __int64 *))a2)(
    a2,
    &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
    &v10);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v12);
  v11 = (IUnknown *)*((_QWORD *)this + 4);
  v4 = v11;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  CoAllowSetForegroundWindow(v4, 0LL);
  v8 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v9 = v12;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  v5 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9___::CTaskWrapper__lambda_b42749407685350f498990f0e2f6d0f9_____lambda_b42749407685350f498990f0e2f6d0f9___(
           v6,
           &v8);
  CurrentThreadId = GetCurrentThreadId();
  SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}

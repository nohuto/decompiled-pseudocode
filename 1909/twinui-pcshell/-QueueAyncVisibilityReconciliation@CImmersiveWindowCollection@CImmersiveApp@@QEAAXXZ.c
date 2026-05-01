/*
 * XREFs of ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180166F58
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18000F464 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18003C528 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_ @ 0x180160110 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--CAsyncCallbackWithLambda_.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = *((_QWORD *)this + 20);
  v2 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  v5[0] = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  v5[1] = (__int64)this;
  v3 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____(
           v4,
           v5);
  v7 = v3;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 19) + 232LL))(*((_QWORD *)this + 19), v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

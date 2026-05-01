/*
 * XREFs of ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180045B9C
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180042E70 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180045AD8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___ptr64___lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___ptr64_ @ 0x180045C80 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  __int64 *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64___lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h]

  v2 = *((_QWORD *)this + 20);
  v11 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v8[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v8[1] = this;
  CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64___lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64___lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64_(&v9, v8);
  v6 = *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64___lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64;
  v10 = *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64___lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64;
  *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64___lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64 = 0LL;
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
      v7,
      v4,
      v5);
  }
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 208LL))(*((_QWORD *)this + 19), v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

/*
 * XREFs of ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180014DA8
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180014CE4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180033070 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&_ @ 0x180014E8C (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005FB10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  __int64 *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h]

  v2 = *((_QWORD *)this + 20);
  v10 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v7[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v7[1] = this;
  CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94____(&v8, v7);
  v5 = *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94;
  v9 = *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94;
  *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______lambda_cdc0901c64cfd553c7adcb23aa5d4b94 = 0LL;
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
      v6,
      v4);
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 19) + 232LL))(*((_QWORD *)this + 19), v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

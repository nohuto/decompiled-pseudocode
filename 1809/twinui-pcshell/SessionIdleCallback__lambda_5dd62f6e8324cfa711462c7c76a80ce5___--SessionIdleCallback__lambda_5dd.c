/*
 * XREFs of SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___ @ 0x1803B0FAC
 * Callers:
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5__&___ptr64_ @ 0x1803B0F1C (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____l.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveSessionIdleNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_1803FF420;
  v4 = *a2;
  *(_QWORD *)(a1 + 16) = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 24) = a2[1];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return a1;
}

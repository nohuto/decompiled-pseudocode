/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b2b7c827043e561534a3070ae614540d___ @ 0x18024EDD4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_f51dfb545d2092f53a09626c96ba7267___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180250630 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_180250630.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b2b7c827043e561534a3070ae614540d___(
        unsigned int a1,
        unsigned int a2,
        __int128 *a3)
{
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int128 v9; // xmm0
  int v10; // ebx
  APTTYPEQUALIFIER v12[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v14, v12) < 0 || !v14 || v14 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v13 = 0;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v9 = *a3;
    v7 = v8;
    *v8 = off_1803E7B68;
    v8[4] = &v13;
    *((_OWORD *)v8 + 1) = v9;
  }
  v10 = SHTaskPoolQueueTask(v5, 32LL, a2, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v10 >= 0 )
    return v13;
  return (unsigned int)v10;
}

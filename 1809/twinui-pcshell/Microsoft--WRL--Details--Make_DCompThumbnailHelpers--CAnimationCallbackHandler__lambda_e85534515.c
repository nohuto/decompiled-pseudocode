/*
 * XREFs of Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_____lambda_e855345159ffcf8e8cf911d9c3e7f6ed__&___ptr64__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&___ptr64_IDCompBatchAnimationCallback_____ptr64_&___ptr64_ @ 0x18037127C
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180371098 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_e855345159ffcf8e8cf911d9c3e7f.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x1802684A4 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x180310E24 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

IApplicationViewChangeListener **__fastcall Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_____lambda_e855345159ffcf8e8cf911d9c3e7f6ed______ptr64__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e______ptr64_IDCompBatchAnimationCallback_____ptr64_____ptr64_(
        IApplicationViewChangeListener **a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  IApplicationViewChangeListener *v7; // rax
  IApplicationViewChangeListener *v8; // rbx
  __int64 v9; // rsi

  *a1 = 0LL;
  v7 = (IApplicationViewChangeListener *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v9 = *a4;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(v7);
    *(_QWORD *)v8 = off_1803FC310;
    lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_((__int64 *)v8 + 3, a3);
    *((_QWORD *)v8 + 5) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( *a1 )
      (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v8;
  }
  return a1;
}

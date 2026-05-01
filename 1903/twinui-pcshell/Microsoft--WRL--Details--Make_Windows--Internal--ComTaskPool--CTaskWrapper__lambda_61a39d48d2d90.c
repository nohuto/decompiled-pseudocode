/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___ @ 0x18006AAD4
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x18006A9DC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61a39d48d2d904a91076d611a129569d_____lambda_61a39d48d2d904a91076d611a129569d___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5[2] = 0LL;
    if ( v5 + 2 != a2 )
    {
      v5[2] = *a2;
      *a2 = 0LL;
    }
    v5[3] = a2[1];
    *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 1);
    v5[6] = a2[4];
    *v5 = off_18042A748;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}

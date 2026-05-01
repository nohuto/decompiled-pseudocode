/*
 * XREFs of ??$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncCallbackDispatcher@@@Z @ 0x1801AB83C
 * Callers:
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1801B24DC (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NonAgileDispatcher,IAsyncCallbackDispatcher,>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx
  unsigned int v4; // edi
  _DWORD *v5; // rcx

  *a1 = 0LL;
  v2 = (volatile signed __int32 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallbackDispatcher>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &NonAgileDispatcher::`vftable';
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = 0;
    }
    else if ( InlineIsEqualGUID(v5, v5) )
    {
      *a1 = v3;
      v4 = 0;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}

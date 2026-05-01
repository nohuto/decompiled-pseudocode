/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ddbee8e95455bbdc724008023ce14367____long_&__lambda_ddbee8e95455bbdc724008023ce14367___ @ 0x180028640
 * Callers:
 *     ?OnWindowAdded@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@3456@@Z @ 0x180028560 (-OnWindowAdded@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@In.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ddbee8e95455bbdc724008023ce14367____long____lambda_ddbee8e95455bbdc724008023ce14367___(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int128 v8; // xmm0

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v8 = *a3;
    *((_QWORD *)v7 + 4) = a2;
    *(_QWORD *)v7 = off_180446678;
    *((_OWORD *)v7 + 1) = v8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v7;
  }
  return a1;
}

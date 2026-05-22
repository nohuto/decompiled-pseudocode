/*
 * XREFs of ??1DWMCursorBroker@@MEAA@XZ @ 0x18014325C
 * Callers:
 *     ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x18014368C (--_GDWMCursorBroker@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800D36FC (-clear@-$list@U-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 */

void __fastcall DWMCursorBroker::~DWMCursorBroker(DWMCursorBroker *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx
  _QWORD **v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  void *v15; // rcx

  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  v2 = (_QWORD *)((char *)this + 216);
  v3 = 10LL;
  do
  {
    if ( *v2 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 152LL))(*((_QWORD *)this + 22));
      *v2 = 0LL;
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  v4 = *((_QWORD *)this + 59);
  if ( v4 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, (char *)this + 16);
  v5 = *((_QWORD *)this + 63);
  if ( v5 )
  {
    *((_QWORD *)this + 63) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 60);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(84 * ((*((_QWORD *)this + 62) - (_QWORD)v6) / 84LL)));
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
  }
  v7 = *((_QWORD *)this + 59);
  if ( v7 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 25);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 22);
  v10 = (void *)*((_QWORD *)this + 17);
  if ( v10 )
  {
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  v11 = (_QWORD **)*((_QWORD *)this + 15);
  v12 = *v11;
  *v11 = v11;
  *(_QWORD *)(*((_QWORD *)this + 15) + 8LL) = *((_QWORD *)this + 15);
  *((_QWORD *)this + 16) = 0LL;
  v13 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v12 != v13 )
  {
    do
    {
      v14 = (_QWORD *)*v12;
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x28);
      v12 = v14;
      v13 = (_QWORD *)*((_QWORD *)this + 15);
    }
    while ( v14 != v13 );
  }
  std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)0x28);
  v15 = (void *)*((_QWORD *)this + 9);
  if ( v15 )
  {
    std::_Deallocate<16,0>(
      v15,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  std::list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::clear((__int64)this + 56);
  std::_Deallocate<16,0>(*((void **)this + 7), (const struct std::nothrow_t *)0x28);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}

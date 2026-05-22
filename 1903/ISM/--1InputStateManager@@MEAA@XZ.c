/*
 * XREFs of ??1InputStateManager@@MEAA@XZ @ 0x180092698
 * Callers:
 *     ??_GInputStateManager@@MEAAPEAXI@Z @ 0x18009286C (--_GInputStateManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x18005675C (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 */

void __fastcall InputStateManager::~InputStateManager(InputStateManager *this)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64 *); // rbx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 10);
  for ( i = *((_QWORD *)this + 9); i != v2; i += 16LL )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 16LL))(*(_QWORD *)(i + 8));
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 5);
  v4 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 8) )
  {
    v9 = 0LL;
    v5 = *v4;
    v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 24LL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v9);
    if ( v6(v5, &v9) >= 0 )
      (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v9 + 48LL))(
        v9,
        L"System\\Input\\DeviceCommandEndpoint",
        1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 152LL))(*v4, *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v9);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 21);
  v7 = (void *)*((_QWORD *)this + 15);
  if ( v7 )
  {
    std::_Deallocate<16,0>(
      v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 17) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)this + 104);
  std::_Deallocate<16,0>(*((void **)this + 13), (const struct std::nothrow_t *)0x20);
  v8 = (void *)*((_QWORD *)this + 9);
  if ( v8 )
  {
    std::_Deallocate<16,0>(
      v8,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}

/*
 * XREFs of ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x1802E82A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x1802E8A8C (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
LRESULT __fastcall AltTabWindowHook::AltTabHookProc(int code, WPARAM wParam, int *lParam)
{
  int v6; // r9d
  PSRWLOCK *v7; // rsi
  PSRWLOCK *v8; // rbp
  PSRWLOCK v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdi
  PSRWLOCK v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h]
  RTL_SRWLOCK *v16; // [rsp+98h] [rbp+20h]

  v6 = *lParam;
  if ( (((_DWORD)wParam - 257) & 0xFFFFFFFB) == 0
    && (v6 == 18 || (unsigned int)(v6 - 164) <= 1)
    && (lParam[2] & 0x20) == 0 )
  {
    AcquireSRWLockShared(&AltTabWindowHook::s_altTabHookLock);
    v16 = &AltTabWindowHook::s_altTabHookLock;
    v7 = (PSRWLOCK *)AltTabWindowHook::s_altTabHooks;
    v8 = (PSRWLOCK *)xmmword_18059A188;
    while ( v7 != v8 )
    {
      v9 = *v7;
      AcquireSRWLockShared(*v7);
      v14 = v9;
      if ( v9[1].Ptr )
      {
        v10 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAltTabViewController__, &v9[1]);
        v11 = __abi_winrt_ptr_ctor(v10);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
      }
      else
      {
        if ( v9 )
          ReleaseSRWLockShared(v9);
        v11 = 0LL;
      }
      v15 = v11;
      v12 = __abi_winrt_ptr_ctor(v11);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v12 )
      {
        XamlAltTabViewController::OnAltKeyUp(v12);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v7 += 2;
    }
    ReleaseSRWLockShared(&AltTabWindowHook::s_altTabHookLock);
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}

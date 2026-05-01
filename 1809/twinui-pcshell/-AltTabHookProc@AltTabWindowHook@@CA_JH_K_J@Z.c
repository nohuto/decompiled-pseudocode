/*
 * XREFs of ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x18028EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x18028F35C (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
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
    v8 = (PSRWLOCK *)xmmword_18050FDD8;
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
        CAutoSRWSharedLock::~CAutoSRWSharedLock(&v14);
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

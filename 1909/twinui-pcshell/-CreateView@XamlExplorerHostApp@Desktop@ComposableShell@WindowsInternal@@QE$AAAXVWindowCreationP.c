/*
 * XREFs of ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802D7558
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D4090 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180181AF8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1802D64A4 (_lambda_d1cc878f49256a12ed651bb70f914db7_--_lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802D65F4 (--0-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Det.c)
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1802D66C0 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--ScopeExitFn__lambda_d1cc8.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1802D6A94 (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802D70FC (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     ?push_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXAEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802DAE40 (-push_back@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rsi
  Platform::Details *v9; // rdi
  Platform::Details *v10; // rax
  __int64 WeakReference; // rbx
  _DWORD *v12; // rdi
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-71h] BYREF
  __int64 v16[3]; // [rsp+30h] [rbp-69h] BYREF
  char v17; // [rsp+48h] [rbp-51h]
  __int64 v18[6]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v19; // [rsp+80h] [rbp-19h]
  int v20; // [rsp+90h] [rbp-9h]
  _QWORD v21[3]; // [rsp+98h] [rbp-1h] BYREF
  char v22; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v18[3] = -2LL;
  v15 = __abi_winrt_ptr_ctor(a3);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 104));
  if ( v5 )
    std::_Throw_C_error(v5);
  std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::push_back(a1 + 184, &v15);
  v6 = _Mtx_unlock((_Mtx_t)(a1 + 104));
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = __abi_winrt_ptr_ctor(a1);
  v18[4] = v7;
  v8 = v15;
  if ( v15 )
  {
    v10 = (Platform::Details *)Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v9 = Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
           v10,
           v8);
  }
  else
  {
    v9 = 0LL;
  }
  WeakReference = Platform::Details::GetWeakReference(v9);
  if ( v9 )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v9 + 16LL))(v9);
  v18[0] = __abi_winrt_ptr_ctor(a1);
  v18[1] = __abi_winrt_ptr_ctor(v7);
  v18[2] = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_(v16, v18);
  v17 = 1;
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v18);
  v19 = *a2;
  v20 = *((_DWORD *)a2 + 4);
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)v21,
    (__int64)v16);
  v12 = operator new(0x38uLL);
  *(_OWORD *)v12 = v19;
  v12[4] = v20;
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)(v12 + 6),
    (__int64)v21);
  v18[5] = (__int64)v12;
  if ( v22 )
  {
    v22 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)v21);
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v21);
  if ( !SHCreateThread(
          (LPTHREAD_START_ROUTINE)lambda_05f458ff3b283a3e9a9130333ab0a931_::_lambda_invoker_cdecl_,
          v12,
          0,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x55,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
      v13);
  if ( v17 )
  {
    v17 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((__int64)v16);
  }
  result = lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v16);
  if ( WeakReference )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  if ( v7 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return result;
}

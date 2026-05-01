/*
 * XREFs of ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x180214C14
 * Callers:
 *     ?DisconnectFromPresentationLayer@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x18020ED50 (-DisconnectFromPresentationLayer@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEA.c)
 *     ?RegisterForShellHooks@TitleBarController@@AEAAJXZ @ 0x1802498BC (-RegisterForShellHooks@TitleBarController@@AEAAJXZ.c)
 *     ?UnregisterFromShellHooks@TitleBarController@@AEAAXXZ @ 0x18024A340 (-UnregisterFromShellHooks@TitleBarController@@AEAAXXZ.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEBV01@@Z @ 0x18020D7C4 (--4-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SmartCookie::Swap(SmartCookie *this, struct SmartCookie *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  _BYTE v6[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v7[104]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE *v8; // [rsp+A0h] [rbp-28h]

  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    v8 = v7;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 8LL))(v4, v7);
  }
  else
  {
    v8 = 0LL;
  }
  v5 = *((_DWORD *)this + 30);
  wistd::function<long (unsigned long)>::operator=((__int64)this, (__int64)a2);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  wistd::function<long (unsigned long)>::operator=((__int64)a2, (__int64)v6);
  *((_DWORD *)a2 + 30) = v5;
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v6);
}

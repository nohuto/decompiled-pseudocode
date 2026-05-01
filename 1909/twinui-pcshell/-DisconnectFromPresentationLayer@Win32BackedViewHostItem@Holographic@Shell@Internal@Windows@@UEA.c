/*
 * XREFs of ?DisconnectFromPresentationLayer@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x18022E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x180233FB4 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::DisconnectFromPresentationLayer(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  _BYTE v4[112]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v5; // [rsp+A0h] [rbp-28h]
  int v6; // [rsp+A8h] [rbp-20h]

  v5 = 0LL;
  v6 = 0;
  v2 = this + 24;
  AcquireSRWLockExclusive(this + 24);
  SmartCookie::Swap((SmartCookie *)&this[29], (struct SmartCookie *)v4);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  SmartCookie::Unregister((SmartCookie *)v4);
  SmartCookie::Unregister((SmartCookie *)v4);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v4);
  return 0LL;
}

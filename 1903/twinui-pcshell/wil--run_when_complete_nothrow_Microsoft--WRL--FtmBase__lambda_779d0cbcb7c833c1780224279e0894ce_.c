/*
 * XREFs of wil::run_when_complete_nothrow_Microsoft::WRL::FtmBase__lambda_779d0cbcb7c833c1780224279e0894ce__&_ @ 0x18020B6E0
 * Callers:
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802118D0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$RunWhenCompleteAction@VFtmBase@WRL@Microsoft@@PEAUIAsyncAction@Foundation@Windows@@V?$function@$$A6AJJ@Z@wistd@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@$$QEAV?$function@$$A6AJJ@Z@wistd@@@Z @ 0x18020AA10 (--$RunWhenCompleteAction@VFtmBase@WRL@Microsoft@@PEAUIAsyncAction@Foundation@Windows@@V-$functio.c)
 */

__int64 __fastcall wil::run_when_complete_nothrow_Microsoft::WRL::FtmBase__lambda_779d0cbcb7c833c1780224279e0894ce____(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v6[15]; // [rsp+28h] [rbp-90h] BYREF

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v6[2] = v2;
  v6[0] = &off_18042E390;
  v6[1] = *a2;
  v6[13] = v6;
  v3 = wil::details::RunWhenCompleteAction<Microsoft::WRL::FtmBase,Windows::Foundation::IAsyncAction *,wistd::function<long (long)>>(
         a1,
         (__int64)v5);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v5);
  return v3;
}

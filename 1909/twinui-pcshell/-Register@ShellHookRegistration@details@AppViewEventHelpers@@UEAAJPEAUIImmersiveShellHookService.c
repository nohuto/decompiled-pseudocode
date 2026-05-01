/*
 * XREFs of ?Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService@@@Z @ 0x180326280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800547D0 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801286A8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVShellHookRegistration@details@AppViewEventHelpers@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVShellHookRegistration@details@AppViewEventHelpers@@@Z @ 0x1803209D8 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotif_ea_1803209D8.c)
 *     ??$make_unique@VSmartCookie@@$$V$0A@@std@@YA?AV?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@0@XZ @ 0x180321018 (--$make_unique@VSmartCookie@@$$V$0A@@std@@YA-AV-$unique_ptr@VSmartCookie@@U-$default_delete@VSma.c)
 *     ??4?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180321E58 (--4-$unique_ptr@VSmartCookie@@U-$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::details::ShellHookRegistration::Register(
        AppViewEventHelpers::details::ShellHookRegistration *this,
        struct IImmersiveShellHookService *a2)
{
  struct IImmersiveShellHookService *v4; // rdx
  SmartCookie *v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // edi
  SmartCookie *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  SmartCookie *v12; // [rsp+70h] [rbp+18h] BYREF

  std::make_unique<SmartCookie,,0>(&v12);
  v4 = a2;
  v5 = v12;
  v7 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,AppViewEventHelpers::details::ShellHookRegistration *>(
         (__int64)v12,
         (__int64)v4,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 7);
    std::unique_ptr<SmartCookie>::operator=((SmartCookie **)this + 6, &v12);
    if ( this != (AppViewEventHelpers::details::ShellHookRegistration *)-56LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 7);
    v10 = v12;
    if ( v12 )
    {
      SmartCookie::Unregister(v12);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v10);
      operator delete(v10, (const struct std::nothrow_t *)0x80);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appvieweventhelpers.h",
      (const char *)(unsigned int)v7);
    if ( v5 )
    {
      SmartCookie::Unregister(v5);
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v5);
      operator delete(v5, (const struct std::nothrow_t *)0x80);
    }
    return v8;
  }
}

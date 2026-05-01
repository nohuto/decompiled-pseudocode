/*
 * XREFs of ?SubscribeToServices@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x18020D880
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@@SmartCookie@@QEAAJPEAUISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMediator@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18020A4A8 (--$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVTabSetMedia.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::SubscribeToServices(
        Windows::Internal::ComposableShell::Tabs::TabSetMediator *this,
        struct IServiceProvider *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v4 = (__int64 *)((char *)this + 136);
    v5 = *((_QWORD *)this + 17);
    *v4 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           v4);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        37LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v6);
    v8 = SmartCookie::Register<ISnapComponent,long (ISnapComponent::*)(IWindowSnappingEvents *,unsigned long *),long (ISnapComponent::*)(unsigned long),Windows::Internal::ComposableShell::Tabs::TabSetMediator *>(
           (__int64)this + 144,
           *v4,
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        42LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v8);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 36);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &unk_1804785E8,
           &GUID_c07fc549_09c7_480a_855c_3d8a695f82c3,
           (char *)this + 288);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        44LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 37);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
            (char *)this + 296);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        45LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
                           v11);
  }
  return result;
}

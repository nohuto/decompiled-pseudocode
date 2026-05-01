/*
 * XREFs of ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@AEB$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@1@AEB$$T@Z @ 0x1801C1CF8
 * Callers:
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x1801C1808 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventH.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B4940 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1801B4940.c)
 */

__int64 __fastcall ___MakeAsyncCallbackCopyArgs_U__MakeSafelyCopyableResult_V__ComPtr_VApplicationViewBackedViewHostItem___WRL_Microsoft__PEAVApplicationViewBackedViewHostItem___details_wil__AEB__T___AsyncEventSourceT_U__ITypedEventHandler_PEAUIViewHostItem_Holographic_Shell_Internal_Windows__PEAUIInspectable___Foundation_Windows__VGitEventSourceSupportsAgile_Internal_3_U__InvokeModeOptions__01_WRL_Microsoft___00Uerr_returncode_policy_wil___wil__CAJAEAV__function___A6AJPEAU__ITypedEventHandler_PEAUIViewHostItem_Holographic_Shell_Internal_Windows__PEAUIInspectable___Foundation_Windows___Z_wistd____QEAU__MakeSafelyCopyableResult_V__ComPtr_VApplicationViewBackedViewHostItem___WRL_Microsoft__PEAVApplicationViewBackedViewHostItem___details_1_AEB__T_Z(
        _QWORD *a1,
        volatile int *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rbp
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)a2;
  v5 = v3;
  v11 = *(_QWORD *)a2;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 96);
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 96), v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v7 + 16), a2);
LABEL_8:
    v5 = v11;
  }
  v9 = *a3;
  wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1,
    (__int64)a2);
  *a1 = off_1803CAA78;
  a1[1] = 0LL;
  if ( a1 + 1 != &v11 )
  {
    a1[1] = v3;
    v5 = 0LL;
  }
  a1[2] = v9;
  a1[13] = a1;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v5);
  return 0LL;
}

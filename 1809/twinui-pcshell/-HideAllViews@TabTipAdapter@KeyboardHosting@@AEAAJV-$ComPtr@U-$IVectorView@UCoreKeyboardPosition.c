/*
 * XREFs of ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1802C2DF4
 * Callers:
 *     ?OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z @ 0x1802C342C (-OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180083574 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1800940C8 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18010784C (--0-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Co.c)
 *     ?GetAllShownViews@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@XZ @ 0x1802CA604 (-GetAllShownViews@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AV-$vector@IV-$allocator@I@std@@@std.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1803B3254 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::HideAllViews(__int64 a1, __int64 *a2)
{
  unsigned int *i; // rbx
  unsigned int v5; // edi
  bool v6; // r8
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  _QWORD v11[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+10h]

  v14 = a2;
  KeyboardHosting::TabTipAdapterPolicy::GetAllShownViews(*(_QWORD *)(a1 + 96), v11);
  for ( i = (unsigned int *)v11[0]; ; ++i )
  {
    if ( i == (unsigned int *)v11[1] )
    {
      v9 = 0;
      goto LABEL_8;
    }
    v5 = *i;
    if ( !*i )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 40LL))(a1 + 8);
      IhmNotification::SendKeyboardSetVisible(0LL, 0, v6);
      continue;
    }
    v7 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>(
           &v13,
           a2);
    v8 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
           a1,
           v7,
           2,
           v5,
           *(_DWORD *)(*(_QWORD *)(a1 + 96) + 496LL));
    v9 = v8;
    if ( v8 < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x614,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
LABEL_8:
  std::vector<Windows::UI::Color>::_Tidy((__int64)v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v9;
}

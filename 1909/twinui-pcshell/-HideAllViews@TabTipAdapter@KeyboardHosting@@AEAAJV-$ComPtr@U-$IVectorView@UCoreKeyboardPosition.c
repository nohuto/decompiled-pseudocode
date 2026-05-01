/*
 * XREFs of ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18033FFD0
 * Callers:
 *     ?OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z @ 0x1803407D4 (-OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z.c)
 *     ?OnLockScreenActiveChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x18034232C (-OnLockScreenActiveChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180343E94 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ?GetAllShownViews@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@XZ @ 0x18034A584 (-GetAllShownViews@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AV-$vector@IV-$allocator@I@std@@@std.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18043511C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::HideAllViews(__int64 a1, __int64 *a2)
{
  int *v4; // rbx
  int *v5; // rdi
  int v6; // esi
  bool v7; // r8
  int v8; // eax
  unsigned int v9; // esi
  int *v11; // [rsp+38h] [rbp-30h] BYREF
  int *v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+10h]

  v16 = a2;
  KeyboardHosting::TabTipAdapterPolicy::GetAllShownViews(*(_QWORD *)(a1 + 96), &v11);
  v4 = v11;
  v5 = v11;
  if ( v11 == v12 )
  {
LABEL_6:
    if ( v4 )
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((v13 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL));
    v9 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 40LL))(a1 + 8);
    IhmNotification::SendKeyboardSetVisible(0LL, 0, v7);
LABEL_5:
    if ( ++v5 == v12 )
      goto LABEL_6;
  }
  v15 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v8 = KeyboardHosting::TabTipAdapter::RequestShellStateChange(
         a1,
         (unsigned int)&v15,
         2,
         v6,
         *(_DWORD *)(*(_QWORD *)(a1 + 96) + 500LL));
  v9 = v8;
  if ( v8 >= 0 )
    goto LABEL_5;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6E8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((v13 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL));
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v9;
}

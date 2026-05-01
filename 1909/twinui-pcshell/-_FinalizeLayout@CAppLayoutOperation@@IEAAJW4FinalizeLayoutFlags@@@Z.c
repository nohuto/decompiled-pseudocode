/*
 * XREFs of ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250
 * Callers:
 *     ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803DAEA0 (-AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENC.c)
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803DB060 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803DB72C (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x1803DBD00 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803DBE10 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1803DC180 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1803DD300 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x1803DD760 (-SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z.c)
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803DDCC0 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x1803DDE20 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803DE710 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803DE9E0 (-SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayout.c)
 *     ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1803DEC50 (-SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?ClearLayout@PPILayoutOperation@@UEAAJXZ @ 0x1803DF090 (-ClearLayout@PPILayoutOperation@@UEAAJXZ.c)
 *     ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803DF2C0 (-InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x18043A9B0 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x18043AE20 (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ @ 0x18043A620 (-_EnsureDockedViewSizing@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x18043A9B0 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 *     ?_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z @ 0x18043B8FC (-_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_FinalizeLayout(CAppLayoutOperation *a1, char a2)
{
  int v4; // esi
  __int64 v5; // rdx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a2 & 8) != 0 )
  {
    v4 = CAppLayoutOperation::_EnsureDockedViewSizing(a1);
    if ( v4 < 0 )
    {
      v5 = 668LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  v4 = CAppLayoutOperation::_ReflowItems(a1, (a2 & 2) != 0);
  if ( v4 < 0 )
  {
    v5 = 673LL;
    goto LABEL_4;
  }
  if ( (a2 & 4) != 0 )
    CAppLayoutOperation::_EnsureViewSizeConstraints(a1);
  if ( (a2 & 1) == 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 5) + 296LL))(*((_QWORD **)a1 + 5));
    if ( v7 < 0 )
    {
      v8 = 686LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 5) + 208LL))(*((_QWORD **)a1 + 5));
    if ( v7 < 0 )
    {
      v8 = 687LL;
      goto LABEL_12;
    }
  }
  return 0LL;
}

/*
 * XREFs of ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18041C19C
 * Callers:
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1803BC18C (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x1803BCD74 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x1803BE1C0 (-SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z.c)
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803BF170 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ @ 0x18041B2E0 (-_EnsureViewSizeConstraints@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x18041B750 (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 */

__int64 __fastcall CAppLayoutOperation::_MakeViewFullScreen(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+58h] [rbp+20h] BYREF

  v5 = CAppLayoutOperation::_EvictAllItems(a1, a2, a3, &v9);
  if ( v5 < 0 )
  {
    v6 = 364LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !v9 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown *, __int64))(**(_QWORD **)(a1 + 40) + 248LL))(
           *(_QWORD *)(a1 + 40),
           0LL,
           a2,
           1LL);
    if ( v5 < 0 )
    {
      v6 = 369LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}

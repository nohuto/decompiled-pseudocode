/*
 * XREFs of ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1800354F8
 * Callers:
 *     _lambda_e98e55952b2f6a60ccdf995baa6b733c_::_lambda_invoker_cdecl_ @ 0x180033680 (_lambda_e98e55952b2f6a60ccdf995baa6b733c_--_lambda_invoker_cdecl_.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180034500 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180034B5C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x1800356D0 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180035A74 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180035EE0 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800370EC (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180037764 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

struct tagPOINT __fastcall ControllerProcessor::GetCursorPosition(ControllerProcessor *this, struct tagPOINT *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    GetCursorPos(a2);
  }
  else
  {
    v4 = *((_QWORD *)this + 836);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, LONG *))(*(_QWORD *)v4 + 32LL))(v4, a2, &a2->y);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x524,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5);
        JUMPOUT(0x18003556ELL);
      }
    }
  }
  return (struct tagPOINT)a2;
}

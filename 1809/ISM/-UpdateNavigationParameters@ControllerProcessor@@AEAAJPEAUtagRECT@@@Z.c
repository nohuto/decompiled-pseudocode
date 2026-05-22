/*
 * XREFs of ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180034500
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1800354F8 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180035EE0 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x1800363C8 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180037954 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationParameters(ControllerProcessor *this, struct tagRECT *a2)
{
  POINT *CursorPosition; // rax
  POINT v5; // rdx
  struct tagPOINT v6; // rax
  int v7; // eax
  bool v8; // zf
  __int128 v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2
    || *((_DWORD *)this + 440) == a2->left
    && *((_DWORD *)this + 441) == a2->top
    && *((_DWORD *)this + 442) == a2->right
    && *((_DWORD *)this + 443) == a2->bottom )
  {
    return 0LL;
  }
  if ( a2->top < a2->bottom && a2->left < a2->right )
  {
    if ( *((_DWORD *)this + 430) )
    {
      if ( !PtInRect(a2, *(POINT *)((char *)this + 1780)) )
        *(struct tagPOINT *)((char *)this + 1780) = ControllerProcessor::AdjustPointToBounds(
                                                      *(struct tagPOINT *)((char *)this + 1780),
                                                      a2);
    }
    else
    {
      CursorPosition = (POINT *)ControllerProcessor::GetCursorPosition(this);
      v5 = *CursorPosition;
      *(POINT *)((char *)this + 1780) = *CursorPosition;
      if ( !PtInRect(a2, v5) )
      {
        v6 = ControllerProcessor::AdjustPointToBounds(*(struct tagPOINT *)((char *)this + 1780), a2);
        v7 = ControllerProcessor::SetPointerPosition(this, v6, 1);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x387,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v7);
          JUMPOUT(0x1800346B9LL);
        }
      }
    }
    v8 = *((_DWORD *)this + 669) == 0;
    *((struct tagRECT *)this + 110) = *a2;
    LODWORD(v10) = (int)(float)((float)*((int *)this + 440) + 8.0);
    DWORD1(v10) = (int)(float)((float)*((int *)this + 441) + 8.0);
    DWORD2(v10) = (int)(float)((float)*((int *)this + 442) - 8.0);
    HIDWORD(v10) = (int)(float)((float)*((int *)this + 443) - 8.0);
    *(_OWORD *)((char *)this + 1828) = v10;
    if ( v8 )
      ControllerProcessor::UpdateManipulationInjectionRect(this);
    else
      *((_BYTE *)this + 2680) = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x378,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}

/*
 * XREFs of ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180078708
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800788BC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180074DC4 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075D84 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180077634 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1800786B8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x180078D18 (-ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationParameters(ControllerProcessor *this, struct tagRECT *a2)
{
  const RECT *v4; // rcx
  POINT *CursorPosition; // rax
  POINT v7; // rdx
  struct tagPOINT v8; // rax
  int v9; // eax
  bool v10; // zf
  __int128 v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagPOINT v13; // [rsp+48h] [rbp+10h] BYREF

  if ( a2
    && (*((_DWORD *)this + 554) != a2->left
     || *((_DWORD *)this + 555) != a2->top
     || *((_DWORD *)this + 556) != a2->right
     || *((_DWORD *)this + 557) != a2->bottom) )
  {
    if ( !ControllerProcessor::ValidateBounds(a2) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    if ( *((_DWORD *)this + 544) )
    {
      if ( !PtInRect(v4, *(POINT *)((char *)this + 2236)) )
        *(struct tagPOINT *)((char *)this + 2236) = ControllerProcessor::AdjustPointToBounds(
                                                      *(struct tagPOINT *)((char *)this + 2236),
                                                      a2);
    }
    else
    {
      CursorPosition = (POINT *)ControllerProcessor::GetCursorPosition(this, &v13);
      v7 = *CursorPosition;
      *(POINT *)((char *)this + 2236) = *CursorPosition;
      if ( !PtInRect(a2, v7) )
      {
        v8 = ControllerProcessor::AdjustPointToBounds(*(struct tagPOINT *)((char *)this + 2236), a2);
        v9 = ControllerProcessor::SetPointerPosition(this, v8, 1);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            925LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v9);
          __debugbreak();
        }
      }
    }
    v10 = *((_DWORD *)this + 785) == 0;
    *(struct tagRECT *)((char *)this + 2216) = *a2;
    LODWORD(v11) = (int)(float)((float)*((int *)this + 554) + 8.0);
    DWORD1(v11) = (int)(float)((float)*((int *)this + 555) + 8.0);
    DWORD2(v11) = (int)(float)((float)*((int *)this + 556) - 8.0);
    HIDWORD(v11) = (int)(float)((float)*((int *)this + 557) - 8.0);
    *(_OWORD *)((char *)this + 2284) = v11;
    if ( v10 )
      ControllerProcessor::UpdateManipulationInjectionRect(this);
    else
      *((_BYTE *)this + 3144) = 1;
  }
  return 0LL;
}

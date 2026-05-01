/*
 * XREFs of ?_GetExtendedFramePosition@CApplicationViewBase@@IEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18015EEC8
 * Callers:
 *     ?GetExtendedFramePosition@CWin32ApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x18015B080 (-GetExtendedFramePosition@CWin32ApplicationView@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetExtendedFramePosition@CWinRTApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x18015CE10 (-GetExtendedFramePosition@CWinRTApplicationView@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall CApplicationViewBase::_GetExtendedFramePosition(
        CApplicationViewBase *this,
        HWND a2,
        struct tagRECT *a3)
{
  HRESULT WindowAttribute; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  struct tagRECT pvAttribute; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  SetRectEmpty(a3);
  pvAttribute = 0LL;
  WindowAttribute = DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u);
  v6 = WindowAttribute;
  if ( WindowAttribute >= 0 )
  {
    result = 0LL;
    *a3 = pvAttribute;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return v6;
  }
  return result;
}

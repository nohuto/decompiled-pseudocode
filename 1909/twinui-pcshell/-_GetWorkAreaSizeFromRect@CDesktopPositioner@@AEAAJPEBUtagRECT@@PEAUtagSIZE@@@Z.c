/*
 * XREFs of ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180049EF8
 * Callers:
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x18004CE48 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x18004D318 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18004AEF4 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_GetWorkAreaSizeFromRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct tagSIZE *a3)
{
  int WorkAreaFromRect; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]
  struct tagSIZE v8; // [rsp+20h] [rbp-28h]
  struct tagRECT v9; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  v9 = 0LL;
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v9);
  v5 = WorkAreaFromRect;
  if ( WorkAreaFromRect < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FE,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect,
      v7);
    return v5;
  }
  else
  {
    v8.cx = v9.right - v9.left;
    v8.cy = v9.bottom - v9.top;
    *a3 = v8;
    return 0LL;
  }
}

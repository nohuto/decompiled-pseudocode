/*
 * XREFs of xxxFillWindow @ 0x1C009FB24
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1C00FEB18 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1C0128F10 (NtUserFillWindow.c)
 * Callees:
 *     UT_GetParentDCClipBox @ 0x1C00380C0 (UT_GetParentDCClipBox.c)
 *     xxxPaintRect @ 0x1C009F974 (xxxPaintRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH a4)
{
  struct tagWND *v4; // rbx
  RECT v9; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  *(_QWORD *)&v9.left = 0LL;
  *(_QWORD *)&v9.right = 0LL;
  if ( !a1 )
    v4 = (struct tagWND *)a2;
  if ( (unsigned int)UT_GetParentDCClipBox(a2, (__int64)a3, &v9.left) )
    return xxxPaintRect(v4, a2, a3, a4, &v9);
  else
    return 1LL;
}

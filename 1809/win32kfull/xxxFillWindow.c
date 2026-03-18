/*
 * XREFs of xxxFillWindow @ 0x1C007B358
 * Callers:
 *     NtUserFillWindow @ 0x1C007B230 (NtUserFillWindow.c)
 *     xxxDWP_EraseBkgnd @ 0x1C011CD88 (xxxDWP_EraseBkgnd.c)
 * Callees:
 *     UT_GetParentDCClipBox @ 0x1C001F760 (UT_GetParentDCClipBox.c)
 *     xxxPaintRect @ 0x1C007B3E4 (xxxPaintRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  v9[0] = 0LL;
  v9[1] = 0LL;
  if ( !a1 )
    v4 = a2;
  if ( (unsigned int)UT_GetParentDCClipBox(a2, a3, (__int64)v9) )
    return xxxPaintRect(v4, a2, a3, a4, v9);
  else
    return 1LL;
}

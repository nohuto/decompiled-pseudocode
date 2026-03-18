/*
 * XREFs of UT_GetParentDCClipBox @ 0x1C001F760
 * Callers:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxFillWindow @ 0x1C007B358 (xxxFillWindow.c)
 * Callees:
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL) + 8LL) >= 0 )
    return 1LL;
  GetRect(a1, v6, 17LL);
  return IntersectRect(a3, a3, v6);
}

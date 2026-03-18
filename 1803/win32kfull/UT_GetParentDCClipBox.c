/*
 * XREFs of UT_GetParentDCClipBox @ 0x1C00380C0
 * Callers:
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     xxxFillWindow @ 0x1C009FB24 (xxxFillWindow.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 */

__int64 __fastcall UT_GetParentDCClipBox(__int64 a1, __int64 a2, int *a3)
{
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)GreGetClipBox(a2, a3, 1LL) == 1 )
    return 0LL;
  if ( !a1 || *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL) + 8LL) >= 0 )
    return 1LL;
  GetRect(a1, v6, 17LL);
  return IntersectRect(a3, a3, v6);
}

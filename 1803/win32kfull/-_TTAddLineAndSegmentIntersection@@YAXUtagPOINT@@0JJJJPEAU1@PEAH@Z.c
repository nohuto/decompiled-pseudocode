/*
 * XREFs of ?_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z @ 0x1C022C7F8
 * Callers:
 *     ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x1C022C9E4 (-_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z.c)
 * Callees:
 *     ?_TTIntersectSegmentAndLine@@YAHUtagPOINT@@000PEAU1@@Z @ 0x1C022CB1C (-_TTIntersectSegmentAndLine@@YAHUtagPOINT@@000PEAU1@@Z.c)
 */

void __fastcall _TTAddLineAndSegmentIntersection(
        struct tagPOINT a1,
        struct tagPOINT a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct tagPOINT *a7,
        int *a8)
{
  LONG y; // r9d
  __int64 v9; // r8
  struct tagPOINT v10; // [rsp+40h] [rbp-18h] BYREF

  if ( (unsigned int)_TTIntersectSegmentAndLine(
                       (struct tagPOINT)__PAIR64__(a4, a3),
                       (struct tagPOINT)__PAIR64__(a6, a5),
                       a1,
                       a2,
                       &v10) == 1 )
  {
    y = v10.y;
    v9 = *a8;
    if ( !(_DWORD)v9 || *a7 != v10 )
    {
      a7[v9].x = v10.x;
      *a8 = v9 + 1;
      a7[v9].y = y;
    }
  }
}

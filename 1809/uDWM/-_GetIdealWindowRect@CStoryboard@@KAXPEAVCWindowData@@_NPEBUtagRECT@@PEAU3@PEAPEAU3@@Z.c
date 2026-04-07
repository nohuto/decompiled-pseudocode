/*
 * XREFs of ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z @ 0x1800033E4
 * Callers:
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180003364 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_GetIdealWindowRect(
        struct CWindowData *a1,
        unsigned __int8 a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT **a5)
{
  __int64 v9; // rbp
  struct tagRECT v10; // xmm0

  v9 = 32 * (a2 ^ 1LL);
  if ( (((a2 + 1) << 23) & *((_DWORD *)a1 + 151)) != (a2 + 1) << 23
    || IsRectEmpty((const RECT *)((char *)a1 + v9 + 624)) )
  {
    if ( a3 )
      v10 = *a3;
    else
      v10 = (struct tagRECT)*((_OWORD *)a1 + 3);
    *a4 = v10;
    if ( a5 )
      *a5 = 0LL;
  }
  else
  {
    *a4 = *(struct tagRECT *)((char *)a1 + v9 + 624);
    if ( a5 )
      *a5 = (struct tagRECT *)((char *)a1 + 32 * (a2 ^ 1LL) + 608);
  }
}

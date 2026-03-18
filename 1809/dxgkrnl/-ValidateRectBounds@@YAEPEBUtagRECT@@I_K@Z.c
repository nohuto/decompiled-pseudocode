/*
 * XREFs of ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C01EA840
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C01EA5B4 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C01EA7F8 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateRectBounds(const struct tagRECT *a1, unsigned int a2, unsigned __int64 a3)
{
  LONG right; // r9d
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  if ( !ValidateRect(a1) )
    return 0;
  right = a1->right;
  if ( !a2 )
    a2 = a1->right;
  v8 = a2 * (unsigned __int64)(unsigned int)(a1->bottom - 1);
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 1578LL;
LABEL_7:
    WdLogEvent5_WdError(v9);
    return 0;
  }
  if ( right + (int)v8 < (unsigned int)v8 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 1583LL;
    goto LABEL_7;
  }
  if ( (unsigned int)(right + v8) > a3 )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 24) = 1588LL;
    goto LABEL_7;
  }
  return 1;
}

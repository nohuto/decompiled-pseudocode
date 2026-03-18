/*
 * XREFs of ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C021A7BC
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C021A57C (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C021A804 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C021A8B8 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( a1->left <= a1->right && a1->top <= a1->bottom )
    return 1;
  v4 = WdLogNewEntry5_WdError(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = 1528LL;
  WdLogEvent5_WdError(v4);
  return 0;
}

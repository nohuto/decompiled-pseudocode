/*
 * XREFs of ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C01EA7F8
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C01EA5B4 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C01EA840 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C01EA90C (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1)
{
  __int64 v2; // rax

  if ( a1->left <= a1->right && a1->top <= a1->bottom )
    return 1;
  v2 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v2 + 24) = 1545LL;
  WdLogEvent5_WdError(v2);
  return 0;
}

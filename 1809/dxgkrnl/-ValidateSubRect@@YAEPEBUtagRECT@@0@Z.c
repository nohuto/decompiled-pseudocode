/*
 * XREFs of ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C01EA90C
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C01EA5B4 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C01EA7F8 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateSubRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  __int64 v4; // rcx
  LONG left; // eax
  int right; // r9d
  LONG top; // edx
  LONG bottom; // r10d
  LONG v9; // r8d
  LONG v10; // ebx
  __int64 v12; // rax

  if ( ValidateRect(a1) )
  {
    left = a1->left;
    right = a2->right;
    if ( a1->left < right )
    {
      v4 = (unsigned int)a1->right;
      if ( (int)v4 > a2->left || (_DWORD)v4 == left )
      {
        top = a1->top;
        bottom = a2->bottom;
        if ( top < bottom )
        {
          v9 = a1->bottom;
          v10 = a2->top;
          if ( (v9 > v10 || top == v9) && left >= a2->left && (int)v4 <= right && top >= v10 && v9 <= bottom )
            return 1;
        }
      }
    }
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = 1616LL;
    WdLogEvent5_WdError(v12);
  }
  return 0;
}

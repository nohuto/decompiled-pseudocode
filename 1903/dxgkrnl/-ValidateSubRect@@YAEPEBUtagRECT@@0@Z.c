/*
 * XREFs of ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C021A248
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C0219F0C (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C021A14C (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateSubRect(const struct tagRECT *a1, const struct tagRECT *a2, __int64 a3)
{
  __int64 top; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LONG left; // eax
  int right; // r9d
  LONG bottom; // r10d
  LONG v11; // ebx
  __int64 v13; // rax

  if ( ValidateRect(a1, (__int64)a2, a3) )
  {
    left = a1->left;
    right = a2->right;
    if ( a1->left < right )
    {
      v6 = (unsigned int)a1->right;
      if ( (int)v6 > a2->left || (_DWORD)v6 == left )
      {
        top = (unsigned int)a1->top;
        bottom = a2->bottom;
        if ( (int)top < bottom )
        {
          v7 = (unsigned int)a1->bottom;
          v11 = a2->top;
          if ( ((int)v7 > v11 || (_DWORD)top == (_DWORD)v7)
            && left >= a2->left
            && (int)v6 <= right
            && (int)top >= v11
            && (int)v7 <= bottom )
          {
            return 1;
          }
        }
      }
    }
    v13 = WdLogNewEntry5_WdError(v6, top, v7);
    *(_QWORD *)(v13 + 24) = 1599LL;
    WdLogEvent5_WdError(v13);
  }
  return 0;
}

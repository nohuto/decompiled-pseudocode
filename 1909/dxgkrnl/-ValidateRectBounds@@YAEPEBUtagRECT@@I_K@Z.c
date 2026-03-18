/*
 * XREFs of ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C021A804
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C021A57C (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C021A7BC (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 */

unsigned __int8 __fastcall ValidateRectBounds(const struct tagRECT *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // r8
  __int64 right; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  if ( ValidateRect(a1, a2, a3) )
  {
    right = (unsigned int)a1->right;
    if ( !v4 )
      v4 = a1->right;
    v8 = v4 * (unsigned __int64)(unsigned int)(a1->bottom - 1);
    if ( v8 > 0xFFFFFFFF )
    {
      v10 = WdLogNewEntry5_WdError(v8, right, v6);
      *(_QWORD *)(v10 + 24) = 1561LL;
    }
    else
    {
      v9 = (unsigned int)(v8 + right);
      if ( (unsigned int)v9 < (unsigned int)v8 )
      {
        v10 = WdLogNewEntry5_WdError(v8, right, v6);
        *(_QWORD *)(v10 + 24) = 1566LL;
      }
      else
      {
        if ( v9 <= a3 )
          return 1;
        v10 = WdLogNewEntry5_WdError(v8, right, v6);
        *(_QWORD *)(v10 + 24) = 1571LL;
      }
    }
    WdLogEvent5_WdError(v10);
  }
  return 0;
}

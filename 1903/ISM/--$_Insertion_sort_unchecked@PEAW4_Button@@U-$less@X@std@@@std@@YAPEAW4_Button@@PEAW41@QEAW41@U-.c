/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U?$less@X@0@@Z @ 0x1800FC6D8
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800FCAF4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Move_backward_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x1800B2200 (--$_Move_backward_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

_DWORD *__fastcall std::_Insertion_sort_unchecked<enum _Button *,std::less<void>>(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // rbx
  int v5; // ebp
  _DWORD *v6; // rcx
  _DWORD *j; // rax

  if ( a1 != a2 )
  {
    for ( i = a1 + 1; i != a2; ++i )
    {
      v5 = *i;
      v6 = i;
      if ( *i >= *a1 )
      {
        for ( j = i; v5 < *--j; v6 = j )
          *v6 = *j;
        *v6 = v5;
      }
      else
      {
        std::_Move_backward_unchecked<enum _Button *,enum _Button *>(a1, (__int64)i, (__int64)(i + 1));
        *a1 = v5;
      }
    }
  }
  return a2;
}

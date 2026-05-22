/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAEU?$less@X@std@@@std@@YAPEAEPEAEQEAEU?$less@X@0@@Z @ 0x1800B1D14
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800B2A60 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Move_backward_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x1800B20B0 (--$_Move_backward_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 */

unsigned __int8 *__fastcall std::_Insertion_sort_unchecked<unsigned char *,std::less<void>>(
        unsigned __int8 *a1,
        unsigned __int8 *a2)
{
  unsigned __int8 *i; // rbx
  unsigned __int8 v5; // bp
  unsigned __int8 *v6; // rcx
  unsigned __int8 *j; // rax

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
        std::_Move_backward_unchecked<enum _Button *,enum _Button *>(a1, i, i + 1);
        *a1 = v5;
      }
    }
  }
  return a2;
}

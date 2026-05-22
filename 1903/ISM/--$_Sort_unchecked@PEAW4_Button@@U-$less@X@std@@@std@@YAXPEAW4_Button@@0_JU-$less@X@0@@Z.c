/*
 * XREFs of ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800FCAF4
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800FCAF4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800FD598 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800FD95C (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800FDD8C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U?$less@X@0@@Z @ 0x1800FC6D8 (--$_Insertion_sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U-.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1800FC78C (--$_Partition_by_median_guess_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YA-AU-$pair@PEAW4_But.c)
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1800FC950 (--$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U.c)
 *     ??$_Sort_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x1800FCA74 (--$_Sort_heap_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0U-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800FCAF4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 */

__int64 __fastcall std::_Sort_unchecked<enum _Button *,std::less<void>>(int *a1, int *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  int *v7; // rbp
  int *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 i; // rsi
  int *v12; // [rsp+30h] [rbp-18h] BYREF
  int *v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+50h] [rbp+8h] BYREF

  result = a2 - a1;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_12;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(&v12, v8, v7);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v9) = a4;
    if ( (__int64)(((char *)v12 - (char *)v8) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)(((char *)v7 - (char *)v13) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v13, v7, a3, v9);
      v7 = v12;
    }
    else
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v8, v12, a3, v9);
      v8 = v13;
    }
    result = v7 - v8;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_12:
    if ( result >= 2 )
      return (__int64)std::_Insertion_sort_unchecked<enum _Button *,std::less<void>>(v8, v7);
  }
  else
  {
    v10 = v7 - v8;
    for ( i = ((char *)v7 - (char *)v8) >> 3;
          i > 0;
          std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>((__int64)v8, i, v10, &v14) )
    {
      v14 = v8[--i];
    }
    return std::_Sort_heap_unchecked<enum _Button *,std::less<void>>(v8, (__int64)v7);
  }
  return result;
}

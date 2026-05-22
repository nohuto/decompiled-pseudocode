/*
 * XREFs of ??$_Sort_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x1800FC844
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800FC8C4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1800FC720 (--$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked<enum _Button *,std::less<void>>(int *a1, __int64 a2)
{
  __int64 result; // rax
  int *v3; // rdi
  __int64 v4; // rsi
  int v5; // [rsp+40h] [rbp+8h] BYREF

  result = (a2 - (__int64)a1) >> 2;
  if ( result >= 2 )
  {
    v3 = (int *)(a2 - 4);
    v4 = 4LL - (_QWORD)a1;
    do
    {
      v5 = *v3;
      *v3 = *a1;
      std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>((__int64)a1, 0LL, v3 - a1, &v5);
      result = ((__int64)--v3 + v4) >> 2;
    }
    while ( result >= 2 );
  }
  return result;
}

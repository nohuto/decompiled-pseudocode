/*
 * XREFs of ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800C7274
 * Callers:
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1800C60C8 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800C6268 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800C65A0 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800C7274 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800C7274 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1800C752C (--$_Partition_by_median_guess_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YA-AU-$pair@PEAW4_But.c)
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1800C7AF4 (--$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::_Sort_unchecked<enum _Button *,std::less<void>>(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 result; // rax
  char *v7; // rsi
  char *v8; // rdi
  char *v9; // r14
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 j; // rbp
  char *v13; // rsi
  char *i; // rbx
  int v15; // ebp
  char *v16; // rdx
  int v17; // [rsp+20h] [rbp-38h]
  char *v18; // [rsp+30h] [rbp-28h] BYREF
  char *v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  result = (a2 - a1) >> 2;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_29;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(&v18, v8, v7, a4);
    v9 = v19;
    LOBYTE(v10) = v4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v18 - v8) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)((v7 - v19) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v19, v7, a3, v10);
      v7 = v18;
    }
    else
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v8, v18, a3, v10);
      v8 = v9;
    }
    result = (v7 - v8) >> 2;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_29:
    if ( result >= 2 && v8 != v7 )
    {
      for ( i = v8 + 4; i != v7; i += 4 )
      {
        v15 = *(_DWORD *)i;
        v16 = i;
        if ( *(_DWORD *)i >= *(_DWORD *)v8 )
        {
          for ( result = (__int64)(i - 4); v15 < *(_DWORD *)result; result -= 4LL )
          {
            *(_DWORD *)v16 = *(_DWORD *)result;
            v16 = (char *)result;
          }
          *(_DWORD *)v16 = v15;
        }
        else
        {
          result = (__int64)memmove_0(v8 + 4, v8, i - v8);
          *(_DWORD *)v8 = v15;
        }
      }
    }
  }
  else
  {
    v11 = (v7 - v8) >> 2;
    for ( j = (v7 - v8) >> 3;
          j > 0;
          result = std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>(v8, j, v11, &v20, v17) )
    {
      --j;
      LOBYTE(v17) = v4;
      v20 = *(_DWORD *)&v8[4 * j];
    }
    if ( v11 >= 2 )
    {
      v13 = v7 - 4;
      do
      {
        if ( v11 >= 2 )
        {
          v20 = *(_DWORD *)v13;
          *(_DWORD *)v13 = *(_DWORD *)v8;
          LOBYTE(v17) = v4;
          std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>(v8, 0LL, (v13 - v8) >> 2, &v20, v17);
        }
        v13 -= 4;
        result = (__int64)&v13[4LL - (_QWORD)v8] >> 2;
        v11 = result;
      }
      while ( result >= 2 );
    }
  }
  return result;
}

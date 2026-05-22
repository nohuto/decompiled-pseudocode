/*
 * XREFs of ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x18007D194
 * Callers:
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x18007BC64 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x18007D194 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x18007D194 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x18007D4CC (--$_Partition_by_median_guess_unchecked@PEAEU-$less@X@std@@@std@@YA-AU-$pair@PEAEPEAE@0@PEAE0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x18007D848 (--$_Pop_heap_hole_by_index@PEAEEU-$less@X@std@@@std@@YAXPEAE_J1$$QEAEU-$less@X@0@@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::_Sort_unchecked<unsigned char *,std::less<void>>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 result; // rax
  unsigned __int8 *v7; // rsi
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v9; // r14
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 j; // r14
  char *v13; // rsi
  __int64 v14; // r14
  unsigned __int8 *i; // rbx
  unsigned __int8 v16; // bp
  _BYTE *v17; // rdx
  int v18; // [rsp+20h] [rbp-38h]
  unsigned __int8 *v19; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 *v20; // [rsp+38h] [rbp-20h]
  char v21; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  result = a2 - a1;
  v7 = a2;
  v8 = a1;
  if ( a2 - a1 <= 32 )
    goto LABEL_29;
  do
  {
    if ( a3 <= 0 )
      break;
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked<unsigned char *,std::less<void>>(&v19, v8, v7, a4);
    v9 = v20;
    LOBYTE(v10) = v4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( v19 - v8 >= v7 - v20 )
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(v20, v7, a3, v10);
      v7 = v19;
    }
    else
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(v8, v19, a3, v10);
      v8 = v9;
    }
    result = v7 - v8;
  }
  while ( v7 - v8 > 32 );
  if ( result <= 32 )
  {
LABEL_29:
    if ( result >= 2 && v8 != v7 )
    {
      for ( i = v8 + 1; i != v7; ++i )
      {
        v16 = *i;
        v17 = i;
        if ( *i >= *v8 )
        {
          for ( result = (__int64)(i - 1); v16 < *(_BYTE *)result; --result )
          {
            *v17 = *(_BYTE *)result;
            v17 = (_BYTE *)result;
          }
          *v17 = v16;
        }
        else
        {
          result = (__int64)memmove_0(v8 + 1, v8, i - v8);
          *v8 = v16;
        }
      }
    }
  }
  else
  {
    v11 = v7 - v8;
    for ( j = (v7 - v8) >> 1;
          j > 0;
          result = std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>(v8, j, v11, &v21, v18) )
    {
      --j;
      LOBYTE(v18) = v4;
      v21 = v8[j];
    }
    if ( v11 >= 2 )
    {
      v13 = (char *)(v7 - 1);
      v14 = 1LL - (_QWORD)v8;
      do
      {
        if ( (__int64)&v13[v14] >= 2 )
        {
          v21 = *v13;
          *v13 = *v8;
          LOBYTE(v18) = v4;
          std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>(
            v8,
            0LL,
            v13 - (char *)v8,
            &v21,
            v18);
        }
        --v13;
        result = (__int64)&v13[v14];
      }
      while ( (__int64)&v13[v14] >= 2 );
    }
  }
  return result;
}

/*
 * XREFs of ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800B2A60
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800B2A60 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800B56A8 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAEU?$less@X@std@@@std@@YAPEAEPEAEQEAEU?$less@X@0@@Z @ 0x1800B1D14 (--$_Insertion_sort_unchecked@PEAEU-$less@X@std@@@std@@YAPEAEPEAEQEAEU-$less@X@0@@Z.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x1800B20F8 (--$_Partition_by_median_guess_unchecked@PEAEU-$less@X@std@@@std@@YA-AU-$pair@PEAEPEAE@0@PEAE0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x1800B263C (--$_Pop_heap_hole_by_index@PEAEEU-$less@X@std@@@std@@YAXPEAE_J1$$QEAEU-$less@X@0@@Z.c)
 *     ??$_Sort_heap_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0U?$less@X@0@@Z @ 0x1800B2950 (--$_Sort_heap_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0U-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800B2A60 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 */

unsigned __int8 *__fastcall std::_Sort_unchecked<unsigned char *,std::less<void>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 i; // rsi
  unsigned __int8 *v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF

  result = &a2[-a1];
  v7 = a2;
  v8 = a1;
  if ( (__int64)&a2[-a1] <= 32 )
    goto LABEL_12;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<unsigned char *,std::less<void>>(&v12, (unsigned __int8 *)v8, v7);
    LOBYTE(v9) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)&v12[-v8] >= (__int64)&v7[-v13] )
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(v13, v7, a3, v9);
      v7 = v12;
    }
    else
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(v8, v12, a3, v9);
      v8 = v13;
    }
    result = &v7[-v8];
  }
  while ( (__int64)&v7[-v8] > 32 );
  if ( (__int64)result <= 32 )
  {
LABEL_12:
    if ( (__int64)result >= 2 )
      return std::_Insertion_sort_unchecked<unsigned char *,std::less<void>>((unsigned __int8 *)v8, v7);
  }
  else
  {
    v10 = (__int64)&v7[-v8];
    for ( i = (__int64)&v7[-v8] >> 1;
          i > 0;
          std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>(v8, i, v10, &v14) )
    {
      v14 = *(_BYTE *)(--i + v8);
    }
    return std::_Sort_heap_unchecked<unsigned char *,std::less<void>>((unsigned __int8 *)v8, (__int64)v7);
  }
  return result;
}

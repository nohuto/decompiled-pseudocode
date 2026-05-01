/*
 * XREFs of ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1803BFA98
 * Callers:
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1803BFA98 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1803C0010 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1803BFA98 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1803BFB7C (--$_MergeThem@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     ?Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z @ 0x1803BFCC8 (-Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z.c)
 */

void *__fastcall CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
        void **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  void *result; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  const void *v11; // r10

  result = (void *)(a4 - 1);
  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      result = (void *)CBucketComparator::Compare(
                         (CBucketComparator *)a1,
                         *((struct BUCKET **)*a1 + a3),
                         *((struct BUCKET **)*a1 + a3 + 1));
      if ( (int)result > 0 )
      {
        memmove_0(a1[2], v11, 8uLL);
        memmove_0((char *)*a1 + 8 * a3, (char *)*a1 + 8 * a3 + 8, 8uLL);
        return memmove_0((char *)*a1 + 8 * a3 + 8, a1[2], 8uLL);
      }
    }
    else
    {
      v9 = a4 >> 1;
      CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
        a1,
        a2,
        a3,
        a4 >> 1);
      CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeSort<CBucketComparator>(
        a1,
        a2,
        v9 + a3,
        a4 - v9);
      return (void *)CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeThem<CBucketComparator>(
                       a1,
                       v10,
                       a3,
                       a4);
    }
  }
  return result;
}

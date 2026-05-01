/*
 * XREFs of ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1803BFB7C
 * Callers:
 *     ??$_MergeSort@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1803BFA98 (--$_MergeSort@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 * Callees:
 *     memcpy_0 @ 0x18009B2D7 (memcpy_0.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ?Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z @ 0x1803BFCC8 (-Compare@CBucketComparator@@QEBAHPEAUBUCKET@@0@Z.c)
 */

__int64 __fastcall CTSimpleArray<BUCKET *,4294967294,CTPolicyCoTaskMem<BUCKET *>,CSimpleArrayStandardCompareHelper<BUCKET *>,CSimpleArrayStandardMergeHelper<BUCKET *>>::_MergeThem<CBucketComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // r13
  size_t v6; // rbx
  char *v7; // r12
  CBucketComparator *v8; // rcx
  __int64 v9; // rsi
  char v10; // di
  unsigned __int64 v11; // r14
  struct BUCKET **v12; // rbx
  CBucketComparator *v13; // rbp
  void *v14; // r10
  const void *v15; // r11
  __int64 result; // rax

  v5 = a4 >> 1;
  v6 = 8 * (a4 >> 1);
  v7 = (char *)(*(_QWORD *)a1 + 8 * a3);
  memcpy_0(*(void **)(a1 + 16), v7, v6);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = v5;
  v12 = (struct BUCKET **)&v7[v6];
  do
  {
    v13 = (CBucketComparator *)((char *)v8 + 1);
    if ( (int)CBucketComparator::Compare(v8, *(struct BUCKET **)(*(_QWORD *)(a1 + 16) + 8 * v9), *v12) <= 0 )
    {
      memmove_0(v14, v15, 8uLL);
      result = 1LL;
      if ( ++v9 == v5 )
        v10 = 1;
    }
    else
    {
      memmove_0(v14, v12, 8uLL);
      result = a4;
      ++v11;
      ++v12;
      if ( v11 == a4 )
      {
        result = (__int64)memcpy_0(
                            &v7[8 * (_QWORD)v13],
                            (const void *)(*(_QWORD *)(a1 + 16) + 8 * v9),
                            8 * (a4 - (_QWORD)v13));
        v10 = 1;
      }
    }
    v8 = v13;
  }
  while ( !v10 );
  return result;
}

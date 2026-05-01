/*
 * XREFs of ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1803F319C
 * Callers:
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1803F3098 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memcpy_0 @ 0x1800D3EF7 (memcpy_0.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     ?Compare@CDropFeedbackItemComparator@@QEBAHV?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z @ 0x1803F35CC (-Compare@CDropFeedbackItemComparator@@QEBAHV-$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeThem<CDropFeedbackItemComparator>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // r13
  size_t v6; // rbx
  char *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  char v10; // di
  __int64 *v11; // rbx
  unsigned __int64 v12; // rbp
  char *v13; // r12
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 result; // rax
  char *v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h]
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v19 = a2;
  v5 = a4 >> 1;
  v6 = 8 * (a4 >> 1);
  v7 = (char *)(*(_QWORD *)a1 + 8 * a3);
  v17 = v7;
  memcpy_0(*(void **)(a1 + 16), v7, v6);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v19 = 0LL;
  v11 = (__int64 *)&v7[v6];
  v12 = v5;
  do
  {
    v18 = *v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    v13 = &v7[8 * v8];
    v14 = ++v19;
    if ( (int)CDropFeedbackItemComparator::Compare(v15, &v20, &v18) <= 0 )
    {
      memmove_0(v13, (const void *)(*(_QWORD *)(a1 + 16) + 8 * v9), 8uLL);
      result = 1LL;
      if ( ++v9 == v5 )
        v10 = 1;
    }
    else
    {
      memmove_0(v13, v11, 8uLL);
      result = v21;
      ++v12;
      ++v11;
      if ( v12 == v21 )
      {
        result = (__int64)memcpy_0(&v17[8 * v14], (const void *)(*(_QWORD *)(a1 + 16) + 8 * v9), 8 * (v21 - v14));
        v10 = 1;
      }
    }
    v7 = v17;
    v8 = v19;
  }
  while ( !v10 );
  return result;
}

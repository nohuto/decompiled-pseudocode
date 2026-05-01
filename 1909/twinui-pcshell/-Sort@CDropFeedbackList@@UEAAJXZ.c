/*
 * XREFs of ?Sort@CDropFeedbackList@@UEAAJXZ @ 0x1803F3D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18006E578 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ??$_MergeSort@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x1803F3098 (--$_MergeSort@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 */

__int64 __fastcall CDropFeedbackList::Sort(CDropFeedbackList *this)
{
  char *v1; // rdi
  int v2; // ebx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  LPVOID *v5; // rsi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = (char *)this + 16;
  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3 > 1 )
  {
    v4 = v3 >> 1;
    v5 = (LPVOID *)(v1 + 16);
    *((_QWORD *)v1 + 2) = 0LL;
    if ( is_mul_ok(v4, 8uLL) )
    {
      v2 = CTCoAllocPolicy::Realloc((IMalloc *)v4, (v4 * (unsigned __int128)8u) >> 64, 0LL, 8 * v4, (void **)v1 + 2);
      if ( v2 >= 0 )
      {
        CTSimpleArray<Microsoft::WRL::ComPtr<IDropFeedbackItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IDropFeedbackItem>>>::_MergeSort<CDropFeedbackItemComparator>(
          (__int64)v1,
          (__int64)&v7,
          0LL,
          *((_QWORD *)v1 + 1));
        CoTaskMemFree(*v5);
        *v5 = 0LL;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)v2;
}

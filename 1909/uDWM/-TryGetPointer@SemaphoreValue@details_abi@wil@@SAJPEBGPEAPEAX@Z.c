/*
 * XREFs of ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180041B8C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180041A60 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800761BC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180041BF0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetPointer(
        const unsigned __int16 *a1,
        void **a2,
        __int64 a3,
        bool *a4)
{
  unsigned __int64 v4; // rdi
  int ValueInternal; // eax
  int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v11 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(a1, (bool)a2, &v11, a4);
  v7 = ValueInternal;
  if ( ValueInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueInternal,
      v9);
  }
  else
  {
    v4 = v11;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (unsigned int)"wil", (const char *)(unsigned int)v7, v9);
    return (unsigned int)v7;
  }
  else
  {
    *a2 = (void *)(4 * v4);
    return 0LL;
  }
}

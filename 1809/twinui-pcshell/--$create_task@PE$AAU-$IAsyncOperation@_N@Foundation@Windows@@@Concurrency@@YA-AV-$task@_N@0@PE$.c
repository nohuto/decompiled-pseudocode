/*
 * XREFs of ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x180292A00
 * Callers:
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x180293D0C (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x18013EDA4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180291880 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x180292420 (--$_Assign_range@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterato.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x180293CB4 (--1task_options@Concurrency@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Concurrency::create_task<Windows::Foundation::IAsyncOperation<bool> __gc *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0LL;
  v8 = 0LL;
  *(_BYTE *)(a3 + 48) = 1;
  *(_QWORD *)(a3 + 56) = retaddr;
  if ( (__int128 *)(a3 + 64) != &v7 )
    std::vector<void *>::_Assign_range<void * *>((void **)(a3 + 64), 0LL, 0LL);
  std::vector<void *>::_Tidy((__int64)&v7);
  Concurrency::task<bool>::task<bool>(a1, a2, a3);
  Concurrency::task_options::~task_options((Concurrency::task_options *)a3);
  return a1;
}

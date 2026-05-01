/*
 * XREFs of ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180349BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18034B290 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 */

__int64 __fastcall CMultitaskingViewManager::IsMultitaskingViewVisible(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  v7 = (a1 + 40) & -(__int64)(a1 != 0);
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1);
  *a3 = (int)CMultitaskingViewManager::_FindMTVHost(a1, a2, 1LL, 0LL, 0LL) >= 0;
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v7);
  return 0LL;
}

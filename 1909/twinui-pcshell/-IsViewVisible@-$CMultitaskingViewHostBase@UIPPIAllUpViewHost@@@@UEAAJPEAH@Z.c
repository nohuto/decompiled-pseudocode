/*
 * XREFs of ?IsViewVisible@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJPEAH@Z @ 0x180371070
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<IPPIAllUpViewHost>::IsViewVisible(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v5 = (a1 + 24) & -(__int64)(a1 != 0);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1);
  *a2 = *(unsigned __int8 *)(a1 + 112);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v5);
  return 0LL;
}

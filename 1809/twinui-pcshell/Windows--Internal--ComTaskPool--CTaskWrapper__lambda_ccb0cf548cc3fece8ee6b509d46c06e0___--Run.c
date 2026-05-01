/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0___::Run @ 0x1800734F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b19e27c48b295a3a48a5cf32f8a10a66_::operator() @ 0x180073564 (_lambda_b19e27c48b295a3a48a5cf32f8a10a66_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccb0cf548cc3fece8ee6b509d46c06e0___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_b19e27c48b295a3a48a5cf32f8a10a66_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

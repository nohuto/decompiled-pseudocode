/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_daccc0ce4e4d7134eefbda54bca36657___::Run @ 0x1800487B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_06d64a626025f4db47aab5f81b5aa1b0_::operator() @ 0x180048824 (_lambda_06d64a626025f4db47aab5f81b5aa1b0_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_daccc0ce4e4d7134eefbda54bca36657___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_06d64a626025f4db47aab5f81b5aa1b0_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

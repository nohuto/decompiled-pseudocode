/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dac6902843ce9a48b723fe5594935719___::Run @ 0x18005AF90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8bf19a67da9349d708dd7efffc5e2d17_::operator() @ 0x18005B004 (_lambda_8bf19a67da9349d708dd7efffc5e2d17_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dac6902843ce9a48b723fe5594935719___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_8bf19a67da9349d708dd7efffc5e2d17_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

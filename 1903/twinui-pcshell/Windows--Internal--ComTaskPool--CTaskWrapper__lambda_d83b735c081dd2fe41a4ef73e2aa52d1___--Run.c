/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1___::Run @ 0x1800738F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_21b79cea9a56d6bbfbb4614e776bd7a3_::operator() @ 0x180073964 (_lambda_21b79cea9a56d6bbfbb4614e776bd7a3_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_21b79cea9a56d6bbfbb4614e776bd7a3_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

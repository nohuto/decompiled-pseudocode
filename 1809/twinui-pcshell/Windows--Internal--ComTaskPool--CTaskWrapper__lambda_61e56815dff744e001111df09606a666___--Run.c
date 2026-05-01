/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61e56815dff744e001111df09606a666___::Run @ 0x180047340
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_96f1d78dc3df8b5a1934e3378cc82626_::operator() @ 0x1800473E4 (_lambda_96f1d78dc3df8b5a1934e3378cc82626_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61e56815dff744e001111df09606a666___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_96f1d78dc3df8b5a1934e3378cc82626_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

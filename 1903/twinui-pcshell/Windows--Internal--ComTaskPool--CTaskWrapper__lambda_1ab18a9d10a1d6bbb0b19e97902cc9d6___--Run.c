/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ab18a9d10a1d6bbb0b19e97902cc9d6___::Run @ 0x18003A250
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f4cd92f2d8fec744b3434a8e4552d084_::operator() @ 0x18003A974 (_lambda_f4cd92f2d8fec744b3434a8e4552d084_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ab18a9d10a1d6bbb0b19e97902cc9d6___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_f4cd92f2d8fec744b3434a8e4552d084_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

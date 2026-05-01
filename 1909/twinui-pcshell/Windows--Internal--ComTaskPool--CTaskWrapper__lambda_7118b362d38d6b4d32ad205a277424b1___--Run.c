/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1___::Run @ 0x18007A5C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7464ecf0133c584dcba4bc781e3eeb3c_::operator() @ 0x18007A634 (_lambda_7464ecf0133c584dcba4bc781e3eeb3c_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7118b362d38d6b4d32ad205a277424b1___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_7464ecf0133c584dcba4bc781e3eeb3c_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

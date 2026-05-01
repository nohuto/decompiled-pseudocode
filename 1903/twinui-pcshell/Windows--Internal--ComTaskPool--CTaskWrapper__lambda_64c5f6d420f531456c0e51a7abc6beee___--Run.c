/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_64c5f6d420f531456c0e51a7abc6beee___::Run @ 0x18002C780
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator() @ 0x18002C188 (_lambda_e3734e8a49c419fea61bf82ed4fde94a_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_64c5f6d420f531456c0e51a7abc6beee___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator()((CFrameApplicationPresentation **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

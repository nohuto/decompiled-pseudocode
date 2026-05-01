/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___::Run @ 0x180127E90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c95d809369eb2a01accf8ae73ccd45ab_::operator() @ 0x180127270 (_lambda_c95d809369eb2a01accf8ae73ccd45ab_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5ce05ca81319de189dd08790f978f8a8___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_c95d809369eb2a01accf8ae73ccd45ab_::operator()((struct CFrameApplicationPresentation **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

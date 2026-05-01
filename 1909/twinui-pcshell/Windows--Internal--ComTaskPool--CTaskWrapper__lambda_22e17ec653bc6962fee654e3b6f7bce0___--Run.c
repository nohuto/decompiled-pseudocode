/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_22e17ec653bc6962fee654e3b6f7bce0___::Run @ 0x18005A510
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6c7f1af74cf45db94091666f28e782cd_::operator() @ 0x18005A590 (_lambda_6c7f1af74cf45db94091666f28e782cd_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_22e17ec653bc6962fee654e3b6f7bce0___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_6c7f1af74cf45db94091666f28e782cd_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

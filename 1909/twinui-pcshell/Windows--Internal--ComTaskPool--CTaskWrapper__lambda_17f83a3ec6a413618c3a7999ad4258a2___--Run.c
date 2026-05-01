/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_17f83a3ec6a413618c3a7999ad4258a2___::Run @ 0x180035690
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b5963e117fe1767c779e8f4655192291_::operator() @ 0x180035414 (_lambda_b5963e117fe1767c779e8f4655192291_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_17f83a3ec6a413618c3a7999ad4258a2___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_b5963e117fe1767c779e8f4655192291_::operator()((unsigned int *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

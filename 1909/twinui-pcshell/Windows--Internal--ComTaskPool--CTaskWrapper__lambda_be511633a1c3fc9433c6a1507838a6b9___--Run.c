/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___::Run @ 0x180170620
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c33ccc33460f714f139ac7c6d94dc43a_::operator() @ 0x18016FA64 (_lambda_c33ccc33460f714f139ac7c6d94dc43a_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be511633a1c3fc9433c6a1507838a6b9___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_c33ccc33460f714f139ac7c6d94dc43a_::operator()((struct CFrameApplicationPresentation **)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

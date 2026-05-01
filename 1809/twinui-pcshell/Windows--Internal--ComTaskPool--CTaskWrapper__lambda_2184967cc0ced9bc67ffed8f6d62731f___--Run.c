/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2184967cc0ced9bc67ffed8f6d62731f___::Run @ 0x18005EE90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5628bd74a8815c20418001cca1cbd131_::operator() @ 0x18005EF04 (_lambda_5628bd74a8815c20418001cca1cbd131_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2184967cc0ced9bc67ffed8f6d62731f___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_5628bd74a8815c20418001cca1cbd131_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}

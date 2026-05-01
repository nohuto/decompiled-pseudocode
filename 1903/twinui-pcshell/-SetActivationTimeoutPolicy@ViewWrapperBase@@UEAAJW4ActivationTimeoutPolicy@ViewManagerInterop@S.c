/*
 * XREFs of ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802999C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x1802975A0 (-CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetActivationTimeoutPolicy(__int64 a1, int a2)
{
  RTL_SRWLOCK *v3; // rbx

  v3 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 280LL);
  AcquireSRWLockExclusive(v3);
  if ( a2 != *(_DWORD *)(a1 + 328) )
  {
    *(_DWORD *)(a1 + 328) = a2;
    ViewWrapperBase::CommitActivationTimeoutPolicy((ViewWrapperBase *)(a1 - 24));
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}

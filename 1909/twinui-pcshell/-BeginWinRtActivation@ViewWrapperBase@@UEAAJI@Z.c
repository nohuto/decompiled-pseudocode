/*
 * XREFs of ?BeginWinRtActivation@ViewWrapperBase@@UEAAJI@Z @ 0x1802B6590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::BeginWinRtActivation(ViewWrapperBase *this, int a2)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockExclusive(v3);
  *((_DWORD *)this + 84) = a2;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}

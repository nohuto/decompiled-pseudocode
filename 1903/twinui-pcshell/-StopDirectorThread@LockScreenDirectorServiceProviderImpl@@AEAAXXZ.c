/*
 * XREFs of ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1801D9D18
 * Callers:
 *     ?UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D9E40 (-UnsubscribeFromServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Revoke@AgileGitPtr@@QEAAJXZ @ 0x1800977A4 (-Revoke@AgileGitPtr@@QEAAJXZ.c)
 *     ?get@?$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6AXXZ@Z @ 0x1801D9E5C (-get@-$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::StopDirectorThread(RTL_SRWLOCK *this)
{
  const struct _TlgProvider_t *v2; // rcx
  char *Ptr; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<LockScreenServiceLogging>::get(
                                           this,
                                           lambda_63f7170bce12b7e543c3c21ebfae390d_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1804C7DF7, 0LL, 0LL, 2u, &pData);
  AcquireSRWLockExclusive(this + 18);
  if ( this[19].Ptr )
    AgileGitPtr::Revoke((AgileGitPtr *)&this[19]);
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(this + 18);
  Ptr = (char *)this[16].Ptr;
  if ( (unsigned __int64)(Ptr - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(Ptr);
}

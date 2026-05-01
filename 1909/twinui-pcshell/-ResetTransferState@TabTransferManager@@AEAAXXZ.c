/*
 * XREFs of ?ResetTransferState@TabTransferManager@@AEAAXXZ @ 0x18027807C
 * Callers:
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x180277320 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18027746C (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 */

void __fastcall TabTransferManager::ResetTransferState(TabTransferManager *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = (RTL_SRWLOCK *)((char *)this + 56);
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  *((_OWORD *)this + 12) = 0uLL;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  *((_DWORD *)this + 60) = -1;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_OWORD *)this + 13) = 0uLL;
  *((_WORD *)this + 126) = 0;
  *((_BYTE *)this + 254) = 0;
  *((_OWORD *)this + 14) = 0u;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 32);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 33);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 34);
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
}

/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x180066050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  wil::details *v9; // rcx
  unsigned int LastErrorFailHr; // esi

  v4 = *((_QWORD *)this + 6);
  v6 = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 36));
    v6 = v4;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v4 + 48));
  EnableIAMAccess(*(_QWORD *)(v6 + 40), 1LL);
  if ( (unsigned int)SetWindowBand(a2, a3, a4) )
    LastErrorFailHr = 0;
  else
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v9);
  EnableIAMAccess(*(_QWORD *)(v6 + 40), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(v4 + 48));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 36), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return LastErrorFailHr;
}

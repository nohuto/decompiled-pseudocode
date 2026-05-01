/*
 * XREFs of ?OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180064C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::OnTitleUpdated(CAppViewManager *this, HWND a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK v8; // [rsp+60h] [rbp+18h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, HWND, GUID *, __int64 *))(**((_QWORD **)this + 11) + 40LL))(
         *((_QWORD *)this + 11),
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v7) >= 0 )
    (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v7 + 200LL))(v7, a2);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}

/*
 * XREFs of _lambda_c3b823257698a8a46ce2aa70921db56d_::operator() @ 0x18001E6B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3b823257698a8a46ce2aa70921db56d___::Run @ 0x18001E5E0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c3b823257698a8a46ce2aa70921db56d___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001F220 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180020998 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c3b823257698a8a46ce2aa70921db56d_::operator()(WindowWrapperBase **a1)
{
  __int64 v2; // rcx
  WindowWrapperBase *v3; // rcx
  const char *v4; // r9
  int v5; // edi
  WindowWrapperBase *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v9; // [rsp+50h] [rbp+8h] BYREF
  bool v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
    v9 = 0;
    v3 = *a1;
    v10 = (*((_DWORD *)*a1 + 45) & 0x40) != 0;
    v11 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v3 + 2) + 272LL))((__int64)v3 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v11, &v10, &v9);
    v5 = *((_DWORD *)*a1 + 45) & 0x40;
    *((_DWORD *)*a1 + 45) &= ~0x40u;
    v6 = *a1;
    if ( (*((_WORD *)*a1 + 126) & 0xC0) == 0xC0 && (*((_DWORD *)v6 + 45) & 0x100) == 0 )
    {
      *((_WORD *)v6 + 126) = *((_WORD *)*a1 + 126) & 0xFFBF;
      WindowWrapperBase::CommitImportanceVector(*a1);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 35) + 224LL))(*((_QWORD *)*a1 + 35));
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x794,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return 0LL;
}

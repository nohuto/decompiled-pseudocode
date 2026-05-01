/*
 * XREFs of _lambda_dd3f6d7ea91d00747dcff202126691de_::operator() @ 0x18001E8CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd3f6d7ea91d00747dcff202126691de___::Run @ 0x18001E7C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_dd3f6d7ea91d00747dcff202126691de___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001F220 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180020998 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_dd3f6d7ea91d00747dcff202126691de_::operator()(WindowWrapperBase **a1)
{
  WindowWrapperBase *v2; // rcx
  const char *v3; // r9
  int v4; // esi
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+50h] [rbp+8h] BYREF
  bool v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 35) + 184LL))(*((_QWORD *)*a1 + 35), &SRWLock);
    LOBYTE(v8) = 1;
    v2 = *a1;
    v9 = (*((_DWORD *)*a1 + 45) & 0x40) != 0;
    v10 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v2 + 2) + 272LL))((__int64)v2 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v10, &v9, &v8);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x766,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  v4 = *((_DWORD *)*a1 + 45) & 0x40;
  *((_DWORD *)*a1 + 45) |= 0xC0u;
  if ( (*((_WORD *)*a1 + 126) & 0xC0) != 0xC0 )
  {
    *((_WORD *)*a1 + 126) |= 0x40u;
    *((_WORD *)*a1 + 126) |= 0x80u;
    WindowWrapperBase::CommitImportanceVector(*a1);
  }
  v5 = 0;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  LOBYTE(v5) = v4 != 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 35) + 216LL))(*((_QWORD *)*a1 + 35), v5);
  return 0LL;
}

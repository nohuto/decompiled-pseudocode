/*
 * XREFs of ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x180078BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActiveProcess(CPrivilegedDesktopOperations *this, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned int LastError; // edi
  __int64 v5; // rbx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  LastError = 0;
  v9 = v2;
  v5 = v2;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 36));
    v5 = v9;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  EnableIAMAccess(*(_QWORD *)(v5 + 40), 1LL);
  if ( !(unsigned int)SetActiveProcessForMonitor(a2, 0LL) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xA2,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v6);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v9);
  return LastError;
}

/*
 * XREFs of ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x180078CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActivationFilter(
        CPrivilegedDesktopOperations *this,
        HWND a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int LastError; // edi
  __int64 v7; // rbx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 6);
  LastError = 0;
  v11 = v3;
  v7 = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 36));
    v7 = v11;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v3 + 48));
  EnableIAMAccess(*(_QWORD *)(v7 + 40), 1LL);
  if ( !(unsigned int)SetActivationFilter(a2, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xB4,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v8);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v11);
  return LastError;
}

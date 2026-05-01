/*
 * XREFs of ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1801EA2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::ClearForeground(CPrivilegedDesktopOperations *this)
{
  __int64 v1; // rcx
  unsigned int LastError; // edi
  RTL_SRWLOCK *v3; // rbx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 6);
  LastError = 0;
  v7 = (RTL_SRWLOCK *)v1;
  v3 = (RTL_SRWLOCK *)v1;
  if ( v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 36));
    v3 = v7;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v1 + 48));
  EnableIAMAccess(v3[5].Ptr, 1LL);
  if ( !(unsigned int)ClearForeground() )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xAC,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v4);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v7);
  return LastError;
}

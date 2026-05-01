/*
 * XREFs of ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1801EC4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetFallbackForeground(
        CPrivilegedDesktopOperations *this,
        HWND a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int LastError; // edi
  RTL_SRWLOCK *v7; // rbx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 6);
  LastError = 0;
  v11 = (RTL_SRWLOCK *)v3;
  v7 = (RTL_SRWLOCK *)v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 36));
    v7 = v11;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v3 + 48));
  EnableIAMAccess(v7[5].Ptr, 1LL);
  if ( !(unsigned int)SetFallbackForeground(a2, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xBC,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v8);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v11);
  return LastError;
}

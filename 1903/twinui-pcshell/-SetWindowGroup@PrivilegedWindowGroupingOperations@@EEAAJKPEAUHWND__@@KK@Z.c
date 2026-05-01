/*
 * XREFs of ?SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z @ 0x1801EC700
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowGroupingOperations::SetWindowGroup(
        PrivilegedWindowGroupingOperations *this,
        unsigned int a2,
        HWND a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rcx
  unsigned int LastError; // edi
  RTL_SRWLOCK *v10; // rbx
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 6);
  LastError = 0;
  v14 = (RTL_SRWLOCK *)v5;
  v10 = (RTL_SRWLOCK *)v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 36));
    v10 = v14;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v5 + 48));
  EnableIAMAccess(v10[5].Ptr, 1LL);
  if ( !(unsigned int)SetWindowGroup(a2, a3, a4, a5) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x23C,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v11);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v14);
  return LastError;
}

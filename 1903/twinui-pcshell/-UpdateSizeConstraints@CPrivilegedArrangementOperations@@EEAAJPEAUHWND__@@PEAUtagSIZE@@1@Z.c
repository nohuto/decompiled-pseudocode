/*
 * XREFs of ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1801ED3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::UpdateSizeConstraints(
        CPrivilegedArrangementOperations *this,
        HWND a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  __int64 v4; // rcx
  unsigned int LastError; // edi
  RTL_SRWLOCK *v9; // rbx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 6);
  LastError = 0;
  v13 = (RTL_SRWLOCK *)v4;
  v9 = (RTL_SRWLOCK *)v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 36));
    v9 = v13;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v4 + 48));
  EnableIAMAccess(v9[5].Ptr, 1LL);
  if ( !(unsigned int)UpdateWindowTrackingInfo(a2, a4, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x177,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v10);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v13);
  return LastError;
}

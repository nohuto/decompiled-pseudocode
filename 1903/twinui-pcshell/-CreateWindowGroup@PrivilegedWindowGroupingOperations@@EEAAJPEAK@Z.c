/*
 * XREFs of ?CreateWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJPEAK@Z @ 0x1801EA3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowGroupingOperations::CreateWindowGroup(
        PrivilegedWindowGroupingOperations *this,
        unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned int LastError; // edi
  RTL_SRWLOCK *v5; // rbx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 6);
  LastError = 0;
  v10 = (RTL_SRWLOCK *)v2;
  v5 = (RTL_SRWLOCK *)v2;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 36));
    v5 = v10;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  EnableIAMAccess(v5[5].Ptr, 1LL);
  if ( (unsigned int)CreateWindowGroup(&v9) )
    *a2 = v9;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x223,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v6);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v10);
  return LastError;
}

/*
 * XREFs of ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x1801EC640
 * Callers:
 *     ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1801EC560 (-SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowCompositionAttribute(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        int a3,
        void *a4,
        unsigned int a5)
{
  __int64 v5; // rcx
  RTL_SRWLOCK *v9; // rbx
  const char *v10; // r9
  unsigned int LastError; // ebx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  void *v14; // [rsp+28h] [rbp-20h]
  unsigned int v15; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 6);
  v17 = (RTL_SRWLOCK *)v5;
  v9 = (RTL_SRWLOCK *)v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 36));
    v9 = v17;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v5 + 48));
  EnableIAMAccess(v9[5].Ptr, 1LL);
  v15 = a5;
  v13 = a3;
  v14 = a4;
  if ( (unsigned int)SetWindowCompositionAttribute(a2, &v13) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x103,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v10);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v17);
  return LastError;
}

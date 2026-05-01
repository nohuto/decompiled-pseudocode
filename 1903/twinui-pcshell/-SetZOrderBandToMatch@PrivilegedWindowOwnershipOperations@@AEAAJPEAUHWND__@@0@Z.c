/*
 * XREFs of ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1801EC964
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1801EC7B0 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v9; // rcx
  RTL_SRWLOCK *v10; // rbx
  const char *v11; // r9
  unsigned int LastError; // ebx
  int v13; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v14[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v16; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)GetWindowBand(a2, &v13) )
  {
    v7 = 477LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( !(unsigned int)GetWindowBand(a3, &v16) )
  {
    v7 = 480LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( v13 != v16 )
  {
    v9 = *((_QWORD *)this + 6);
    v14[0] = (RTL_SRWLOCK *)v9;
    v10 = (RTL_SRWLOCK *)v9;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 36));
      v10 = v14[0];
    }
    AcquireSRWLockExclusive((PSRWLOCK)(v9 + 48));
    EnableIAMAccess(v10[5].Ptr, 1LL);
    if ( !(unsigned int)SetWindowBand(a2, 0LL, v16) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1E5,
                    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                    v11);
      IamAccess::SyncIamAccess::~SyncIamAccess(v14);
      return LastError;
    }
    IamAccess::SyncIamAccess::~SyncIamAccess(v14);
  }
  return 0LL;
}

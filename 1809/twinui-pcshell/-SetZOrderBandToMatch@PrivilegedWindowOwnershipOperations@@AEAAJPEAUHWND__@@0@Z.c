/*
 * XREFs of ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1801A5540
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1801A5390 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18002A3B0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800EF81C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  const char *v6; // r9
  __int64 v7; // rdx
  volatile int *v9; // rdx
  RTL_SRWLOCK *v10; // rbx
  const char *v11; // r9
  unsigned int LastError; // ebx
  int v13; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v14[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v16; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)GetWindowBand(a2, &v13) )
  {
    v7 = 469LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( !(unsigned int)GetWindowBand(a3, &v16) )
  {
    v7 = 472LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( v13 != v16 )
  {
    v10 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
    v14[0] = v10;
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
        (__int64)v10,
        v9);
    AcquireSRWLockExclusive(v10 + 6);
    EnableIAMAccess(v10[5].Ptr, 1LL);
    if ( !(unsigned int)SetWindowBand(a2, 0LL, v16) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1DD,
                    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                    v11);
      IamAccess::SyncIamAccess::~SyncIamAccess(v14);
      return LastError;
    }
    IamAccess::SyncIamAccess::~SyncIamAccess(v14);
  }
  return 0LL;
}

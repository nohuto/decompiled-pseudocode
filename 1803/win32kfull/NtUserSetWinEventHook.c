/*
 * XREFs of NtUserSetWinEventHook @ 0x1C00D7620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D772C (--0-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00D7798 (--1-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     _SetWinEventHook @ 0x1C00D77D0 (_SetWinEventHook.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D7A80 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  tagObjLock *v19; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL, gptiCurrent);
    v13 = 0LL;
  }
  else
  {
    CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(v20, gptiCurrent + 384LL);
    CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(&v19);
    v12 = (__int64 *)SetWinEventHook(a1, a2, a3, a4, a5, (int)a6, a7, a8);
    tagObjLock::UnLock(v19);
    CLockExclusiveUMCBA<DLT_THREADINFO>::~CLockExclusiveUMCBA<DLT_THREADINFO>(v20);
    v13 = 0LL;
    if ( v12 )
      v13 = *v12;
    EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v13);
  }
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v13;
}

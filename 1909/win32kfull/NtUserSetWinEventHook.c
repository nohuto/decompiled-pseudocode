/*
 * XREFs of NtUserSetWinEventHook @ 0x1C00560F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0056214 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     _SetWinEventHook @ 0x1C0056264 (_SetWinEventHook.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0056644 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0056698 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  tagDomLock *v19; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL, v12, v13, v14);
    v16 = 0LL;
  }
  else
  {
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
      v20,
      gptiCurrent + 384LL);
    CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v19);
    v15 = (__int64 *)SetWinEventHook(a1, a2, a3, a4, a5, (int)a6, a7, a8);
    tagDomLock::UnLockExclusive(v19);
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v20);
    v16 = 0LL;
    if ( v15 )
      v16 = *v15;
    EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v16);
  }
  UserSessionSwitchLeaveCrit(v17);
  return v16;
}

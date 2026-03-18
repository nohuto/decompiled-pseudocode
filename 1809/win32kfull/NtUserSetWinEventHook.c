/*
 * XREFs of NtUserSetWinEventHook @ 0x1C00B4050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B4174 (--1-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     _SetWinEventHook @ 0x1C00B41C4 (_SetWinEventHook.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B45A8 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B45FC (--0-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  tagObjLock *v21; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v22[24]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL, gptiCurrent, v12, v13);
    v15 = 0LL;
  }
  else
  {
    CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(v22, gptiCurrent + 392LL);
    CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(&v21);
    v14 = (__int64 *)SetWinEventHook(a1, a2, a3, a4, a5, (int)a6, a7, a8);
    tagObjLock::UnLock(v21);
    CLockExclusiveUMCBA<DLT_THREADINFO>::~CLockExclusiveUMCBA<DLT_THREADINFO>(v22);
    v15 = 0LL;
    if ( v14 )
      v15 = *v14;
    EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v15);
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v15;
}

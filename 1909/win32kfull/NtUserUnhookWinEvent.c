/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C0056FF0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0056214 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0056644 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0056698 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     _UnhookWinEvent @ 0x1C0056FA0 (_UnhookWinEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(unsigned __int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rcx
  tagDomLock *v6[3]; // [rsp+20h] [rbp-18h] BYREF
  tagDomLock *v7; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
    v6,
    (tagDomLock *)(gptiCurrent + 384LL));
  CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v7);
  v2 = HMValidateHandle(a1, 15);
  v3 = 0;
  if ( v2 )
    v3 = UnhookWinEvent(v2);
  tagDomLock::UnLockExclusive(v7);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}

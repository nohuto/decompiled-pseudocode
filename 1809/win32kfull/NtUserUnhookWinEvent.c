/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C00B6960
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B4174 (--1-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B45A8 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B45FC (--0-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     _UnhookWinEvent @ 0x1C00B6A08 (_UnhookWinEvent.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  tagObjLock *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  tagObjLock *v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(v10, (tagObjLock *)(gptiCurrent + 392LL));
  CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(&v11);
  LOBYTE(v2) = 15;
  v3 = HMValidateHandle(a1, v2);
  v4 = 0;
  if ( v3 )
    v4 = UnhookWinEvent(v3);
  tagObjLock::UnLock(v11);
  CLockExclusiveUMCBA<DLT_THREADINFO>::~CLockExclusiveUMCBA<DLT_THREADINFO>(v10);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}

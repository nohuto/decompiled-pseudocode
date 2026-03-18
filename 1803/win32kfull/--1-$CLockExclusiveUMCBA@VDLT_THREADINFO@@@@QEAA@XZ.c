/*
 * XREFs of ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00D7798
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00D7580 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C00D7620 (NtUserSetWinEventHook.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockExclusiveUMCBA<DLT_THREADINFO>::~CLockExclusiveUMCBA<DLT_THREADINFO>(tagObjLock **a1)
{
  unsigned int DLT; // eax

  DLT = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(DLT);
  tagObjLock::UnLock(a1[1]);
  tagObjLock::UnLock(*a1);
}

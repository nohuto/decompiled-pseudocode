/*
 * XREFs of ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B5464
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00B5340 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6240 (NtUserUnhookWinEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax

  DLT = DLT_THREADINFO::getDLT();
  ptiUnSetDomainLockBit(DLT);
  tagObjLock::UnLockExclusive(a1[1]);
  tagDomLock::UnLockShared(*a1);
}

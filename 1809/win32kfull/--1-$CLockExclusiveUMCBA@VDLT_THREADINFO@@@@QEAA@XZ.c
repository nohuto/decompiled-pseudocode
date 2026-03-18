/*
 * XREFs of ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B4174
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     NtUserSetWinEventHook @ 0x1C00B4050 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6960 (NtUserUnhookWinEvent.c)
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

/*
 * XREFs of ?CleanupDomainLocks@@YAXXZ @ 0x1C00B4A14
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1C02691C4 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x1C00B4B30 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 */

void CleanupDomainLocks(void)
{
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainProcessInfoLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainThreadInfoLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainPostLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainQueueLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainHookLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainWinEventLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainWindowLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainHandleManagerLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainClientLibLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainPowerTransitionsStateLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainDummyLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainTlLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainRawInputLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainAsyncKeyStateLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainDesktopLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainJobLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainForegroundLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainActiveLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainInputDelegationLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainQueueMgmtLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainThreadRundownLock);
  tagDomLock::LockUnInitialize((tagDomLock *)&gDomainEtwLock);
}

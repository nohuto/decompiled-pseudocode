/*
 * XREFs of CmpGetNextActiveHive @ 0x1405B1474
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14026C444 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoReconcileNextHive @ 0x1405B0F90 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x1405B1330 (CmpDoFlushNextHive.c)
 *     CmpTransMgrPrepare @ 0x1406FCDDC (CmpTransMgrPrepare.c)
 *     CmpDoLocalizeNextHive @ 0x1407086B0 (CmpDoLocalizeNextHive.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407595E4 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x14075E7C0 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1407EB6A0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1407ECDC0 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F01C8 (CmpIsHiveAlreadyLoaded.c)
 *     CmpBlockTwoHiveWrites @ 0x1407F0754 (CmpBlockTwoHiveWrites.c)
 *     CmFreezeRegistry @ 0x1407F5824 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x1407F5A74 (CmThawRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = 0LL;
  v3 = &CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 *)&a1[200];
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CmpHiveListHead )
      break;
    v1 = v3 - 200;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 204);
  return v1;
}

/*
 * XREFs of CmpGetNextActiveHive @ 0x140661E60
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FE8C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     CmpDoReconcileNextHive @ 0x140661C00 (CmpDoReconcileNextHive.c)
 *     CmpDoFlushNextHive @ 0x140661D20 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F4DA4 (CmpBlockTwoHiveWrites.c)
 *     CmpDoLocalizeNextHive @ 0x140733580 (CmpDoLocalizeNextHive.c)
 *     CmpHandlePageFileOpenNotification @ 0x14077FE28 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x140785908 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1408261C8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140827840 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14082A9C4 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x14082E618 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14082E868 (CmThawRegistry.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
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

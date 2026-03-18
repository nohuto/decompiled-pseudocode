/*
 * XREFs of CmpGetNextActiveHive @ 0x140638590
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14027FBEC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrCommit @ 0x140636410 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063661C (CmpTransMgrPrepare.c)
 *     CmpDoFlushNextHive @ 0x140638450 (CmpDoFlushNextHive.c)
 *     CmpDoReconcileNextHive @ 0x140691010 (CmpDoReconcileNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F6B14 (CmpBlockTwoHiveWrites.c)
 *     CmpDoLocalizeNextHive @ 0x1407357E0 (CmpDoLocalizeNextHive.c)
 *     CmpHandlePageFileOpenNotification @ 0x140782848 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x140787C68 (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x1408258C8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140826F40 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14082A0C4 (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x14082E494 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14082E6E4 (CmThawRegistry.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
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

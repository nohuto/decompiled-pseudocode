/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x14000FBF0
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405810C4 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AA470 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405AA61C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x1405AA6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AA8A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AD310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1405AD6F8 (CmpFreeKeyByCell.c)
 *     HvUnlockHiveFlusherShared @ 0x1405AF5D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1405AF600 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbExclusive @ 0x1405D1728 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E3580 (CmpUnlockKcb.c)
 *     CmpLogHiveDestroyEvent @ 0x1407EBA6C (CmpLogHiveDestroyEvent.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR v4; // rdi

  v2 = *(_QWORD *)(a2 + 64);
  v4 = *(_QWORD *)(v2 + 64);
  CmpLockHashEntryExclusiveByKcb(v2);
  CmpLockKcbExclusive(v4);
  CmpLockKcbExclusive(v2);
  HvLockHiveFlusherShared(*(_QWORD *)(v2 + 24));
  CmpFreeKeyByCell(*(_QWORD *)(v2 + 24));
  CmpFlushNotifiesOnKeyBodyList(v2, 1LL);
  CmpMarkKeyUnbacked(v2);
  CmpDiscardKcb(v2);
  CmpRemoveLayerLinkForDiscardedKcb(v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  HvUnlockHiveFlusherShared(*(_QWORD *)(v2 + 24));
  CmpUnlockKcb(v2);
  CmpUnlockKcb(v4);
  return CmpUnlockHashEntryByKcb(v2);
}

/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x14008BE7C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14063DD64 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x140631900 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140631C1C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x14063A964 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063AB64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063ABE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpLogHiveDestroyEvent @ 0x1408265C4 (CmpLogHiveDestroyEvent.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v6; // rsi

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v3 + 72);
  CmpLockHashEntryExclusiveByKcb(v3);
  CmpLockKcbExclusive(v6);
  CmpLockKcbExclusive(v3);
  HvLockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpFreeKeyByCell(*(_QWORD *)(v3 + 32), *(unsigned int *)(v3 + 40));
  CmpFlushNotifiesOnKeyBodyList(v3, 1LL, a3);
  CmpMarkKeyUnbacked(v3, a3);
  CmpDiscardKcb(v3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveDestroyEvent(a1);
  HvUnlockHiveFlusherShared(*(_QWORD *)(v3 + 32));
  CmpUnlockKcb(v3);
  CmpUnlockKcb(v6);
  return CmpUnlockHashEntryByKcb(v3);
}

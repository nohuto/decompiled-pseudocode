/*
 * XREFs of SetForegroundPriority @ 0x1C0211EF0
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9B04 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0016A00 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0016A38 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __fastcall SetForegroundPriority(__int64 a1, int a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v4, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
  anonymous_namespace_::RequestPriorityUpdate(a1, a2 == 0);
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}

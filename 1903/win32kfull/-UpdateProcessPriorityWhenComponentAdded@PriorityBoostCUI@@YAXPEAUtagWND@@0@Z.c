/*
 * XREFs of ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0006B24
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006A60 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0016A00 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0016A38 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenComponentAdded(
        PriorityBoostCUI *this,
        struct tagWND *a2,
        struct tagWND *a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v5, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 416LL) + 812LL) & 0x60000) != 0 )
    anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)a2 + 2), 0LL);
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
}

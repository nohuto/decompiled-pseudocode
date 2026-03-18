/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0037310
 * Callers:
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C0037250 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01C5D74 (-AddMapping@InputObjectMap@@SAJU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJU_LUID@@@Z @ 0x1C01C6260 (-RemoveMapping@InputObjectMap@@SAJU_LUID@@@Z.c)
 *     ?ResolveInputObject@InputObjectMap@@SAJU_LUID@@PEAPEBUCompositionInputObject@@@Z @ 0x1C01C63F8 (-ResolveInputObject@InputObjectMap@@SAJU_LUID@@PEAPEBUCompositionInputObject@@@Z.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = &InputObjectMap::s_hashTableLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  return this;
}

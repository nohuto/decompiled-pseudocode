/*
 * XREFs of CmpFreeSiloContextCallback @ 0x1407F7EA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F7230 (CmpStopSiloKeyLockTracker.c)
 */

PVOID __fastcall CmpFreeSiloContextCallback(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  PVOID v4[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v4);
  CmpStopSiloKeyLockTracker(BugCheckParameter2);
  v2 = *(void **)(BugCheckParameter2 + 32);
  if ( v2 )
    ObfDereferenceObject(v2);
  return CmCleanupThreadInfo(v4);
}

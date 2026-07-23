/*
 * XREFs of CmInitServerSiloState @ 0x1407318F4
 * Callers:
 *     CmpInitSiloSupport @ 0x1407318C4 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1408886A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpStartSiloKeyLockTracker @ 0x14073195C (CmpStartSiloKeyLockTracker.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407319A8 (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140731B1C (CmpGetOrCreateContextForSiloNoRef.c)
 */

__int64 CmInitServerSiloState()
{
  __int64 v0; // r9
  int v1; // eax
  __int64 v2; // rdx
  unsigned int v3; // r8d
  PVOID v5[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  CmpInitializeThreadInfo(v5);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &BugCheckParameter2);
  if ( v1 >= 0 && (int)CmpStartSiloRegistryNamespace(BugCheckParameter2, v2, (unsigned int)v1) >= 0 )
    CmpStartSiloKeyLockTracker(BugCheckParameter2);
  CmCleanupThreadInfo(v5);
  return v3;
}

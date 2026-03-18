/*
 * XREFs of CmInitServerSiloState @ 0x14077C1B0
 * Callers:
 *     CmpInitSiloSupport @ 0x14077C180 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C57C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpStartSiloKeyLockTracker @ 0x14077C1F0 (CmpStartSiloKeyLockTracker.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077C23C (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077C368 (CmpGetOrCreateContextForSiloNoRef.c)
 */

__int64 __fastcall CmInitServerSiloState(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  result = CmpGetOrCreateContextForSiloNoRef(a1, &BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    result = CmpStartSiloRegistryNamespace(BugCheckParameter2);
    if ( (int)result >= 0 )
    {
      result = CmpStartSiloKeyLockTracker(BugCheckParameter2);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}

/*
 * XREFs of CmInitServerSiloState @ 0x14077EA80
 * Callers:
 *     CmpInitSiloSupport @ 0x14077EA50 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpStartSiloKeyLockTracker @ 0x14077EAC0 (CmpStartSiloKeyLockTracker.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077EB0C (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077EC80 (CmpGetOrCreateContextForSiloNoRef.c)
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

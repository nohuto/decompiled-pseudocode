/*
 * XREFs of SmpLookupControlBlock @ 0x140004358
 * Callers:
 *     SmpStopCsr @ 0x140001020 (SmpStopCsr.c)
 *     SmpHandleConnectionRequest @ 0x140003DE0 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpTreeLookupControlBlock @ 0x14000439C (SmpTreeLookupControlBlock.c)
 */

__int64 __fastcall SmpLookupControlBlock(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&SmpControlLock);
  v2 = SmpTreeLookupControlBlock(SmpControlBlockRoot, a1);
  RtlReleaseSRWLockShared(&SmpControlLock);
  return v2;
}

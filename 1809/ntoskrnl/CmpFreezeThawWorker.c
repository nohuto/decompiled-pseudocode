/*
 * XREFs of CmpFreezeThawWorker @ 0x1407F6E50
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmThawRegistry @ 0x1407F6C74 (CmThawRegistry.c)
 */

PVOID CmpFreezeThawWorker()
{
  PVOID v1[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v1);
  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    CmThawRegistry();
  return CmCleanupThreadInfo(v1);
}

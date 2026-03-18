/*
 * XREFs of CmpFreezeThawWorker @ 0x1407F5C70
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     CmThawRegistry @ 0x1407F5A94 (CmThawRegistry.c)
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

/*
 * XREFs of CmpReleaseShutdownRundown @ 0x1405B1174
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *CmpReleaseShutdownRundown()
{
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

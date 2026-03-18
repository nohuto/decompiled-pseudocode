/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1405CB2C0
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x1400047D8 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14012A2D8 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x140196310 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x14059A114 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A8E8 (PopWriteHiberPages.c)
 *     InitializePool @ 0x1409EE7E8 (InitializePool.c)
 *     InitializePagedPool @ 0x1409EEC50 (InitializePagedPool.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A0B0CC (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * a1) + 7888LL);
}

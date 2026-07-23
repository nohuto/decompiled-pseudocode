/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1406269DC
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x1400A608C (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140129058 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x14018D5E8 (ExpDetermineLargePagePolicy.c)
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 *     InitializePool @ 0x1409B7DF8 (InitializePool.c)
 *     InitializePagedPool @ 0x1409B8280 (InitializePagedPool.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1409DEC98 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * a1) + 7120LL);
}

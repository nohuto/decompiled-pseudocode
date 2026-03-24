/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1406259BC
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x1400A614C (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140128F88 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x14018D4A8 (ExpDetermineLargePagePolicy.c)
 *     PopWriteHiberPages @ 0x140569C48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056A5F4 (PopRequestWrite.c)
 *     InitializePool @ 0x1409B6DF8 (InitializePool.c)
 *     InitializePagedPool @ 0x1409B7280 (InitializePagedPool.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1409DDC98 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043A748 + 8LL * a1) + 7120LL);
}

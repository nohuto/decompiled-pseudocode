/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1405CADC0
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x140004748 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1401298B8 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x140195B30 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x14059A134 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A908 (PopWriteHiberPages.c)
 *     InitializePool @ 0x1409EE8D0 (InitializePool.c)
 *     InitializePagedPool @ 0x1409EED38 (InitializePagedPool.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A0ABA0 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * a1) + 7888LL);
}

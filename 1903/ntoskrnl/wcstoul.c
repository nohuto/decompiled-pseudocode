/*
 * XREFs of wcstoul @ 0x1401A2510
 * Callers:
 *     PnpStringToDwordValue @ 0x1401450D0 (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140703888 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x14073B7DC (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 *     _CmSplitDevicePanelId @ 0x140767558 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140768220 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x140771BA4 (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x140A02640 (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A227A8 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1401A228C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}

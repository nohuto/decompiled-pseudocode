/*
 * XREFs of wcstoul @ 0x1401A2C30
 * Callers:
 *     PnpStringToDwordValue @ 0x140145770 (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140705668 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x14073D6DC (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 *     _CmSplitDevicePanelId @ 0x14076C058 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14076CD20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x140775184 (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x140A02B5C (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x140A22888 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x1401A29AC (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}

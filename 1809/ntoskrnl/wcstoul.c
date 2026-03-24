/*
 * XREFs of wcstoul @ 0x140197CC0
 * Callers:
 *     PnpStringToDwordValue @ 0x14015D1EC (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x1406AFC8C (LocalGetAclForString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E7C80 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x1407116B0 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 *     _CmSplitDevicePanelId @ 0x140749B3C (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A850 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE6C (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x1409AF2B4 (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x1409DF290 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x140197A3C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}

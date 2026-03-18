/*
 * XREFs of wcstoul @ 0x140197CA0
 * Callers:
 *     PnpStringToDwordValue @ 0x14015D1CC (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x1406AFCAC (LocalGetAclForString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E7CA0 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x1407116D0 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140712C24 (BiOpenSystemStore.c)
 *     _CmSplitDevicePanelId @ 0x140749B5C (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A870 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE8C (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x1409AF2B4 (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x1409DF290 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x140197A1C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}

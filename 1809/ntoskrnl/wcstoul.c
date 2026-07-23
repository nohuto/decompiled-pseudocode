/*
 * XREFs of wcstoul @ 0x140197E00
 * Callers:
 *     PnpStringToDwordValue @ 0x14015D2EC (PnpStringToDwordValue.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406E8F20 (_CmCreateOrdinalInstanceKey.c)
 *     BiCleanupLoadedStores @ 0x140712950 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     _CmSplitDevicePanelId @ 0x14074AD2C (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074BA40 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x14074F05C (LocalpConvertStringSidToSid.c)
 *     KsepMatchInitBiosInfo @ 0x1409B02B4 (KsepMatchInitBiosInfo.c)
 *     IopLoadBootHotPatches @ 0x1409E0290 (IopLoadBootHotPatches.c)
 * Callees:
 *     wcstoxlX @ 0x140197B7C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}

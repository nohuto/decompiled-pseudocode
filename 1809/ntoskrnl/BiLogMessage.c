/*
 * XREFs of BiLogMessage @ 0x140715354
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1403275E0 (BiLogFileOwnerProcess.c)
 *     BcdForciblyUnloadStore @ 0x1406E29BC (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1406E3854 (BcdFlushStore.c)
 *     BiLoadSystemStore @ 0x1407120C8 (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x1407121E8 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x1407122BC (BiAddStoreFromFile.c)
 *     BiLoadHive @ 0x140712584 (BiLoadHive.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BcdGetSystemStorePath @ 0x140712D44 (BcdGetSystemStorePath.c)
 *     BcdOpenStore @ 0x140713508 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1408A4354 (SepSecureBootCorrectBcd.c)
 *     BiCreateObject @ 0x1408F1E60 (BiCreateObject.c)
 *     BiAddBootEntry @ 0x1408F2F88 (BiAddBootEntry.c)
 *     BiBindEfiBootManager @ 0x1408F322C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1408F3454 (BiBindEfiEntries.c)
 *     BiBindEfiNamespaceObjects @ 0x1408F368C (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x1408F3728 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1408F4060 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x1408F45A4 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1408F461C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1408F4724 (BiEnumerateBootEntries.c)
 *     BiExportBcdObjects @ 0x1408F4820 (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x1408F4948 (BiExportEfiBootManager.c)
 *     BiExportStoreAlterationsToEfi @ 0x1408F4C98 (BiExportStoreAlterationsToEfi.c)
 *     BiModifyBootEntry @ 0x1408F553C (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F55A4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F5678 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1408F57FC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1408F586C (BiSetBootOptions.c)
 *     BiTranslateBootEntryId @ 0x1408F58DC (BiTranslateBootEntryId.c)
 *     BiTranslateObjectIdentifier @ 0x1408F5B1C (BiTranslateObjectIdentifier.c)
 *     BiUpdateEfiEntry @ 0x1408F5E88 (BiUpdateEfiEntry.c)
 * Callees:
 *     <none>
 */

__int64 BiLogMessage(_QWORD a1, _QWORD a2, ...)
{
  return 0LL;
}

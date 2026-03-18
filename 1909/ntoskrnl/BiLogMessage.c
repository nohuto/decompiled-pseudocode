/*
 * XREFs of BiLogMessage @ 0x1407403B4
 * Callers:
 *     BiLogFileOwnerProcess @ 0x14034868C (BiLogFileOwnerProcess.c)
 *     BcdForciblyUnloadStore @ 0x140729F08 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14072B0C4 (BcdFlushStore.c)
 *     BiLoadSystemStore @ 0x14073D214 (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x14073D340 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14073D414 (BiAddStoreFromFile.c)
 *     BcdCloseStore @ 0x14073DA4C (BcdCloseStore.c)
 *     BcdGetSystemStorePath @ 0x14073DAE8 (BcdGetSystemStorePath.c)
 *     BcdOpenStore @ 0x14073E488 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 *     BiLoadHive @ 0x14074106C (BiLoadHive.c)
 *     SepSecureBootCorrectBcd @ 0x1408E1314 (SepSecureBootCorrectBcd.c)
 *     BiCreateObject @ 0x14092E29C (BiCreateObject.c)
 *     BiAddBootEntry @ 0x14092F3DC (BiAddBootEntry.c)
 *     BiBindEfiBootManager @ 0x14092F684 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14092F8AC (BiBindEfiEntries.c)
 *     BiBindEfiNamespaceObjects @ 0x14092FAF4 (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1409304D0 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x1409309EC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140930A68 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140930B7C (BiEnumerateBootEntries.c)
 *     BiExportBcdObjects @ 0x140930C78 (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x140930DA0 (BiExportEfiBootManager.c)
 *     BiExportStoreAlterationsToEfi @ 0x14093110C (BiExportStoreAlterationsToEfi.c)
 *     BiModifyBootEntry @ 0x1409319C8 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140931A34 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140931B0C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140931C94 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140931D08 (BiSetBootOptions.c)
 *     BiTranslateBootEntryId @ 0x140931D7C (BiTranslateBootEntryId.c)
 *     BiTranslateObjectIdentifier @ 0x140931FC4 (BiTranslateObjectIdentifier.c)
 *     BiUpdateEfiEntry @ 0x140932330 (BiUpdateEfiEntry.c)
 * Callees:
 *     <none>
 */

__int64 BiLogMessage(_QWORD a1, _QWORD a2, ...)
{
  return 0LL;
}

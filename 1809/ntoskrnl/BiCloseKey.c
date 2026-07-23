/*
 * XREFs of BiCloseKey @ 0x140714B90
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1403274D0 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140327598 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x1406E2A50 (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     BiCloseStore @ 0x1407121E8 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x1407122BC (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x1407124B4 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x140712950 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140715024 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1408F1B9C (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1408F1E60 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1408F221C (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408F2704 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1408F3728 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x14016E6C8 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14016E6DC (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x140714BE0 (BiCreateKeySecurityDescriptor.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241LL);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}

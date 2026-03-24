/*
 * XREFs of BiCloseKey @ 0x1407138F0
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1403272E0 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1403273A8 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x1406E17B0 (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x1406E1E6C (BiDeleteKey.c)
 *     BiCloseStore @ 0x140710F48 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14071101C (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140711214 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x1407116B0 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14071259C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140712E24 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FA0 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140713D84 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1408F08DC (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1408F0BA0 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1408F0F5C (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408F1444 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1408F2468 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x14016E5C8 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14016E5DC (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713940 (BiCreateKeySecurityDescriptor.c)
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

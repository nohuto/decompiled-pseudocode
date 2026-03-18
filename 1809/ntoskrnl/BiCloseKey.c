/*
 * XREFs of BiCloseKey @ 0x140713910
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1403271E0 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1403272A8 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x1406E17D0 (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x1406E1E8C (BiDeleteKey.c)
 *     BiCloseStore @ 0x140710F68 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14071103C (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140711234 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x1407116D0 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x1407125BC (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x140712C24 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FC0 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140713390 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713570 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140713DA4 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1408F08FC (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1408F0BC0 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1408F0F7C (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408F1464 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x1408F2488 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x14016E5A8 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14016E5BC (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713960 (BiCreateKeySecurityDescriptor.c)
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

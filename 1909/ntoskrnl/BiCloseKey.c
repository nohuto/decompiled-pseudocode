/*
 * XREFs of BiCloseKey @ 0x14073FBB4
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140348560 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140348644 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x140729F9C (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x14072A888 (BiDeleteKey.c)
 *     BiCloseStore @ 0x14073D340 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14073D414 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14073D60C (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x14073D6DC (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140740078 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14092DFE0 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14092E29C (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14092E66C (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14092EB54 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140178190 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x1401781A4 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14073FC04 (BiCreateKeySecurityDescriptor.c)
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

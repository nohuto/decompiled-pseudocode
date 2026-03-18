/*
 * XREFs of BiCloseKey @ 0x14073DCB4
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x140348B00 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140348BE4 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x140728C2C (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x140729518 (BiDeleteKey.c)
 *     BiCloseStore @ 0x14073B440 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14073B514 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14073B70C (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x14073B7DC (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073D318 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x14073E178 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14092E56C (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14092E828 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14092EBF8 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14092F0E0 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140930128 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140177AA0 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x140177AB4 (BiZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14073DD04 (BiCreateKeySecurityDescriptor.c)
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

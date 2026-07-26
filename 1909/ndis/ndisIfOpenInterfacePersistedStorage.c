/*
 * XREFs of ndisIfOpenInterfacePersistedStorage @ 0x1C0114E70
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0067A40 (ndisIfCreateOrUpdateInterface.c)
 * Callees:
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfOpenInterfacePersistedStorage(unsigned int *a1, KRegKey *a2)
{
  return ndisIfOpenInterfaceRegistryKey(a1, a2, 1u, 1);
}

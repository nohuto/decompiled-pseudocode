/*
 * XREFs of ndisIfOpenInterfacePersistedStorage @ 0x1C00E33B0
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0042394 (ndisIfCreateOrUpdateInterface.c)
 * Callees:
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfOpenInterfacePersistedStorage(unsigned int *a1, KRegKey *a2)
{
  return ndisIfOpenInterfaceRegistryKey(a1, a2, 1u, 1);
}

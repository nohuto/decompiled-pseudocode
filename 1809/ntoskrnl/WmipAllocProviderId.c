/*
 * XREFs of WmipAllocProviderId @ 0x1406CFFEC
 * Callers:
 *     WmipAllocRegEntry @ 0x14016B5C8 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

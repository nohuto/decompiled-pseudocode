/*
 * XREFs of WmipAllocProviderId @ 0x1406D000C
 * Callers:
 *     WmipAllocRegEntry @ 0x14016B5A8 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

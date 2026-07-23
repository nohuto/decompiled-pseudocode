/*
 * XREFs of WmipAllocProviderId @ 0x1406D128C
 * Callers:
 *     WmipAllocRegEntry @ 0x14016B6C8 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

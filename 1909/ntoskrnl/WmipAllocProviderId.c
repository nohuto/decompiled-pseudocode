/*
 * XREFs of WmipAllocProviderId @ 0x1406F1084
 * Callers:
 *     WmipAllocRegEntry @ 0x140175FB8 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

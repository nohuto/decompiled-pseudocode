/*
 * XREFs of WmipAllocProviderId @ 0x1406EF434
 * Callers:
 *     WmipAllocRegEntry @ 0x140175888 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}

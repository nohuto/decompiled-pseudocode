/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x1800894C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrQueryModuleInfoLocalLoaderLock()
{
  return LdrpAcquireLoaderLock();
}

/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x180085760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrQueryModuleInfoLocalLoaderLock(__int64 a1)
{
  return LdrpAcquireLoaderLock(a1);
}
